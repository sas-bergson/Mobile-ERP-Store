#include "exp.h"
#include "ui_exp.h"
#include "mainwindow.h"
#include "experience.h"

Exp::Exp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Exp)
{
    ui->setupUi(this);

    setWindowTitle("EXPERIENCE DETAILS");

    MainWindow conn;
    // condition -> to check if the connection with the database
    if(!conn.connectionOpen())
        ui->Exconn->setText("Database Dissconnected ...");
    else
        ui->Exconn->setText("Database Connected ...");

    ui->DttableView->setAlternatingRowColors(true);
    ui->DttableView->setStyleSheet("alternate-background-color: #E4E4E4;background-color:white;selection-background-color:#1492E6;selection-color:white;");


}

Exp::~Exp()
{
    delete ui;
}




void Exp::on_ExpB_clicked()
{
    MainWindow conn;
    int Id;
    QString ExName,ExOrganisation,ExDuration,ExPosition,ExDepartment;

    Id = ui->lineEdit_id->text().toInt();
    ExName = ui->lineEdit_En->text();
    ExOrganisation = ui->lineEdit_ExO->text();
    ExDuration = ui->lineEdit_Dur->text();
    ExPosition = ui->lineEdit_Pos->text();
    ExDepartment = ui->lineEdit_ExD->text();

    // ============================================================== //

    if(!conn.connectionOpen()){
            qDebug()<<"Failed to connect to database save";                    // the contract and sales section are almost identically same
                                                                                // the only few calculation differncess are already highlighted
            return; }

        conn.connectionOpen();
        QSqlQuery Qry;
        Qry.prepare("INSERT INTO Details (ID,NAME,ORGANISATION,DURATION,POSITION,DEPARTMENT) VALUES (?,?,?,?,?,?)");
        Qry.addBindValue(Id);
        Qry.addBindValue(ExName);
        Qry.addBindValue(ExOrganisation);
        Qry.addBindValue(ExDuration);
        Qry.addBindValue(ExPosition);
        Qry.addBindValue(ExDepartment);


        if(Qry.exec()){
        QMessageBox::information(this,tr("SAVE"),tr("Entry successfully saved !"));
        conn.connectionClose();}
        else {
        QMessageBox::critical(this,tr("ERROR..."),Qry.lastError().text());
        }

}


void Exp::on_ExUp_clicked()
{
    MainWindow conn;

    QString id,ExName,ExOrganisation,ExDuration,ExPosition,ExDepartment;

    if(!conn.connectionOpen()){
            qDebug()<<"Failed to connect to database update";
            return; }

    conn.connectionOpen();
    QSqlQuery Qry;
    Qry.prepare("UPDATE Details SET NAME=:ExName,ORGANISATION=:ExOrganisation, DURATION=:ExDuration, POSITION=:ExPosition, DEPARTMENT=:ExDepartment WHERE ID =:id");

    Qry.bindValue(":id",ui->lineEdit_id->text().toInt());
    Qry.bindValue(":ExName",ui->lineEdit_En->text());
    Qry.bindValue(":ExOrganisation",ui->lineEdit_ExO->text());
    Qry.bindValue(":ExDuration", ui->lineEdit_Dur->text());
    Qry.bindValue(":ExPosition" ,ui->lineEdit_Pos->text());
    Qry.bindValue(":ExDepartment" ,ui->lineEdit_ExD->text());

    if(Qry.exec()){
        QMessageBox::information(this,tr("EDIT"),tr("Updated successfully !"));
        conn.connectionClose();
        }
    else {
        QMessageBox::critical(this,tr("ERROR..."),Qry.lastError().text());
    }

}


void Exp::on_ExLd_clicked()
{
    MainWindow conn;
    QSqlQueryModel *modal = new QSqlQueryModel();
    conn.connectionOpen();
    QSqlQuery* Qry = new QSqlQuery(conn.Employ);
    Qry->prepare("select * from Details");
    Qry->exec();
    modal->setQuery(*Qry);
    ui->DttableView->setModel(modal);
    qDebug() << (modal->rowCount());
}




void Exp::on_HB_clicked()
{
        this->close();

        Experience* Exp = new Experience();
        Exp->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
        Exp->show();
}






void Exp::on_ExDel_clicked()
{
    MainWindow conn;
    QString Id,ExName,ExOrganisation,ExDuration,ExPosition,ExDepartment;
    Id = ui->lineEdit_id->text();

    if(!conn.connectionOpen()){
             qDebug()<<"Failed to connect to database update";
             return; }

     conn.connectionOpen();
     QSqlQuery Qry;
     Qry.prepare("DELETE FROM Details WHERE ID='"+Id+"'");

     if(Qry.exec()){
         QMessageBox::information(this,tr("DELETE"),tr("Information Deleted !"));
         conn.connectionClose();
         }
     else {
         QMessageBox::critical(this,tr("ERROR..."),Qry.lastError().text());
     }
};
