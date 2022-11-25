#include "department.h"
#include "ui_department.h"
#include "mainwindow.h"

Department::Department(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Department)
{
    ui->setupUi(this);
}

Department::~Department()
{
    delete ui;
}


//void Department::on_backButton_clicked()
//{
//    this->close();

//    MainWindow* mainWin = new MainWindow();
//    mainWin->setWindowFlag(Qt::Window | Qt::FramelessWindowHint);
//    mainWin->show();
//}

