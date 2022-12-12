#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qmessagebox.h>
#include <home.h>
#include <enroll.h>
#include "INCLUDES/staff.h"
#include "INCLUDES/database.h"
#include <registerattendance.h>
#include <viewstaff.h>
#include "attendancereport.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_LoginButton_clicked();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Ui::home *hm;
    Ui::Enroll *en;
    Ui::RegisterAttendance *pg;
    Ui::viewStaff *vs;
    Ui::attendanceReport *ar;
};
#endif // MAINWINDOW_H
