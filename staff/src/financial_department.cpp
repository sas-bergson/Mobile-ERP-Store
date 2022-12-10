#include "financial_department.h"
#include "ui_financial_department.h"

financial_department::financial_department(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::financial_department)
{
    ui->setupUi(this);
}

financial_department::~financial_department()
{
    delete ui;
}
