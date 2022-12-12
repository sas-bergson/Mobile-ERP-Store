#include "home.h"
#include "ui_home.h"
#include <QPixmap>
#include <mainwindow.h>
#include <registerattendance.h>

home::home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
    QPixmap pic(":/assets/hero2.png");
    //resizing image according to default label dimensions:
    int w = ui->pic_label->width();
    int h = ui->pic_label->height();
    ui->pic_label->styleSheet() = "border-radius: 10px;";
    ui->pic_label->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio));
}

home::~home()
{
    delete ui;
}

void home::on_quit_clicked()
{

    home::close();
}


void home::on_BackBtn_clicked()
{
    home::hide();
    MainWindow *mw;
    mw = new MainWindow(this);
    mw->show();
}


void home::on_AddBtn_clicked()
{
    home::hide();
    Enroll *en = new Enroll(this);
    en->show();
}


void home::on_ViewBtn_clicked()
{
     home::hide();
     RegisterAttendance *pg = new RegisterAttendance(this);
     pg->show();
}


void home::on_EditBtn_clicked()
{
    home::hide();
    viewStaff *vs = new viewStaff(this);
    vs->show();
}


void home::on_DelBtn_clicked()
{
    home::hide();
    attendanceReport *ar = new attendanceReport(this);
    ar->show();
}

