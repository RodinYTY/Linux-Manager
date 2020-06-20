#include "syst.h"

bool common::isDigit(QString src)
{
    QByteArray ba = src.toLatin1();//QString -> char*
    const char *s = ba.data();
    while(*s && *s>='0' && *s<='9') s++;
    return (*s) ? false : true;
}

QString common::segmentedByComma(QString str){
    if(common::isDigit(str) && !str.isEmpty()){
        int index = str.size() - 1;
        for(int count = 0; index >= 0; count = (count + 1) % 3, --index){
            if(count == 0 && index != str.size() - 1)
                str.insert(index + 1, ",");
        }
    }
    return str;
}

Syst::Syst(){
    this->cpuDeqNum = 0;
    this->memDeqNum = 0;
}

QString Syst::getHostName(){
    QFile file("/proc/sys/kernel/hostname");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return "Fail";
    QTextStream in(&file);
    QString line = in.readLine();
    file.close();
    return line;
}

QString Syst::getOSType(){
    QString os, release;
    QFile file("/proc/sys/kernel/ostype");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        os = "??";
    QTextStream in(&file);
    os = in.readLine();
    file.close();
    QFile file1("/proc/sys/kernel/osrelease");
    if (!file1.open(QIODevice::ReadOnly | QIODevice::Text))
        os = "??";
    QTextStream in1(&file1);
    release = in1.readLine();
    file1.close();
    return os + ' ' + release;
}

double Syst::getRuntime(){
    double opTime;
    QFile file("/proc/uptime");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return 0;
    QTextStream in(&file);
    in >> opTime; // operation_t free_t
    file.close();
    return opTime;
}

QStringList Syst::getCPUInfo(){
    // type cores cache
    QString cpu_type, cores, freq, cache_size;
    QStringList strList;
    QFile file("/proc/cpuinfo");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return strList;
    QTextStream in(&file);
    QString tempt;
    for(int i = 0; i < 13; ++i){
        tempt = in.readLine();
        if(i == 4){
            tempt = tempt.mid(13);
            QStringList strList = tempt.split(" @ ", QString::SkipEmptyParts);
            cpu_type = strList.at(0).trimmed();
            freq = strList.at(1).trimmed();
        }
        if(i == 8)
            cache_size = tempt.mid(13);
        if(i == 12)
            cores = tempt.mid(12);
    }
    file.close();
    strList.append(cpu_type + " × " + cores);
    strList.append(freq);
    strList.append(cache_size);
    // {CPU, 主频, cache大小}
    return strList;
}

void Syst::updateCPUState(){
    QFile file("/proc/stat");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "cannot open \"/proc/stat\"\n";
        return;
    }
    QString tempt;
    QTextStream in(&file);
    in >> tempt >> cpu_state_now.user >> cpu_state_now.nice >> cpu_state_now.system >> cpu_state_now.idle >> \
            cpu_state_now.iowait >> cpu_state_now.irq >> cpu_state_now.softirq;
    file.close();

    if(cpu_state_last.util != -1)/* -1 means value vacancy*/{
        int user_diff = cpu_state_now.user - cpu_state_last.user;
        int nice_diff = cpu_state_now.nice - cpu_state_last.nice;
        int system_diff = cpu_state_now.system - cpu_state_last.system;
        int idle_diff = cpu_state_now.idle - cpu_state_last.idle;
        int iowait_diff = cpu_state_now.iowait - cpu_state_last.iowait;
        int irq_diff = cpu_state_now.irq - cpu_state_last.irq;
        int softirq_diff = cpu_state_now.softirq - cpu_state_last.softirq;
        cpu_state_now.util = 100 - (100 * idle_diff) / (idle_diff + user_diff + nice_diff + system_diff + \
                                                                     iowait_diff + irq_diff + softirq_diff);
        //qDebug() << user_diff << nice_diff << system_diff << idle_diff << iowait_diff << irq_diff << softirq_diff;
        /*qDebug() << 100 - (100 * cpu_state_now.idle) / (cpu_state_now.idle + cpu_state_now.user + cpu_state_now.nice + cpu_state_now.system + \
                                               cpu_state_now.iowait + cpu_state_now.irq + cpu_state_now.softirq); */
    }
    else
        cpu_state_now.util = 0;

    // move now to last
    cpu_state_last.user = cpu_state_now.user;
    cpu_state_last.nice = cpu_state_now.nice;
    cpu_state_last.system = cpu_state_now.system;
    cpu_state_last.idle = cpu_state_now.idle;
    cpu_state_last.util = cpu_state_now.util;
    cpu_state_last.iowait = cpu_state_now.iowait;
    cpu_state_last.irq = cpu_state_now.irq;
    cpu_state_last.softirq = cpu_state_now.softirq;
}

void Syst::updateMemState(){
    QFile file("/proc/meminfo");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "cannot open \"/proc/memstat\"\n";
        return;
    }
    QTextStream in(&file);
    QString tempt;
    for(int i = 0; i < 20; i++){
        tempt = in.readLine();
        if(i == 0){
            tempt = tempt.split(' ', QString::SkipEmptyParts).at(1);
            mem_state.mem_total = tempt.toULong();
        }
        if(i == 1){
            tempt = tempt.split(' ', QString::SkipEmptyParts).at(1);
            mem_state.mem_free = tempt.toULong();
        }
        if(i == 3){
            tempt = tempt.split(' ', QString::SkipEmptyParts).at(1);
            mem_state.buffers = tempt.toULong();
        }
        if(i == 4){
            tempt = tempt.split(' ', QString::SkipEmptyParts).at(1);
            mem_state.cached = tempt.toULong();
        }
        if(i == 18){
            tempt = tempt.split(' ', QString::SkipEmptyParts).at(1);
            mem_state.swap_total = tempt.toULong();
        }
        if(i == 19){
            tempt = tempt.split(' ', QString::SkipEmptyParts).at(1);
            mem_state.swap_free = tempt.toULong();
        }
    }
    file.close();
    /*qDebug() << mem_state.mem_total << mem_state.mem_free << mem_state.buffers \
        << mem_state.cached << mem_state.swap_total << mem_state.swap_free; */
    mem_state.mem_util = 100.0 * (mem_state.mem_total - mem_state.mem_free - \
                                  mem_state.buffers - mem_state.cached) / mem_state.swap_total;
    mem_state.swap_util = 100.0 - 100.0 * mem_state.swap_free / mem_state.swap_total;
    //qDebug() << mem_state.mem_util << mem_state.swap_util;
}

void Syst::updateProList(){
    QDir qd("/proc");
    QStringList qsList = qd.entryList();
    QStringList pidList, temptList;
    proList.clear();

    for(int i = 0; i < qsList.size(); ++i)
        if(common::isDigit(qsList[i])) // pick up all the pid
            pidList.append(qsList[i]);
    /*for(int i = 0; i < pidList.size(); ++i)
        qDebug() << pidList[i]; */
    QString path, name, state, ppid, prior, mem_usage;
    int pid;
    for(int i = 0; i < pidList.size(); ++i){
        path = "/proc/" + pidList[i] + "/stat";
        QFile * file = new QFile((path));
        if (!file->open(QIODevice::ReadOnly | QIODevice::Text)){
            return;
        }

        QTextStream in(file);
        temptList = in.readLine().split(' ');
        //qDebug() << temptList;
        pid = temptList[0].toInt();
        name = temptList[1];
        if(name.at(name.size() - 1) != ')'){ // (na me)
            name += temptList[2];
            temptList.pop_front();
        }
        name = name.right(name.size() - 1);
        name = name.left(name.size() - 1);
        state = temptList[2];
        ppid = temptList[3];
        prior = temptList[17];
        mem_usage = temptList[23];
        proList.append(*(new Process(name.trimmed(), state, pid, ppid, prior, mem_usage)));
        file->close();
        delete file;
    }
    // 升序排列
    sortProList(proList);

//    QString t;
//    for(int i = 0; i < proList.size(); ++i)
//        t += QString::number(proList[i].pid) + " ";
//    qDebug() << t;
}

void Syst::sortProList(QList<Process> & list){
    int size = list.size();
    for(int i = 0; i < size - 1; ++i)
        for(int j = i + 1; j < size; ++j)
            if(list[i] > list[j])
                list.swap(i, j);
}
