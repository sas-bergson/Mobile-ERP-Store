#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qmessagebox.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_LoginButton_clicked()
{
    QString pass = ui->pass->text();
    QString email = ui->Email->text();
    QMessageBox pop;

    Staff myStaff("C:/Users/LENOVO/Desktop/Class Works/C++ QT/Accounting-App/Mobile-ERP-Store/staff/Staff_Attendance_Management/database/Staff.db");

    QString title = "LoginApp";
    if(pass == "admin" && email == "admin@gmail.com"){
        pop.information(this, title, "Logged In Successfully!");
        MainWindow::hide();
        home *hm = new home(this);
        hm->show();
    }else{
        //pop.warning(this, title, "Incorrect Username or Password!");
        QString error = "Incorrect Username or Password!";
        ui->statusbar->styleSheet() = "color: red";
        ui->statusbar->showMessage(error, 3000);

    }
}


void MainWindow::on_pushButton_clicked()
{
    MainWindow::close();
}

