#include "querysearch.h"
#include "ui_querysearch.h"

querySearch::querySearch(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::querySearch)
{
    ui->setupUi(this);
    // Function call from header file
    // condition -> to check if the connection with the database
    if(!connectionOpen())
        ui->label->setText("Database Dissconnected ...");
    else
        ui->label->setText("Database Connected ...");

}

querySearch::~querySearch()
{
    delete ui;
}

