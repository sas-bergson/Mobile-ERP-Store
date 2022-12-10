#include "delete_department.h"
#include "ui_delete_department.h"
#include "department.h"

Delete_department::Delete_department(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete_department)
{
    ui->setupUi(this);
}

Delete_department::~Delete_department()
{
    delete ui;
}

void Delete_department::on_pushButton_2_clicked()
{
    this->close();

    Department* mainWin = new Department();
    mainWin->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    mainWin->show();
}

