#include "enroll.h"
#include "ui_enroll.h"

Enroll::Enroll(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Enroll)
{
    ui->setupUi(this);
}

Enroll::~Enroll()
{
    delete ui;
}
