/* PromoteDemote allows Admin to edit position and salary of an employee.
*/
#include "PromoteDemote.h"
#include "ui_PromoteDemote.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QStringList>
#include <QDebug>
#include <QByteArray>
#include <QDir>

PromoteDemote::PromoteDemote(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PromoteDemote)
{
    ui->setupUi(this);
    this->setWindowTitle("Promote/Demote Employee");
}

PromoteDemote::~PromoteDemote()
{
    delete ui;
}

void PromoteDemote::on_btnHome_clicked()
{
    this->close();
}

void PromoteDemote::on_btnSubmit_clicked()
{
    QString employeeText = "Employee.txt";
    QFile fileEmployee(employeeText); //store employee info
    QFile newFile("Employee2.txt"); //used to store replace old file

    //getting input from user
    bool found = false;
    QString empNumber = ui->lineEditEmpNum->text();
    QString position = ui->lineEditPosition->text();
    QString salary = ui->lineEditSalary->text();


     QString line; //to store each line of file
     QStringList token; //to split into different fields
     QStringList fileLine;


    //The file had to be created first
    if(fileEmployee.exists())
    {

        fileEmployee.open(QFile::ReadWrite | QFile::Text);
        newFile.open(QFile::WriteOnly | QFile::Text);

        QTextStream in(&fileEmployee);
        //fileEmployee.setFileName("Employee3.txt");
        QTextStream out(&newFile);

        while(!in.atEnd()){
             line = in.readLine();
             token = line.split("\t");
             if(token[5] == empNumber){
                 found = true;
                 if (found){
                    qDebug() << "found";

                    //Replace the desired position and salary
                    token[2] = position;
                    token[3] = salary;
                 }else{
                     QMessageBox::information(this, "Operation failed", "Employee does not exist.");
                 }

             }
             //insert old data plus updated position and salary
             line = token[0] + "\t" + token[1] + "\t" + token[2] + "\t" + token[3]
                     + "\t" + token[4] + "\t" + token[5] + "\n";

             out << line;
          }

        //close files
        fileEmployee.flush();
        fileEmployee.close();
        fileEmployee.remove();
        newFile.close();


        QMessageBox::information(this, "Operation Notice", "Employee " + empNumber + " was succesfully demoted/promoted");
    }
    else
    {
         QMessageBox::warning(this, "Warning", "There is no employee created.");
    }

    //clear text fields
    ui->lineEditEmpNum->clear();
    ui->lineEditPosition->clear();
    ui->lineEditSalary->clear();
    //rename the file
    QDir().rename("Employee2.txt", "Employee.txt");

}
