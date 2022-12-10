#include "shifts.h"
#include "ui_shifts.h"

shifts::shifts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shifts)
{
    ui->setupUi(this);
}

shifts::~shifts()
{
    delete ui;
}
