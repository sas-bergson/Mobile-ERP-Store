#include "experience.h"
#include "ui_experience.h"
#include "mainwindow.h"
#include "showexp.h"
#include "exp.h"


Experience::Experience(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Experience)
{
    ui->setupUi(this);
}

Experience::~Experience()
{
    delete ui;
}

void Experience::on_Home_clicked()
{
    this->close();

    MainWindow* mainWin = new MainWindow();
    mainWin->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    mainWin->show();
}



void Experience::on_ShowExp_clicked()
{
  hide();
  ShowExp showexp;
  showexp.setModal(true);
  showexp.exec();

}


void Experience::on_AddExp_clicked()
{
    hide();
    Exp ex;
    ex.setModal(true);
    ex.exec();
}

