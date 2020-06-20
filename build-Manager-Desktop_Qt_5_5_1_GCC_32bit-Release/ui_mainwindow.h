/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_12;
    QComboBox *comboBox;
    QLineEdit *le_search;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_refresh;
    QSpacerItem *horizontalSpacer;
    QLineEdit *le_pid;
    QPushButton *pushButton_createPro;
    QPushButton *pushButton_endPro;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_10;
    QLabel *label_type1;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_13;
    QLabel *label_freq1;
    QLabel *label_14;
    QLabel *cpu_util_graphics;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_12;
    QLabel *label_memTotal;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_19;
    QLabel *label_memUsage;
    QLabel *label_20;
    QLabel *mem_util_graphics;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *label_host;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLabel *label_osType;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QLabel *label_bootTime;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QLabel *label_runtime;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QLabel *label_cpuType;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_6;
    QLabel *label_freq;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_7;
    QLabel *label_cacheSize;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_15;
    QLabel *label_17;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_16;
    QLabel *label_18;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_shutdown;
    QPushButton *pushButton_reboot;
    QPushButton *pushButton_homepage;
    QHBoxLayout *horizontalLayout_10;
    QLabel *cur_time;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_9;
    QLabel *cpu_util;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *mem_util;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 570);
        MainWindow->setMinimumSize(QSize(500, 400));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QFont font;
        font.setPointSize(11);
        centralWidget->setFont(font);
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(8);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(5, 5, 5, 5);
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_12->addWidget(comboBox);

        le_search = new QLineEdit(tab);
        le_search->setObjectName(QStringLiteral("le_search"));
        le_search->setEnabled(true);
        le_search->setStyleSheet(QStringLiteral(""));
        le_search->setClearButtonEnabled(true);

        horizontalLayout_12->addWidget(le_search);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 5);

        verticalLayout_2->addLayout(horizontalLayout_12);

        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setDragEnabled(true);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 1, 5, 1);
        pushButton_refresh = new QPushButton(tab);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));

        horizontalLayout->addWidget(pushButton_refresh);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        le_pid = new QLineEdit(tab);
        le_pid->setObjectName(QStringLiteral("le_pid"));
        le_pid->setClearButtonEnabled(true);

        horizontalLayout->addWidget(le_pid);

        pushButton_createPro = new QPushButton(tab);
        pushButton_createPro->setObjectName(QStringLiteral("pushButton_createPro"));
        pushButton_createPro->setEnabled(true);

        horizontalLayout->addWidget(pushButton_createPro);

        pushButton_endPro = new QPushButton(tab);
        pushButton_endPro->setObjectName(QStringLiteral("pushButton_endPro"));
        pushButton_endPro->setEnabled(false);

        horizontalLayout->addWidget(pushButton_endPro);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 6);
        horizontalLayout->setStretch(2, 6);
        horizontalLayout->setStretch(3, 4);
        horizontalLayout->setStretch(4, 4);

        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(tab_2);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 636, 412));
        QFont font1;
        font1.setPointSize(12);
        page->setFont(font1);
        verticalLayout_9 = new QVBoxLayout(page);
        verticalLayout_9->setSpacing(18);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(15, 9, 18, 18);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font2;
        font2.setPointSize(13);
        label_10->setFont(font2);

        horizontalLayout_13->addWidget(label_10);

        label_type1 = new QLabel(page);
        label_type1->setObjectName(QStringLiteral("label_type1"));
        label_type1->setFont(font2);

        horizontalLayout_13->addWidget(label_type1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_9);

        label_13 = new QLabel(page);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font2);

        horizontalLayout_13->addWidget(label_13);

        label_freq1 = new QLabel(page);
        label_freq1->setObjectName(QStringLiteral("label_freq1"));
        label_freq1->setFont(font2);

        horizontalLayout_13->addWidget(label_freq1);

        horizontalLayout_13->setStretch(0, 1);
        horizontalLayout_13->setStretch(1, 3);
        horizontalLayout_13->setStretch(2, 1);
        horizontalLayout_13->setStretch(3, 1);
        horizontalLayout_13->setStretch(4, 2);

        verticalLayout_9->addLayout(horizontalLayout_13);

        label_14 = new QLabel(page);
        label_14->setObjectName(QStringLiteral("label_14"));
        QFont font3;
        font3.setPointSize(10);
        label_14->setFont(font3);
        label_14->setStyleSheet(QStringLiteral("color:rgb(128, 128, 128)"));

        verticalLayout_9->addWidget(label_14);

        cpu_util_graphics = new QLabel(page);
        cpu_util_graphics->setObjectName(QStringLiteral("cpu_util_graphics"));
        cpu_util_graphics->setScaledContents(true);
        cpu_util_graphics->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(cpu_util_graphics);

        verticalLayout_9->setStretch(0, 5);
        verticalLayout_9->setStretch(1, 1);
        verticalLayout_9->setStretch(2, 5);
        toolBox->addItem(page, QStringLiteral("CPU"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 381, 129));
        verticalLayout_10 = new QVBoxLayout(page_2);
        verticalLayout_10->setSpacing(18);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(15, 9, 18, 18);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_12 = new QLabel(page_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font2);

        horizontalLayout_14->addWidget(label_12);

        label_memTotal = new QLabel(page_2);
        label_memTotal->setObjectName(QStringLiteral("label_memTotal"));
        label_memTotal->setFont(font2);

        horizontalLayout_14->addWidget(label_memTotal);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_11);

        label_19 = new QLabel(page_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font2);

        horizontalLayout_14->addWidget(label_19);

        label_memUsage = new QLabel(page_2);
        label_memUsage->setObjectName(QStringLiteral("label_memUsage"));
        label_memUsage->setFont(font2);

        horizontalLayout_14->addWidget(label_memUsage);

        horizontalLayout_14->setStretch(0, 1);
        horizontalLayout_14->setStretch(1, 2);
        horizontalLayout_14->setStretch(2, 3);
        horizontalLayout_14->setStretch(3, 2);
        horizontalLayout_14->setStretch(4, 2);

        verticalLayout_10->addLayout(horizontalLayout_14);

        label_20 = new QLabel(page_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font3);
        label_20->setStyleSheet(QStringLiteral("color:rgb(128, 128, 128)"));

        verticalLayout_10->addWidget(label_20);

        mem_util_graphics = new QLabel(page_2);
        mem_util_graphics->setObjectName(QStringLiteral("mem_util_graphics"));
        mem_util_graphics->setScaledContents(true);
        mem_util_graphics->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(mem_util_graphics);

        verticalLayout_10->setStretch(0, 5);
        verticalLayout_10->setStretch(1, 1);
        verticalLayout_10->setStretch(2, 5);
        toolBox->addItem(page_2, QString::fromUtf8("\345\206\205\345\255\230"));

        verticalLayout_3->addWidget(toolBox);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout = new QVBoxLayout(tab_3);
        verticalLayout->setSpacing(12);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(12, 12, 12, 12);
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFont(font2);
        groupBox->setStyleSheet(QLatin1String("            border-color: rgb(156, 156, 156);\n"
"            border-width: 1px;\n"
"            border-style: solid;\n"
"            margin-top: 0.5ex;"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(13, 13, 13, 13);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QFont font4;
        font4.setFamily(QStringLiteral("Ubuntu"));
        font4.setPointSize(12);
        label->setFont(font4);
        label->setStyleSheet(QLatin1String("border-width: 0px;\n"
""));

        horizontalLayout_2->addWidget(label);

        label_host = new QLabel(groupBox);
        label_host->setObjectName(QStringLiteral("label_host"));
        label_host->setFont(font4);
        label_host->setStyleSheet(QLatin1String("border-width: 0px;\n"
""));
        label_host->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_host);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 6);
        horizontalLayout_2->setStretch(2, 30);

        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("border-width: 0px;\n"
""));

        horizontalLayout_3->addWidget(label_2);

        label_osType = new QLabel(groupBox);
        label_osType->setObjectName(QStringLiteral("label_osType"));
        label_osType->setFont(font4);
        label_osType->setStyleSheet(QLatin1String("border-width: 0px;\n"
""));
        label_osType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_osType);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 6);
        horizontalLayout_3->setStretch(2, 30);

        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("border-width: 0px;\n"
""));

        horizontalLayout_4->addWidget(label_3);

        label_bootTime = new QLabel(groupBox);
        label_bootTime->setObjectName(QStringLiteral("label_bootTime"));
        label_bootTime->setFont(font4);
        label_bootTime->setStyleSheet(QLatin1String("border-width: 0px;\n"
""));
        label_bootTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_bootTime);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 6);
        horizontalLayout_4->setStretch(2, 30);

        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String("border-width: 0px;\n"
""));

        horizontalLayout_5->addWidget(label_4);

        label_runtime = new QLabel(groupBox);
        label_runtime->setObjectName(QStringLiteral("label_runtime"));
        label_runtime->setFont(font4);
        label_runtime->setStyleSheet(QLatin1String("border-width: 0px;\n"
""));
        label_runtime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_runtime);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 6);
        horizontalLayout_5->setStretch(2, 30);

        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 3);
        verticalLayout_5->setStretch(2, 3);
        verticalLayout_5->setStretch(3, 3);
        verticalLayout_5->setStretch(4, 3);

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font2);
        groupBox_2->setStyleSheet(QLatin1String("            border-color: rgb(156, 156, 156);\n"
"            border-width: 1px;\n"
"            border-style: solid;\n"
"            margin-top: 0.5ex;"));
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(13, 13, 13, 5);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);
        label_5->setStyleSheet(QLatin1String("border-width: 0px;\n"
""));

        horizontalLayout_6->addWidget(label_5);

        label_cpuType = new QLabel(groupBox_2);
        label_cpuType->setObjectName(QStringLiteral("label_cpuType"));
        label_cpuType->setFont(font4);
        label_cpuType->setStyleSheet(QLatin1String("border-width: 0px;\n"
""));
        label_cpuType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_cpuType);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 6);
        horizontalLayout_6->setStretch(2, 30);

        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QLatin1String("border-width: 0px;\n"
""));

        horizontalLayout_7->addWidget(label_6);

        label_freq = new QLabel(groupBox_2);
        label_freq->setObjectName(QStringLiteral("label_freq"));
        label_freq->setFont(font4);
        label_freq->setStyleSheet(QLatin1String("border-width: 0px;\n"
""));
        label_freq->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_freq);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 6);
        horizontalLayout_7->setStretch(2, 30);

        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);
        label_7->setStyleSheet(QLatin1String("border-width: 0px;\n"
""));

        horizontalLayout_8->addWidget(label_7);

        label_cacheSize = new QLabel(groupBox_2);
        label_cacheSize->setObjectName(QStringLiteral("label_cacheSize"));
        label_cacheSize->setFont(font4);
        label_cacheSize->setStyleSheet(QLatin1String("border-width: 0px;\n"
""));
        label_cacheSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_cacheSize);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 6);
        horizontalLayout_8->setStretch(2, 30);

        verticalLayout_6->addLayout(horizontalLayout_8);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 3);
        verticalLayout_6->setStretch(2, 3);
        verticalLayout_6->setStretch(3, 3);

        verticalLayout->addWidget(groupBox_2);

        verticalLayout->setStretch(0, 4);
        verticalLayout->setStretch(1, 3);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        horizontalLayout_9 = new QHBoxLayout(tab_4);
        horizontalLayout_9->setSpacing(35);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(20, 20, 30, 20);
        groupBox_3 = new QGroupBox(tab_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QFont font5;
        font5.setFamily(QStringLiteral("URW Chancery L"));
        font5.setPointSize(16);
        font5.setItalic(true);
        groupBox_3->setFont(font5);
        groupBox_3->setStyleSheet(QLatin1String("            border-color: rgb(156, 156, 156);\n"
"            border-width: 1px;\n"
"            border-style: solid;\n"
"            margin-top: 0.5ex;"));
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        QFont font6;
        font6.setPointSize(14);
        label_15->setFont(font6);
        label_15->setStyleSheet(QStringLiteral("            border-width: 0px;"));

        verticalLayout_7->addWidget(label_15);

        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font6);
        label_17->setStyleSheet(QStringLiteral("            border-width: 0px;"));

        verticalLayout_7->addWidget(label_17);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font6);
        label_16->setStyleSheet(QStringLiteral("            border-width: 0px;"));

        verticalLayout_7->addWidget(label_16);

        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font6);
        label_18->setStyleSheet(QStringLiteral("            border-width: 0px;"));

        verticalLayout_7->addWidget(label_18);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 1);
        verticalLayout_7->setStretch(2, 3);
        verticalLayout_7->setStretch(3, 2);
        verticalLayout_7->setStretch(4, 1);
        verticalLayout_7->setStretch(5, 3);

        horizontalLayout_9->addWidget(groupBox_3);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        pushButton_shutdown = new QPushButton(tab_4);
        pushButton_shutdown->setObjectName(QStringLiteral("pushButton_shutdown"));

        verticalLayout_8->addWidget(pushButton_shutdown);

        pushButton_reboot = new QPushButton(tab_4);
        pushButton_reboot->setObjectName(QStringLiteral("pushButton_reboot"));

        verticalLayout_8->addWidget(pushButton_reboot);

        pushButton_homepage = new QPushButton(tab_4);
        pushButton_homepage->setObjectName(QStringLiteral("pushButton_homepage"));

        verticalLayout_8->addWidget(pushButton_homepage);


        horizontalLayout_9->addLayout(verticalLayout_8);

        horizontalLayout_9->setStretch(0, 3);
        horizontalLayout_9->setStretch(1, 1);
        tabWidget->addTab(tab_4, QString());

        verticalLayout_4->addWidget(tabWidget);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        cur_time = new QLabel(centralWidget);
        cur_time->setObjectName(QStringLiteral("cur_time"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cur_time->sizePolicy().hasHeightForWidth());
        cur_time->setSizePolicy(sizePolicy);
        cur_time->setFont(font3);

        horizontalLayout_10->addWidget(cur_time);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font3);

        horizontalLayout_10->addWidget(label_9);

        cpu_util = new QLabel(centralWidget);
        cpu_util->setObjectName(QStringLiteral("cpu_util"));
        sizePolicy.setHeightForWidth(cpu_util->sizePolicy().hasHeightForWidth());
        cpu_util->setSizePolicy(sizePolicy);
        QFont font7;
        font7.setPointSize(10);
        font7.setKerning(true);
        cpu_util->setFont(font7);
        cpu_util->setTextFormat(Qt::AutoText);
        cpu_util->setMargin(2);

        horizontalLayout_10->addWidget(cpu_util);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font3);

        horizontalLayout_10->addWidget(label_8);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setFont(font3);

        horizontalLayout_10->addWidget(label_11);

        mem_util = new QLabel(centralWidget);
        mem_util->setObjectName(QStringLiteral("mem_util"));
        sizePolicy.setHeightForWidth(mem_util->sizePolicy().hasHeightForWidth());
        mem_util->setSizePolicy(sizePolicy);
        mem_util->setFont(font3);
        mem_util->setMargin(2);

        horizontalLayout_10->addWidget(mem_util);

        horizontalLayout_10->setStretch(0, 10);
        horizontalLayout_10->setStretch(2, 1);
        horizontalLayout_10->setStretch(3, 1);
        horizontalLayout_10->setStretch(5, 1);
        horizontalLayout_10->setStretch(6, 1);

        verticalLayout_4->addLayout(horizontalLayout_10);

        verticalLayout_4->setStretch(0, 20);
        verticalLayout_4->setStretch(1, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 31));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\347\263\273\347\273\237\347\256\241\347\220\206\345\231\250", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\205\250\351\203\250", 0)
         << QApplication::translate("MainWindow", "\350\277\233\347\250\213\345\220\215", 0)
         << QApplication::translate("MainWindow", "\347\212\266\346\200\201", 0)
         << QApplication::translate("MainWindow", "PID", 0)
         << QApplication::translate("MainWindow", "PPID", 0)
         << QApplication::translate("MainWindow", "\344\274\230\345\205\210\347\272\247", 0)
        );
        le_search->setPlaceholderText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", 0));
        pushButton_refresh->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260(F5)", 0));
        pushButton_refresh->setShortcut(QApplication::translate("MainWindow", "F5", 0));
        le_pid->setPlaceholderText(QApplication::translate("MainWindow", "\350\276\223\345\205\245PID/\350\277\233\347\250\213\345\220\215", 0));
        pushButton_createPro->setText(QApplication::translate("MainWindow", "\345\210\233\345\273\272\350\277\233\347\250\213", 0));
        pushButton_createPro->setShortcut(QApplication::translate("MainWindow", "Return", 0));
        pushButton_endPro->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237\350\277\233\347\250\213(E)", 0));
        pushButton_endPro->setShortcut(QApplication::translate("MainWindow", "E", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\350\277\233\347\250\213", 0));
        label_10->setText(QApplication::translate("MainWindow", "\345\236\213\345\217\267\357\274\232", 0));
        label_type1->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_13->setText(QApplication::translate("MainWindow", "\344\270\273\351\242\221\346\225\260\357\274\232", 0));
        label_freq1->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_14->setText(QApplication::translate("MainWindow", "100% \345\210\251\347\224\250\347\216\207", 0));
        cpu_util_graphics->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "CPU", 0));
        label_12->setText(QApplication::translate("MainWindow", "\346\200\273\345\256\271\351\207\217\357\274\232", 0));
        label_memTotal->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_19->setText(QApplication::translate("MainWindow", "\345\267\262\344\275\277\347\224\250\345\256\271\351\207\217\357\274\232", 0));
        label_memUsage->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_20->setText(QApplication::translate("MainWindow", "100% \345\210\251\347\224\250\347\216\207", 0));
        mem_util_graphics->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "\345\206\205\345\255\230", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\346\200\247\350\203\275", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\347\263\273\347\273\237", 0));
        label->setText(QApplication::translate("MainWindow", "\344\270\273\346\234\272\345\220\215\357\274\232", 0));
        label_host->setText(QApplication::translate("MainWindow", "------------------------------------------------", 0));
        label_2->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\347\211\210\346\234\254\357\274\232", 0));
        label_osType->setText(QApplication::translate("MainWindow", "------------------------------------------------", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250\346\227\266\351\227\264\357\274\232", 0));
        label_bootTime->setText(QApplication::translate("MainWindow", "------------------------------------------------", 0));
        label_4->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214\346\227\266\351\227\264\357\274\232", 0));
        label_runtime->setText(QApplication::translate("MainWindow", "------------------------------------------------", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\244\204\347\220\206\345\231\250", 0));
        label_5->setText(QApplication::translate("MainWindow", "CPU\345\236\213\345\217\267\357\274\232", 0));
        label_cpuType->setText(QApplication::translate("MainWindow", "------------------------------------------------", 0));
        label_6->setText(QApplication::translate("MainWindow", "\344\270\273\351\242\221\346\225\260\357\274\232", 0));
        label_freq->setText(QApplication::translate("MainWindow", "------------------------------------------------", 0));
        label_7->setText(QApplication::translate("MainWindow", "Cache\345\244\247\345\260\217\357\274\232", 0));
        label_cacheSize->setText(QApplication::translate("MainWindow", "------------------------------------------------", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\347\263\273\347\273\237\344\277\241\346\201\257", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "bon app\303\251tit", 0));
        label_15->setText(QApplication::translate("MainWindow", "\344\275\234\350\200\205\357\274\232", 0));
        label_17->setText(QApplication::translate("MainWindow", "Rodin_YTY", 0));
        label_16->setText(QApplication::translate("MainWindow", "\351\202\256\347\256\261\357\274\232", 0));
        label_18->setText(QApplication::translate("MainWindow", "1418583869@qq.com", 0));
        pushButton_shutdown->setText(QApplication::translate("MainWindow", "\345\205\263\346\234\272(U)", 0));
        pushButton_shutdown->setShortcut(QApplication::translate("MainWindow", "U", 0));
        pushButton_reboot->setText(QApplication::translate("MainWindow", "\351\207\215\345\220\257(R)", 0));
        pushButton_reboot->setShortcut(QApplication::translate("MainWindow", "R", 0));
        pushButton_homepage->setText(QApplication::translate("MainWindow", "\344\270\273\351\241\265(H)", 0));
        pushButton_homepage->setShortcut(QApplication::translate("MainWindow", "H", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\345\205\266\344\273\226", 0));
        cur_time->setText(QApplication::translate("MainWindow", "------------------------------------------", 0));
        label_9->setText(QApplication::translate("MainWindow", "CPU\345\210\251\347\224\250\347\216\207:", 0));
        cpu_util->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_8->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230\345\210\251\347\224\250\347\216\207:", 0));
        mem_util->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
