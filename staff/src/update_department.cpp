#include "update_department.h"
#include "ui_update_department.h"
#include "department.h"

update_department::update_department(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::update_department)
{
    ui->setupUi(this);
}

update_department::~update_department()
{
    delete ui;
}

void update_department::on_backButton_1_clicked()
{
    this->close();

    Department* mainWin = new Department();
    mainWin->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    mainWin->show();

}

