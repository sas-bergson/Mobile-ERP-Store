#include "delete.h"
#include "ui_delete.h"
#include "mainwindow.h"

Delete::Delete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete)
{
    ui->setupUi(this);

    setWindowTitle("DELETE EMPLOYEE");

    MainWindow conn;
    // condition -> to check if the connection with the database
    if(!conn.connectionOpen())
        ui->delconnlabel->setText("Database Dissconnected ...");
    else
        ui->delconnlabel->setText("Database Connected ...");

    ui->DeltableView->setAlternatingRowColors(true);
    ui->DeltableView->setStyleSheet("alternate-background-color: #E4E4E4;background-color:white;selection-background-color:#1492E6;selection-color:white;");

}


Delete::~Delete()
{
    delete ui;
}

void Delete::on_BackB_clicked()
{
    this->close();

    MainWindow* mainWin = new MainWindow();
    mainWin->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    mainWin->show();

}



void Delete::on_Load_clicked()
{
    MainWindow conn;
    QSqlQueryModel *modal = new QSqlQueryModel();
    conn.connectionOpen();
    QSqlQuery* Qry = new QSqlQuery(conn.Employ);
    Qry->prepare("select * from Work");
    Qry->exec();
    modal->setQuery(*Qry);
    ui->DeltableView->setModel(modal);
    qDebug() << (modal->rowCount());
}




void Delete::on_DeltableView_doubleClicked(const QModelIndex &index)
{

    QString id = ui->DeltableView->model()->index(index.row(), 0).data().toString();

    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Confirm", "Are you sure you want to delete '" + id + "' record");

    if(reply == QMessageBox::Yes)
    {
        Utils.deleteEmployeeRecord(id);


}

};
