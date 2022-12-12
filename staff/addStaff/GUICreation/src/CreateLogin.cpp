/* CreateLoging allows Admin to create a login account for employees, all the field on this window are required,
 * Admin suplies the employee number which will be search on the db if it exists, the user can created, if it does
 * not exist, needs ti create an employee record first. It also checks if the username exists for that employee number.
*/
#include "CreateLogin.h"
#include "ui_CreateLogin.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QStringList>
#include <QDebug>

CreateLogin::CreateLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateLogin)
{
    ui->setupUi(this);
    //Window name
    this->setWindowTitle("Create Login");
}

CreateLogin::~CreateLogin()
{
    delete ui;
}

void CreateLogin::on_btnHome_clicked()
{
    this->close();
}

void CreateLogin::on_btnSumbit_clicked()
{
    //input from user
    QString empNumber = ui->lineEditEmpNum->text();
    QString username = ui->lineEditUsername->text();
    QString password = ui->lineEditPassw->text();

    bool found = false; //for employee number found in employee data
    bool userExists = false; //if user already exists in the file
    QString employeeTxt = "Employee.txt";
    QString userPssw = "UserPassword.txt"; //store employee username and password
    QFile fileEmployee(employeeTxt); //will be used to check if employee exists
    QFile fileUsername(userPssw);

    //all fields are required
    if(!empNumber.isEmpty() && !username.isEmpty() && !password.isEmpty()){

        if(!fileEmployee.open(QFile::ReadOnly | QFile::Text)){
            QMessageBox::warning(this, "Warning", "There is no employee created.");
        }

        QTextStream in(&fileEmployee);

        //read employee to check that the employee does not exist
        while(!in.atEnd()){
            QString line = in.readLine();
            QStringList token = line.split("\t");

            if(token[5]== empNumber){

                //qDebug() << "Found!!! in " << lineCounter << "\n";
                found = true;

            }
        }
        //if the employee had not been created
        if(!found){
            QMessageBox::information(this, "No such employee", "There is not such employee in the data base");
        }//end if
        else{

            //check if user was already created
            if(fileUsername.exists()){
                fileUsername.open(QFile::ReadOnly | QFile::Text);
                QTextStream in(&fileUsername);
                while(!in.atEnd()){
                    QString line = in.readLine();
                    if(line.contains(empNumber)){
                        userExists = true;
                    }
                }

                fileUsername.close();//close file
            }
            //Continue operation if it does not exist
            if(!userExists){

                if(!fileUsername.open(QFile::WriteOnly | QFile::Text | QFile::Append)){
                    QMessageBox::warning(this, "Warning", "Could not open file");
                }

                QTextStream out(&fileUsername);
                out << empNumber <<"\t" << username << "\t" << password << "\n";

                fileUsername.flush();

                QMessageBox::information(this,"Operation completed", "User succesfully created!");

                ui->lineEditEmpNum->clear();
                ui->lineEditUsername->clear();
                ui->lineEditPassw->clear();
                fileUsername.close();
            }
            //produce a warning
            else
            {
                QMessageBox::warning(this, "Warining!", "Login information was already created for emp# " + empNumber);
            }//end else

        }
    }else{
        QMessageBox::warning(this, "Missing input", "All the fields are required");
    }//end else


}
