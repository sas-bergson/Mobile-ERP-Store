#include "add.h"
#include "ui_add.h"
#include  "QVBoxLayout"
#include "QPushButton"
#include "QDialog"
#include "mainwindow.h"

Add::Add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);

    MainWindow  conn;
    setWindowTitle("EMPLOYEE DATA");
    // condition -> to check if the connection with the database
    if(!conn.connectionOpen())
        ui->addconnection->setText("Database Disconnected ...");
    else
        ui->addconnection->setText("Database Connected ...");

    QVBoxLayout * lay = new QVBoxLayout(this);
    for (int i = 0; i < 15; ++i) {

        QPushButton  *botton = new QPushButton("HELLO");
        lay->addWidget(botton);
    }

     ui->scrollContents->setLayout(lay);

}

Add::~Add()
{
    delete ui;
}
