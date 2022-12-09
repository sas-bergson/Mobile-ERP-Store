#include "showexp.h"
#include "ui_showexp.h"
#include "experience.h"
#include "mainwindow.h"

ShowExp::ShowExp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowExp)
{
    ui->setupUi(this);

    MainWindow  conn;
        setWindowTitle("SHOW EXPERIENCE");
        // condition -> to check if the connection with the database
        if(!conn.connectionOpen())
            ui->shxconn->setText("Database Disconnected ...");
        else
            ui->shxconn->setText("Database Connected ...");

        ui->ShtableView->setAlternatingRowColors(true);
        ui->ShtableView->setStyleSheet("alternate-background-color: #E4E4E4;background-color:white;selection-background-color:#1492E6;selection-color:white;");


}

ShowExp::~ShowExp()
{
    delete ui;
}



void ShowExp::on_GBack_clicked()
{
    this->close();

    Experience* Exp = new Experience();
    Exp->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    Exp->show();
}


void ShowExp::on_SBack_clicked()
{

    MainWindow conn;
    QSqlQueryModel *modal = new QSqlQueryModel();
    conn.connectionOpen();
    QSqlQuery* Qry = new QSqlQuery(conn.Employ);
    Qry->prepare("select * from Details");
    Qry->exec();
    modal->setQuery(*Qry);
    ui->ShtableView->setModel(modal);
    qDebug() << (modal->rowCount());

}

