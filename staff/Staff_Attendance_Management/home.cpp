#include "home.h"
#include "ui_home.h"
#include <QPixmap>
#include <mainwindow.h>

home::home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
    QPixmap pic(":/assets/money.jpg");
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

