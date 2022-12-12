#include "attendancereport.h"
#include "ui_attendancereport.h"
#include "INCLUDES/database.h"
#include <QSqlError>
#include <QTableView>
#include <QSqlQueryModel>
#include <QMainWindow>
#include "home.h"

attendanceReport::attendanceReport(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::attendanceReport)
{
    ui->setupUi(this);

    DB myDB("C:/Users/LENOVO/Desktop/Class Works/C++ QT/Accounting-App/Mobile-ERP-Store/staff/Staff_Attendance_Management/database/Staff.db");
    QSqlQuery query;
    QSqlQueryModel *modal = new QSqlQueryModel(this);

    query.prepare("SELECT Employee.Name, Attendance.ADate, Attendance.StartHour, Attendance.CloseHour FROM Employee,Attendance WHERE Attendance.ID = Employee.ID ORDER BY Attendance.ADate DESC;");

    if(query.exec()){
        qDebug()<<"Successfully Enlisted Staff Attendance";
        modal->setQuery(query);
        ui->tableView->setModel(modal);
        qDebug()<<"Number of rows: "<<modal->rowCount();
    }else{
        qDebug()<<"Error: "<<query.lastError();
    }
}

attendanceReport::~attendanceReport()
{
    delete ui;
}

void attendanceReport::on_backBtn_clicked()
{
    attendanceReport::hide();
    home *hm = new home(this);
    hm->show();
}

