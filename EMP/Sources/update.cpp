#include "update.h"
#include "ui_update.h"
#include "mainwindow.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QStringList>
#include <QDate>

Update::Update(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Update)
{
    ui->setupUi(this);

    setWindowTitle("DELETE EMPLOYEE");

    ui->UptableView->setAlternatingRowColors(true);
    ui->UptableView->setStyleSheet("alternate-background-color: #E4E4E4;background-color:white;selection-background-color:#1492E6;selection-color:white;");
    ui->dateEdit->setCalendarPopup(true);

    ui->Updep->addItem("Marketing");
    ui->Updep->addItem("Sales");
    ui->Updep->addItem("Maintenance");
    ui->Updep->addItem("Stocks");


    ui->Upgen->addItem("Male");
    ui->Upgen->addItem("Female");


     dUtils.setEmployeeUpdateDetails(ui->UptableView);

     setWindowTitle("EMPLOYEE DATA");


}

Update::~Update()
{
    delete ui;
}

void Update::on_Back_clicked()
{
    this->close();

    MainWindow* mainWin = new MainWindow();
    mainWin->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    mainWin->show();

}






void Update::on_UpButton_clicked()
{

    MainWindow conn;

    QString Name;

    if(!conn.connectionOpen()){
            qDebug()<<"Failed to connect to database update";
            return; }

    conn.connectionOpen();
    QSqlQuery Qry;
    Qry.prepare("UPDATE Work SET NAME=:Name, DEPARTMENT=:Department, GENDER=:Gender, BIRTH=:Birth, PHONE=:Phone,SALARY=:Salary WHERE EmployeeID=:ID");

    Qry.bindValue(":ID",ui->Upid->text().toInt());
    Qry.bindValue(":Name",ui->UpName->text());
    Qry.bindValue(":Department", ui->Updep->currentText());
    Qry.bindValue(":Gender", ui->Upgen->currentText());
    Qry.bindValue(":Birth" ,ui->dateEdit->text().toInt());
    Qry.bindValue(":Phone" ,ui->UpPhone->text().toInt());
    Qry.bindValue(":Salary" ,ui->UpSalary->text().toInt());

    if(Qry.exec()){
        QMessageBox::information(this,tr("EDIT"),tr("Updated successfully !"));
        conn.connectionClose();
        }
    else {
        QMessageBox::critical(this,tr("ERROR..."),Qry.lastError().text());
    }




}


void Update::on_Ref_clicked()
{
    MainWindow conn;
    QSqlQueryModel *modal = new QSqlQueryModel();
    conn.connectionOpen();
    QSqlQuery* Qry = new QSqlQuery(conn.Employ);
    Qry->prepare("select * from Work");
    Qry->exec();
    modal->setQuery(*Qry);
    ui->UptableView->setModel(modal);
    qDebug() << (modal->rowCount());
}


