#include "update_department.h"
#include "ui_update_department.h"

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
