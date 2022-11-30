#include "view_department.h"
#include "ui_view_department.h"

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
