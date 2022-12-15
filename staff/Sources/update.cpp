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

    ui->Updep->addItem("Marketing");
    ui->Updep->addItem("Sales");
    ui->Updep->addItem("Maintenance");
    ui->Updep->addItem("Stocks");
    ui->dateEdit->setCalendarPopup(true);


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
    Qry.bindValue(":Birth" ,ui->dateEdit->text());
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
    ui->UPlistView->setModel(modal);
    ui->comboBox->setModel(modal);

    qDebug() << (modal->rowCount());
}






void Update::on_comboBox_currentIndexChanged(const QString &arg1)
{

    QString val=ui->comboBox->currentText();


    MainWindow  conn;
    int ID;
    double Salary;
    QString Phone, Name,Birth,Gender,Department;

    ID = ui->Upid->text().toInt();
    Name = ui->UpName->text();
    Department = ui->Updep->currentText();
    Gender = ui->Upgen->currentText();
    Birth = ui->dateEdit->text();
    Phone = ui->UpPhone->text();
    Salary = ui->UpSalary->text().toInt();
                                            // Input data is obtained here where it is defined the Data Typ

    if(!conn.connectionOpen()){
            qDebug()<<"Failed to connect to database save";
            return; }

        conn.connectionOpen();                                         // Query is made to here to save input data to table
        QSqlQuery Qry;
        Qry.prepare("select * from Work where NAME='"+val+"'");


            if(Qry.exec()){                                                           // check fubnction to see if the application is working or ot
            while(Qry.next()) {

                QString dateOfBirth = Qry.value("dob").toString();
                     QStringList dobSplit = dateOfBirth.split("-");
                     QString yearStr = dobSplit[2];
                     QString monthStr = dobSplit[1];
                     QString dayStr = dobSplit[0];
                     QDate date;
                     date.setDate(yearStr.toInt(), monthStr.toInt(), dayStr.toInt());


                ui->Upid->setText(Qry.value(0).toString());
                ui->UpName->setText(Qry.value(1).toString());
                ui->Updep->setCurrentText(Qry.value(2).toString());
                ui->Upgen->setCurrentText(Qry.value(3).toString());
                ui->dateEdit->setDate(date);
                ui->UpPhone->setText(Qry.value(5).toString());
                ui->UpSalary->setText(Qry.value(6).toString());




            }


            conn.connectionClose();
            }
        else {
            QMessageBox::critical(this,tr("ERROR..."),Qry.lastError().text());
        }



}


void Update::on_UptableView_activated(const QModelIndex &index)
{
   MainWindow  conn;
    QString id = ui->UptableView->model()->index(index.row(), 0).data().toString();
         ui->Upid->setText(id);


               // Input data is obtained here where it is defined the Data Typ

    if(!conn.connectionOpen()){
            qDebug()<<"Failed to connect to database save";
            return; }

        conn.connectionOpen();                                         // Query is made to here to save input data to table

        QSqlQuery* Qry = dUtils.showEmployeeDetailsToLineEdit(id);

            if(Qry->exec()){                                                           // check fubnction to see if the application is working or ot
            while(Qry->next()) {


                QString dateOfBirth = Qry->value(4).toString();
                QStringList dobSplit = dateOfBirth.split("-");
                QString yearStr = dobSplit[2];
                QString monthStr = dobSplit[1];
                QString dayStr = dobSplit[0];
                QDate date;
                date.setDate(yearStr.toInt(), monthStr.toInt(), dayStr.toInt());

                QString Gender = Qry->value(3).toString();

                if(Gender == "Male")
                {
                    ui->Upgen->setCurrentIndex(0);
                }
                else if (Gender == "Female")
                {
                    ui->Upgen->setCurrentIndex(1);
                }

                QString Department = Qry->value(2).toString();

                if(Department == "Stocks")
                {
                    ui->Upgen->setCurrentIndex(0);
                }
                else if (Department == "Marketing")
                {
                    ui->Upgen->setCurrentIndex(1);
                }
                else if (Department == "Maintenance")
                {
                    ui->Upgen->setCurrentIndex(2);
                }
                else if (Department == "Sales")
                {
                    ui->Upgen->setCurrentIndex(3);
                }



                ui->Upid->setText(Qry->value(0).toString());
                ui->UpName->setText(Qry->value(1).toString());

                ui->dateEdit->setDate(date);
                ui->UpPhone->setText(Qry->value(5).toString());
                ui->UpSalary->setText(Qry->value(6).toString());


            }


            conn.connectionClose();
            }
        else {
            QMessageBox::critical(this,tr("ERROR..."),Qry->lastError().text());
        }







}

