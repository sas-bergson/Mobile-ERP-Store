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
    QString name = ui->Name->text();
    QString pass = ui->password->text();
    QMessageBox pop;
    QString title = "LoginApp";
    if(name == "Fonya" && pass == "password"){
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

