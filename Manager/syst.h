#ifndef SYST_H
#define SYST_H

#include <QString>
#include <QFile>
#include <QList>
#include <QDebug>
#include <QDir>
#include <deque>
#include <list>

namespace common{
    bool isDigit(QString src);
    QString segmentedByComma(QString);
}

class Syst
{
public:
    Syst();
    QString password;

    QString getHostName();
    QString getOSType();
    double getRuntime();
    QStringList getCPUInfo();

    struct CPU_State{
        unsigned int user; // 用户态时间
        unsigned int nice; // 用户态时间(低优先级，nice>0)
        unsigned int system; // 内核态时间
        unsigned int idle; // 空闲时间
        unsigned int iowait; // IO等待时间
        unsigned int irq; // 硬中断时间
        int softirq; // 软中断时间
        int util; // 占用率
        CPU_State(){
            this->util = -1; // value vacancy
        }
    }cpu_state_last, cpu_state_now;

    struct Mem_State{
        unsigned long mem_total;
        unsigned long mem_free;
        unsigned long buffers;
        unsigned long cached;
        unsigned long swap_total;
        unsigned long swap_free;
        int mem_util;
        int swap_util;
        Mem_State(){
            this->mem_util = this->swap_free = 0;
        }
    }mem_state;

    struct Process{
        QString name;
        QString state;
        int pid;
        QString ppid;
        QString prior;
        QString mem_usage;
        Process(QString name, QString state, int pid, QString ppid, QString prior, QString mem_usage){
            this->name = name;
            this->state = state;
            this->pid = pid;
            this->ppid = ppid;
            this->prior = prior;
            this->mem_usage = mem_usage;
        }

        bool operator >(Process pro){
            if(this->pid > pro.pid)
                return true;
            else
                return false;
        }
    };

    QList<Process> proList;
    // num of deq's elements
    int cpuDeqNum;
    int memDeqNum;
    std::deque<int> cpuUtilDeq;
    std::deque<int> memUtilDeq;

    void updateCPUState();
    void updateMemState();
    void updateProList();
private:
    void sortProList(QList<Process> &);
    void display(int row, Process * pro);
};

#endif // SYST_H
