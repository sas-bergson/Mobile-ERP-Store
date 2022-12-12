/*Admin can delete employees from the records by providing the employee number.
*/
#include "DeleteEmployee.h"
#include "ui_DeleteEmployee.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QIntValidator>

DeleteEmployee::DeleteEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteEmployee)
{
    ui->setupUi(this);
    ui->lineEditEmpNum->setValidator(new QIntValidator(100, 900, this));
    this->setWindowTitle("Delete Employee");
}

DeleteEmployee::~DeleteEmployee()
{
    delete ui;
}



void DeleteEmployee::on_btnDelete_clicked()
{
    QString employeeText = "Employee.txt";
    QFile fileEmployee(employeeText); //store employee info
    QString userPssw = "UserPassword.txt"; //delete from here too
    QFile fileUsername(userPssw);

    //getting input from user
     QString empNumber = ui->lineEditEmpNum->text();

     QString line; //to store each line of file
     QStringList token; //to split into different fields
     QStringList fileLine;
     QString temp; //hold updated information
     QString lineUser;
     QStringList tokenUser;
     QString tempUser;

     bool found = false;


    //The file had to be created first
    if(fileEmployee.exists())
    {
        fileEmployee.open(QFile::ReadWrite | QFile::Text);
        QTextStream in(&fileEmployee);

        //read file
        while(!in.atEnd())
        {
             line = in.readLine();
             //append only those different from empNumber to delete
             if(!line.contains(empNumber))
             {

                 temp.append(line + "\n");

             }else{
                 found = true;
             }


       }
        //resize the file
        fileEmployee.resize(0);
        //rewrite the record in the file without that employee
        in << temp;
        //check if file is empty to delete TODO!!
        fileEmployee.close();

        //same steps from above to delete from user file as well
        if(fileUsername.exists()){
            fileUsername.open(QFile::ReadWrite | QFile::Text);
            QTextStream inUser(&fileUsername);


            while(!inUser.atEnd())
            {
                 lineUser = inUser.readLine();

                 if(!lineUser.contains(empNumber))
                    {
                       tempUser.append(lineUser + "\n");

                    }
            }

                fileUsername.resize(0);
                inUser << tempUser;
                fileUsername.close();

        }
        //inform admin whether the user was succesfully deleted
        if(found){
            QMessageBox::information(this, "Succesful Operation", "Employee was succesfully deleted.");
            ui->lineEditEmpNum->clear();
        }//end if
        else if(!found)
        {
           QMessageBox::warning(this, "Operation failed", "Employee does not exist.");
        }//end else if
    }
    else
    {
         QMessageBox::warning(this, "Warning", "There is no employee created.");
    }//end else


}

void DeleteEmployee::on_btnGoBack_clicked()
{
    this->close();
}
