#include "secreview.h"
#include "ui_secreview.h"
SecReview::SecReview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecReview)
{
    ui->setupUi(this);
}

SecReview::~SecReview()
{
    delete ui;
}

void SecReview::on_pushButton_clicked()
{
//    hide();
//    secDashboard = new SecDashboard(this);
//    secDashboard->show();
}


void SecReview::on_pushButton_2_clicked()
{
//    hide();
//    secDashboard = new SecDashboard(this);
//    secDashboard->show();
}

