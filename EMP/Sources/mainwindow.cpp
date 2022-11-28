#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addemp.h"
#include "update.h"
#include "employeeinfo.h"
#include "delete.h"
#include "search.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QStringList>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    // Function call from header file
    // condition -> to check if the connection with the database
    if(!connectionOpen())
        ui->connectionLabel->setText("Database Disconnected ....");
    else
        ui->connectionLabel->setText("Database Connected .......");



}

MainWindow::~MainWindow()
{
    delete ui;
}









void MainWindow::on_DelButton_clicked()
{
    hide();
    Delete del;
    del.setModal(true);
    del.exec();


}


void MainWindow::on_UpButton_clicked()
{
    hide();
    Update update;
    update.setModal(true);
    update.exec();



}


void MainWindow::on_SearchButton_clicked()
{
   hide();
    Search   see;
    see.setModal(true);
    see.exec();

}


void MainWindow::on_AddButton_clicked()
{
    hide();
    AddEmp add;
    add.setModal(true);
    add.exec();
}

