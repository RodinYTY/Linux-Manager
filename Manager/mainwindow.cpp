#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // model
    syst = new Syst();

    update_per_sec();
    initModel();
    set_const_text();

    // dynamic refresh
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update_per_sec()));
    timer->start(1000);

    timer1 = new QTimer(this);
    connect(timer1, SIGNAL(timeout()), this, SLOT(update_per_5sec()));
    timer1->start(5000);
    connect(ui->tableView, SIGNAL(clicked(QModelIndex)), this, SLOT(fill_le_pid(const QModelIndex &)));

    search_index = all;
    setWindowIcon(QIcon("manager.ico"));
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//不可选中
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_per_sec(){
    // current time
    this->ui->cur_time->setText(QDateTime::currentDateTime().toString(" yyyy-MM-dd hh:mm:ss dddd"));

    // runtime
    QString runtime_str;
    unsigned int d, h, m, s = 0;
    s = syst->getRuntime();
    d = s / 86400; s -= d * 86400;
    h = s / 3600; s -= h * 3600;
    m = s / 60; s -= m * 60;
    if(d)
        runtime_str += QString::number(d) + " 天 ";
    if(h)
        runtime_str += QString::number(h) + " 时 ";
    if(m)
        runtime_str += QString::number(m) + " 分 ";
    runtime_str += QString::number(s) + " 秒 ";
    this->ui->label_runtime->setText(runtime_str);

    // cpu_utilization
    syst->updateCPUState();
    QString cpu_util_str = QString("%1").arg(syst->cpu_state_now.util, 3, 10, QLatin1Char(' '));
    cpu_util_str += " %";
    this->ui->cpu_util->setText(cpu_util_str);

    // push the data into deque
    if(syst->cpuDeqNum != 120){
        syst->cpuUtilDeq.push_back(syst->cpu_state_now.util);
        syst->cpuDeqNum += 1;
    }
    else{
        syst->cpuUtilDeq.pop_front(); // discard the earliest
        syst->cpuUtilDeq.push_back(syst->cpu_state_now.util);
    }

    // mem_utilization
    syst->updateMemState();
    QString mem_util_str = QString("%1").arg(syst->mem_state.mem_util, 3, 10, QLatin1Char(' '));
    mem_util_str += " %";
    this->ui->mem_util->setText(mem_util_str);
    double memUsageD = syst->mem_state.mem_total * syst->mem_state.mem_util / 100.0;
    this->ui->label_memUsage->setText(common::segmentedByComma(QString::number(memUsageD, 'f', 0)) + " KB");


    if(syst->memDeqNum != 120){
        syst->memUtilDeq.push_back(syst->mem_state.mem_util);
        syst->memDeqNum += 1;
    }
    else{
        syst->memUtilDeq.pop_front();
        syst->memUtilDeq.push_back(syst->mem_state.mem_util);
    }

    update_graph();
}

void MainWindow::update_per_5sec(){
    initModel(); // empty model
    syst->updateProList();
    // 筛选需要显示的信息
    int row = 0;
    for(int i = 0; i < syst->proList.size(); ++i){
        if(search_show(syst->proList[i])){
            display(row, syst->proList[i]);
            row += 1;
        }
    }
}

void MainWindow::initModel(){
    this->model = new QStandardItemModel;
    model->setHorizontalHeaderItem(0, new QStandardItem("名称"));
    model->setHorizontalHeaderItem(1, new QStandardItem("状态"));
    model->setHorizontalHeaderItem(2, new QStandardItem("PID"));
    model->setHorizontalHeaderItem(3, new QStandardItem("PPID"));
    model->setHorizontalHeaderItem(4, new QStandardItem("优先级"));
    model->setHorizontalHeaderItem(5, new QStandardItem("占用内存/KB"));
    this->ui->tableView->setModel(model);
    //ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void MainWindow::set_const_text(){
    this->ui->label_host->setText(syst->getHostName());
    this->ui->label_osType->setText(syst->getOSType());

    // boot_time
    struct tm *ptm = NULL;
    time_t cur_time = 0, boot_time = 0, runtime;
    runtime = time_t(syst->getRuntime());
    time(&cur_time);
    boot_time = cur_time - runtime;
    ptm = localtime(&boot_time);
    ui->label_bootTime->setText(QString(asctime(ptm)).trimmed());

    // processor
    QStringList cpuInfo = syst->getCPUInfo();
    this->ui->label_cpuType->setText(cpuInfo[0]);
    this->ui->label_freq->setText(cpuInfo[1]);
    this->ui->label_type1->setText(cpuInfo[0]);
    this->ui->label_freq1->setText(cpuInfo[1]);
    this->ui->label_cacheSize->setText(cpuInfo[2]);

    // memory
    this->ui->label_memTotal->setText(common::segmentedByComma(QString::number(syst->mem_state.mem_total)) + " KB");

    // initialization can avoid blank
    initModel(); // empty model
    syst->updateProList();

    // 筛选需要显示的信息
    int row = 0;
    for(int i = 0; i < syst->proList.size(); ++i){
        if(search_show(syst->proList[i])){
            display(row, syst->proList[i]);
            row += 1;
        }
    }
}

void MainWindow::on_pushButton_shutdown_clicked()
{
    QString sudo;
    char * cmd;
    bool isOK = true;
    static int ret;
    QByteArray ba;
    if(syst->password.isEmpty()){
        struct passwd *pwd;
        QString username;
        pwd = getpwuid(getuid());
        username = pwd->pw_name;
        syst->password = QInputDialog::getText(this, "输入密码","[sudo] " + username + " 的密码", QLineEdit::PasswordEchoOnEdit, "", &isOK);
    }
    if(isOK){
        sudo = QString("echo %1 | sudo -S shutdown -h now").arg(syst->password);
        ba = sudo.toLatin1();
        cmd = ba.data();
        ret = system(cmd);
        // qDebug() << ret << '\n';
        if(ret == 256){
            syst->password.clear(); // password wrong and clear it
            QMessageBox msgBox;
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.setText("密码错误！");
            msgBox.addButton("确定", QMessageBox::AcceptRole);
            msgBox.exec();
        }
    }
}

void MainWindow::on_pushButton_reboot_clicked()
{
    QString sudo;
    char * cmd;
    bool isOK = true;
    static int ret;
    QByteArray ba;
    if(syst->password.isEmpty()){
        struct passwd *pwd;
        QString username;
        pwd = getpwuid(getuid());
        username = pwd->pw_name;
        syst->password = QInputDialog::getText(this, "输入密码","[sudo] " + username + " 的密码", QLineEdit::PasswordEchoOnEdit, "", &isOK);
    }
    if(isOK){
        sudo = QString("echo %1 | sudo -S reboot -h now").arg(syst->password);
        ba = sudo.toLatin1();
        cmd = ba.data();
        ret = system(cmd);
        // qDebug() << ret << '\n';
        if(ret == 256){
            syst->password.clear(); // password wrong and clear it
            QMessageBox msgBox;
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.setText("密码错误！");
            msgBox.addButton("确定", QMessageBox::AcceptRole);
            msgBox.exec();
        }
    }
}

void MainWindow::on_pushButton_homepage_clicked()
{
    // new website
    QDesktopServices::openUrl(QUrl(QLatin1String("https://me.csdn.net/yutianyue126")));
}

void MainWindow::display(int row, Syst::Process pro){
    QStandardItem * item;
    item = new QStandardItem(pro.name);
    //item->setTextAlignment(Qt::AlignHCenter);
    this->model->setItem(row, 0, item);
    item = new QStandardItem(pro.state);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    this->model->setItem(row, 1, item);
    item = new QStandardItem(QString::number(pro.pid));
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    this->model->setItem(row, 2, item);
    item = new QStandardItem(pro.ppid);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    this->model->setItem(row, 3, item);
    item = new QStandardItem(pro.prior);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    this->model->setItem(row, 4, item);
    item = new QStandardItem(common::segmentedByComma(pro.mem_usage));
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    this->model->setItem(row, 5, item);
}

void MainWindow::on_pushButton_refresh_clicked()
{
    initModel(); // empty model
    syst->updateProList();
    // 筛选需要显示的信息
    int row = 0;
    for(int i = 0; i < syst->proList.size(); ++i){
        if(search_show(syst->proList[i])){
            display(row, syst->proList[i]);
            row += 1;
        }
    }
}

void MainWindow::fill_le_pid(const QModelIndex & param){
//    qDebug() << index.row();
//    qDebug() << index.column();
    QAbstractItemModel *model = ui->tableView->model();
    QModelIndex index = model->index(param.row(), 2);
    QVariant pid = model->data(index);
//    qDebug() << pid;
    ui->le_pid->setText(pid.toString());
}

void MainWindow::on_pushButton_endPro_clicked()
{
    if(this->ui->le_pid->text().isEmpty()){
        qDebug() << "le_pid is empty";
        return;
    }
    QString sudo;
    char * cmd;
    QByteArray ba;

    sudo = QString("kill %1").arg(ui->le_pid->text());
    ba = sudo.toLatin1();
    cmd = ba.data();
    int ret = system(cmd);
    if(ret != 0)
        shakeWindow(); // failed
    ui->le_pid->setText("");
}

void MainWindow::shakeWindow()
{
    QPropertyAnimation *animation = new QPropertyAnimation(this,"geometry");
    animation->setDuration(500);
    animation->setKeyValueAt(0,QRect(QPoint(this->frameGeometry().x()-3,this->frameGeometry().y()),this->size()));
    animation->setKeyValueAt(0.1,QRect(QPoint(this->frameGeometry().x()+6,this->frameGeometry().y()),this->size()));
    animation->setKeyValueAt(0.2,QRect(QPoint(this->frameGeometry().x()-6,this->frameGeometry().y()),this->size()));
    animation->setKeyValueAt(0.3,QRect(QPoint(this->frameGeometry().x()+6,this->frameGeometry().y()),this->size()));
    animation->setKeyValueAt(0.4,QRect(QPoint(this->frameGeometry().x()-6,this->frameGeometry().y()),this->size()));
    animation->setKeyValueAt(0.5,QRect(QPoint(this->frameGeometry().x()+6,this->frameGeometry().y()),this->size()));
    animation->setKeyValueAt(0.6,QRect(QPoint(this->frameGeometry().x()-6,this->frameGeometry().y()),this->size()));
    animation->setKeyValueAt(0.7,QRect(QPoint(this->frameGeometry().x()+6,this->frameGeometry().y()),this->size()));
    animation->setKeyValueAt(0.8,QRect(QPoint(this->frameGeometry().x()-6,this->frameGeometry().y()),this->size()));
    animation->setKeyValueAt(0.9,QRect(QPoint(this->frameGeometry().x()+6,this->frameGeometry().y()),this->size()));
    animation->setKeyValueAt(1,QRect(QPoint(this->frameGeometry().x()-3,this->frameGeometry().y()),this->size()));
    animation->start();
}

void MainWindow::on_le_pid_textChanged(const QString &arg1)
{
    if(arg1.isEmpty() || !common::isDigit(arg1))
        ui->pushButton_endPro->setEnabled(false);
    else
        ui->pushButton_endPro->setEnabled(true);
}

void MainWindow::on_pushButton_createPro_clicked()
{
    QString name = ui->le_pid->text();
    QProcess * pro = new QProcess;
    pro->start(name);
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    switch(index){
    case 0:
        this->search_index = all;
        break;
    case 1:
        this->search_index = name;
        break;
    case 2:
        this->search_index = state;
        break;
    case 3:
        this->search_index = pid;
        break;
    case 4:
        this->search_index = ppid;
        break;
    case 5:
        this->search_index = prior;
        break;
    }
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{

}

void MainWindow::on_le_search_textChanged(const QString &arg1)
{
    this->search_content = arg1;

    // refresh TableView once le changes
    int row = 0;
    initModel();
    syst->updateProList();
    for(int i = 0; i < syst->proList.size(); ++i){
        if(search_show(syst->proList[i])){
            display(row, syst->proList[i]);
            row += 1;
        }
    }
}

inline bool MainWindow::search_show(Syst::Process pro){
    if(search_content.isEmpty())
        return true;
    bool show = false;
    if(this->search_index == all){
        if(pro.name.contains(search_content) || search_index == state || pro.pid == search_content.toInt() \
                || pro.ppid == search_content || pro.prior == search_content)
            show = true;
    }
    else if(this->search_index == name){
        if(pro.name.contains(search_content))
            show = true;
    }
    else if(search_index == state){
        if(pro.state == search_content)
            show = true;
    }
    else if(search_index == pid){
        if(pro.pid == search_content.toInt())
            show = true;
    }
    else if(search_index == ppid){
        if(pro.ppid == search_content)
            show = true;
    }
    else if(search_index == prior){
        if(pro.prior == search_content)
            show = true;
    }
    return show;
}

void MainWindow::update_graph(){
    static int offset = 0;
    int width, height, sec_wid, seg_wid;
    width = 595;
    height = 240;
    // 120个采样点，共119段
    sec_wid = width / 119;
    seg_wid = width / 12;

    // CPU
    QPixmap pix(width, height);
    QPainter painter(&pix);
    pix.fill(Qt::black);
    QPen pen0;
    pen0.setColor(Qt::lightGray);
    painter.setPen(pen0);
    for(int i = 1; i < 4; i++)
        painter.drawLine(0, i * height / 4, width, i * height / 4);
    // 横格10s
    // 坐标轴和曲线一起运动
    for(int i = 1; i < 13; i++)
        painter.drawLine(i * seg_wid - sec_wid * offset, 0, i * seg_wid - sec_wid * offset, height);
    offset = (offset + 1) % 10;
    QPen pen;
    pen.setColor(Qt::green);
    pen.setWidth(2);
    painter.setPen(pen);
    int size = syst->cpuUtilDeq.size();
    // deque: -> 0 1 2 3 4 5
    //          old       new
    for(int i = size - 1; i > 0; --i){
        painter.drawLine(width - sec_wid * (size - i - 1), (1 - syst->cpuUtilDeq.at(i) / 100.0) * height,\
                         width - sec_wid * (size - i), (1 - syst->cpuUtilDeq.at(i - 1) / 100.0) * height);
    }
    ui->cpu_util_graphics->setPixmap(pix);

    // mem
    QPixmap pix1(width, height);
    QPainter painter1(&pix1);
    pix1.fill(Qt::black);
    painter1.setPen(pen0);
    for(int i = 1; i < 4; i++)
        painter1.drawLine(0, i * height / 4, width, i * height / 4);

    for(int i = 1; i < 13; i++)
        painter1.drawLine(i * seg_wid - sec_wid * offset, 0, i * seg_wid - sec_wid * offset, height);
    painter1.setPen(pen);
    size = syst->memUtilDeq.size();

    for(int i = size - 1; i > 0; --i){
        painter1.drawLine(width - sec_wid * (size - i - 1), (1 - syst->memUtilDeq.at(i) / 100.0) * height,\
                         width - sec_wid * (size - i), (1 - syst->memUtilDeq.at(i - 1) / 100.0) * height);
    }
    ui->mem_util_graphics->setPixmap(pix1);
}
