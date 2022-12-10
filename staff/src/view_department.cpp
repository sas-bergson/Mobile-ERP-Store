#include "view_department.h"
#include "ui_view_department.h"
#include "department.h"

view_department::view_department(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::view_department)
{
    ui->setupUi(this);
}

view_department::~view_department()
{
    delete ui;
}




void view_department::on_backButton_1_clicked()
{
    this->close();

    Department* mainWin = new Department();
    mainWin->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    mainWin->show();

}

