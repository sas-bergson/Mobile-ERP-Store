#include "registerattendance.h"
#include "ui_registerattendance.h"
#include "INCLUDES/attendance.h"
#include <home.h>
#include <QMainWindow>
#include <QMessageBox>

RegisterAttendance::RegisterAttendance(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegisterAttendance)
{
    ui->setupUi(this);
}

RegisterAttendance::~RegisterAttendance()
{
    delete ui;
}

void RegisterAttendance::on_pushButton_clicked()
{
    Attendance At("C:/Users/LENOVO/Desktop/Class Works/C++ QT/Accounting-App/Mobile-ERP-Store/staff/Staff_Attendance_Management/database/Staff.db");
    QString email = ui->emailInp->text();
    QString sh = ui->startTimeInp->text();
    QString ch = ui->closeTimeInp->text();
    QString dt = ui->dateInp->text();
    bool res = At.addAttendance(sh,ch,dt,email);
    if(res == true){
        QMessageBox pop;
        QString msg = "Staff "+email+" Marked Present!";
        QString title = "Staff Attendance Management";
        pop.information(this, title, msg);

        RegisterAttendance::hide();
        home *hm = new home(this);
        hm->show();
    }else{
        QMessageBox pop;
        QString msg = "Sorry, could not register Presence!";
        QString title = "Staff Attendance Management";
        pop.critical(this, title, msg);
    }
}


void RegisterAttendance::on_pushButton_2_clicked()
{
    RegisterAttendance::hide();
    home *hm = new home(this);
    hm->show();
}

