#include "viewstaff.h"
#include "ui_viewstaff.h"
#include <QMainWindow>
#include <QSqlError>
#include <QTableView>
#include <QSqlQueryModel>
#include "INCLUDES/database.h"
#include "INCLUDES/staff.h"
#include "home.h"

viewStaff::viewStaff(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::viewStaff)
{
    ui->setupUi(this);
    DB myDB("C:/Users/LENOVO/Desktop/Class Works/C++ QT/Accounting-App/Mobile-ERP-Store/staff/Staff_Attendance_Management/database/Staff.db");
    QSqlQuery query;
    QSqlQueryModel *modal = new QSqlQueryModel(this);

    query.prepare("SELECT * FROM Employee");
    if(query.exec()){
        qDebug()<<"Successfully Gotten all staffs";
        modal->setQuery(query);
        ui->tableView->setModel(modal);
        qDebug()<<"Number of rows: "<<modal->rowCount();
    }else{
        qDebug()<<"Error: "<<query.lastError();
    }
}

viewStaff::~viewStaff()
{
    delete ui;
}

void viewStaff::on_pushButton_clicked()
{
    viewStaff::hide();
    home *hm = new home(this);
    hm->show();
}

