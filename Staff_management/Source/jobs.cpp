#include "jobs.h"
#include "ui_jobs.h"

jobs::jobs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::jobs)
{
    ui->setupUi(this);
}

jobs::~jobs()
{
    delete ui;
}
