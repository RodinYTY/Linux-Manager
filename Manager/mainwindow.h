#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTimer>
#include <QDateTime>
#include <QLabel>
#include <QInputDialog>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QTableView>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QPropertyAnimation>
#include <QProcess>
#include <QPixmap>
#include <QPainter>
#include <syst.h>
#include <time.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/types.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Syst * syst;
    // le_search用
    enum Search_index{
        all, name, state, pid, ppid, prior
    }search_index;
    QString search_content;

    QTimer * timer, * timer1;
    QStandardItemModel * model;
    void set_const_text();
    void display(int row, Syst::Process pro);
    void initModel();
    void shakeWindow();
    inline bool search_show(Syst::Process);
private slots:
    void update_per_sec();
    void update_per_5sec();
    void on_pushButton_shutdown_clicked();
    void on_pushButton_reboot_clicked();
    void on_pushButton_homepage_clicked();
    void on_pushButton_refresh_clicked();
    void fill_le_pid(const QModelIndex &);
    void on_pushButton_endPro_clicked();
    void on_le_pid_textChanged(const QString &arg1);
    void on_pushButton_createPro_clicked();
    void on_comboBox_currentIndexChanged(const QString &arg1);
    void on_comboBox_currentIndexChanged(int index);
    void on_le_search_textChanged(const QString &arg1);
    void update_graph();
};

#endif // MAINWINDOW_H
