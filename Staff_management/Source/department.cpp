#include "department.h"
#include "ui_department.h"
#include "mainwindow.h"
#include "view_department.h"
#include "update_department.h"

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


void Department::on_pushButton_5_clicked()
{

        hide();
      view_department view_department;
      view_department.setModal(true);
      view_department.exec();


}





void Department::on_backButton_clicked()
{

    this->close();

    MainWindow* mainWin = new MainWindow();
    mainWin->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    mainWin->show();

}


void Department::on_pushButton_3_clicked()
{
    hide();
  update_department update_department;
  update_department.setModal(true);
  update_department.exec();

}

