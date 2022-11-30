#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "department.h"
#include "jobs.h"
#include "shifts.h"

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




void MainWindow::on_pushButton_clicked()
{
    hide();
  Department department;
  department.setModal(true);
  department.exec();

}


void MainWindow::on_pushButton_2_clicked()
{
    hide();
  jobs jobs;
  jobs.setModal(true);
  jobs.exec();
}


void MainWindow::on_pushButton_3_clicked()
{
    hide();
  shifts shifts;
  shifts.setModal(true);
  shifts.exec();
}

