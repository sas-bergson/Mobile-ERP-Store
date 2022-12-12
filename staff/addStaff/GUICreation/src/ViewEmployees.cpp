/*This shows the employee records and full information
*/
#include "ViewEmployees.h"
#include "ui_ViewEmployees.h"
#include <iostream>
#include <QDebug>
#include <QFile>
#include <QString>
#include <QMessageBox>



ViewEmployees::ViewEmployees(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewEmployees)
{
    ui->setupUi(this);
    this->setWindowTitle("Employee Information");

}

ViewEmployees::~ViewEmployees()
{
    delete ui;
}


void ViewEmployees::on_btnView_clicked()
{

    QString employeeTxt = "Employee.txt";
    QFile fileEmployee(employeeTxt); //store employee info

    //open file
    if(!fileEmployee.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "There is no employee created.");
    }

    QTextStream in(&fileEmployee);
    //read file
    QString employeeInfo = in.readAll();
    //outpot content
    ui->textBrowser->setPlainText(employeeInfo);
    //close file
    fileEmployee.close();
}




void ViewEmployees::on_btnView_2_clicked()
{
    ui->textBrowser->clear();
    this->close();
}
