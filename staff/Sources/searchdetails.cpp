#include "searchdetails.h"
#include "ui_searchdetails.h"
#include "mainwindow.h"
#include "QtDebug"

Searchdetails::Searchdetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Searchdetails)
{
    ui->setupUi(this);

    MainWindow  conn;
        setWindowTitle("SEARCH EMPLOYEE");
        // condition -> to check if the connection with the database
        if(!conn.connectionOpen())
            ui->searchconnection->setText("Database Disconnected ...");
        else
            ui->searchconnection->setText("Database Connected ...");
        ui->EmptableView->setAlternatingRowColors(true);
        ui->EmptableView->setStyleSheet("alternate-background-color: #E4E4E4;background-color:white;selection-background-color:#1492E6;selection-color:white;");


}

Searchdetails::~Searchdetails()
{
    delete ui;
}

void Searchdetails::on_SearchBut_clicked()
{
    MainWindow conn;
    QSqlQueryModel * model = new QSqlQueryModel();
    QMessageBox msgBox;

      QString input = ui->lineEdit_Sname->text();

      // search student in database by surname and display values //
      if(ui->SearchBox->currentText()=="Name"){
          try {
              conn.connectionOpen();

              QSqlQuery* q = new QSqlQuery(conn.Employ);
              bool prepRet = q->prepare("SELECT * FROM Work WHERE NAME ='"+input+"'");
              if (!prepRet) {
                qDebug() << q->lastError().text();
                return;
              }
              q->exec();
              if (!q->exec()) {
                qDebug() << q->lastError().text();
                return;
              }
              model->setQuery(*q);
              ui->EmptableView->setModel(model);

          } catch (const char * er) {
              qDebug() << er;
              msgBox.setText(er);
              msgBox.exec();
          }


}
      // search student in database by pid and display values //
      if(ui->SearchBox->currentText()=="Employee ID"){
          try {
              conn.connectionOpen();

              QSqlQuery* q = new QSqlQuery(conn.Employ);
              bool prepRet = q->prepare("SELECT * FROM Work WHERE EmployeeID ='"+input+"'");
              if (!prepRet) {
                qDebug() << q->lastError().text();
                return;
              }
              q->exec();
              if (!q->exec()) {
                qDebug() << q->lastError().text();
                return;
              }
              model->setQuery(*q);
              ui->EmptableView->setModel(model);

              conn.connectionClose();
              qDebug() << "rowCount: " << (model->rowCount());

          } catch (const char * er) {
              qDebug() << er;
              msgBox.setText(er);
              msgBox.exec();
          }


}
      // search student in database by residence and display values //
      if(ui->SearchBox->currentText()=="Department"){
          try {
              conn.connectionOpen();

              QSqlQuery* q = new QSqlQuery(conn.Employ);
              bool prepRet = q->prepare("SELECT * FROM Work WHERE DEPARTMENT ='"+input+"'");
              if (!prepRet) {
                qDebug() << q->lastError().text();
                return;
              }
              q->exec();
              if (!q->exec()) {
                qDebug() << q->lastError().text();
                return;
              }
              model->setQuery(*q);
              ui->EmptableView->setModel(model);

              conn.connectionClose();
              qDebug() << "rowCount: " << (model->rowCount());

          } catch (const char * er) {
              qDebug() << er;
              msgBox.setText(er);
              msgBox.exec();
          }


}

}



void Searchdetails::on_HomeButton_clicked()
{

    this->close();

    MainWindow* mainWin = new MainWindow();
    mainWin->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    mainWin->show();
}

