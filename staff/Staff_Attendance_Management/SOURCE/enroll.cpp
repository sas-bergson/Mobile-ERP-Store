#include "enroll.h"
#include "ui_enroll.h"
#include <INCLUDES/staff.h>
#include <mainwindow.h>
#include <home.h>
#include <QPixmap>
#include <mainwindow.h>
#include <QMessageBox>

Enroll::Enroll(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Enroll)
{
    ui->setupUi(this);
}

Enroll::~Enroll()
{
    delete ui;
}

void Enroll::on_pushButton_clicked()
{
    Staff myStaff("C:/Users/LENOVO/Desktop/Class Works/C++ QT/Accounting-App/Mobile-ERP-Store/staff/Staff_Attendance_Management/database/Staff.db");
    QString name = ui->nameInp->text();
    QString email = ui->emailInp->text();
    QString address = ui->addressInp->text();
    QString role = ui->roleInp->text();

    bool enrol = myStaff.enrollStaff(name ,email,address,role);
    if(enrol == true){
        QMessageBox pop;
        QString msg = name+" Enrolled Successfully!";
        QString title = "Staff Attendance Management";
        pop.information(this, title, msg);

        Enroll::hide();
        home *hm = new home(this);
        hm->show();
    }else{
        QMessageBox pop;
        QString msg = name+" Could not be enrolled!";
        QString title = "Staff Attendance Management";
        pop.critical(this, title, msg);
    }

}


void Enroll::on_backBtn_clicked()
{
    Enroll::hide();
    home *hm = new home(this);
    hm->show();
}

