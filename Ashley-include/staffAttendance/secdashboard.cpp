#include "secdashboard.h"
#include "ui_secdashboard.h"

SecDashboard::SecDashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDashboard)
{
    ui->setupUi(this);
}

SecDashboard::~SecDashboard()
{
    delete ui;
}

void SecDashboard::on_pushButton_clicked()
{
    QString firstname = ui->lineEdit->text();
    QString lastname = ui->lineEdit_2->text();
    QString staffid = ui->lineEdit_3->text();
    QString starthour = ui->lineEdit_4->text();
    QString endhour = ui->lineEdit_5->text();

    secReview = new SecReview(this);
    secReview->show();
}

