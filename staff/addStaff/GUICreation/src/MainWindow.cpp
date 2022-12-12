/* This the main window where user and admin would login, the program detect if it is a valid employee
 * or a valid admin whom password is set up by default.
 * If an employee is detected, an signal is sent to a slot at User.cpp who is responsable for outputting employee
 * information.
*/
#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //set Image
    //QPixmap pix("C:/AdvancedC++/build-GUICreation-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/Login.jpg");
    //ui->lblPic->setPixmap(pix);

    adminWindow = new AdminWindow(this); //admin window
    user = new User(this); //user window
    employeeUser = new Employment::Employee(); //stores employee data

    //send signal to user window
    //connec(sender, &Sender::signalName, receiver, &Receiver::receiverName)
    connect(this, SIGNAL(emitEmployee(Employment::Employee)), user, SLOT(onNewEmployee(Employment::Employee)));

    //set window name
    this->setWindowTitle("Login");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnLogin_clicked()
{
    //get user input
    QString userName = ui->lineEditUsername->text();
    QString password = ui->lineEditPassword->text();
    //if user and asmin are trying to login
    bool isUser = false;
    bool isAdmin = false;
    //tokens for spliting line read into fields
    QStringList tokenLogin;
    QStringList tokenEmployee;


    QString userPssw = "UserPassword.txt"; //file of user login
    QFile userPasswordFile(userPssw);
    QFile fileEmployee("Employee.txt"); //file of employees

    if(userName != "Admin"){
        //Check if there is user created first
        if(userPasswordFile.exists()){
            if(!userPasswordFile.open(QFile::ReadOnly | QFile::Text)){
                QMessageBox::information(this, "Warning", "Something went wrong when trying to open the file");
            }
            //Create a text stream
            QTextStream in(&userPasswordFile);
            //while it has not rached the end
            while(!in.atEnd()){
                //read a line
                QString line = in.readLine();
                //split the line in different fields
                tokenLogin = line.split("\t");
                //field 1 and 2 indicate username and password respectevely
                if(tokenLogin[1] == userName && tokenLogin[2] == password){
                    QMessageBox::information(this, "Welcome", "Welcome " + userName + ".");

                    isUser = true;
                    this->hide();
                    user->show();
                    break; //get out of the loop once user is found
                }

            }
            //if user is found, open employee file
            if(isUser){
                if(!fileEmployee.open(QFile::ReadOnly | QFile::Text)){
                     QMessageBox::information(this, "Warning", "Something went wrong when trying to open the file");
                }

                QTextStream in(&fileEmployee);
                //search employee in employee file
                while(!in.atEnd()){
                    QString line = in.readLine();
                    tokenEmployee = line.split("\t");
                    if(tokenLogin[0] == tokenEmployee[5]){
                        //set employee information into an employee object
                        employeeUser->setFirstName(tokenEmployee[0].toStdString());
                        employeeUser->setLastName(tokenEmployee[1].toStdString());
                        employeeUser->setPosition(tokenEmployee[2].toStdString());
                        employeeUser->setPayment(tokenEmployee[3].toDouble());
                        employeeUser->setHireDate(tokenEmployee[4].toStdString());
                        employeeUser->setEmployeeNumber(tokenEmployee[5].toInt());
                        break;

                    }//end if
                }//end while

            }//end if

            //emit information to user window
            emit emitEmployee(*employeeUser);
            //overload operator
            std::cout << *employeeUser << std::endl;
            //close files
            userPasswordFile.flush();
            userPasswordFile.close();



        }//end if
    }//end if
    //admin and password are set up
    else if(userName == "Admin" && password == "root")
    {
        isAdmin = true;
        hide();
        adminWindow->show();

    }//end else if
    if(!isUser && !isAdmin)
    {
        QMessageBox::warning(this, "Login", "Invalid Username or Password.");
    }//end else
}
