#include "review.h"
#include "ui_review.h"
#include "dashboard.h"
Review::Review(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Review)
{
    ui->setupUi(this);
}

Review::~Review()
{
    delete ui;
}

void Review::on_pushButton_clicked()
{
//    Dashboard dashboard;
//    dashboard.setModal(true);
//    dashboard.exec();
    hide();
    Dashboard = new dashboard(this);
    Dashboard->show();
}


void Review::on_pushButton_2_clicked()
{
//    Dashboard dashboard;
//    dashboard.setModal(true);
//    dashboard.exec();
}

