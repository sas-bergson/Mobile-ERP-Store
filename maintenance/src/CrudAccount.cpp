#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Tap_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButtonView_Account_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButtonUpdate_Account_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButtonDelete_Account_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButtonCreate_clicked()
{

    ui->stackedWidget->setCurrentIndex(1);
    QString fullname = ui-> lineEdit_fullname->text();
    QString email = ui-> lineEdit_email->text();
    QString username = ui-> lineEdit_username->text();
    QString password = ui-> lineEdit_password->text();

    if(username == "test" && password == "test" && email == "test" && fullname == "test"){
        QMessageBox::information(this, "Create", "Your account has successfully been created");

    }
    else{
        QMessageBox::warning(this,"Create", "Check Your Entries");
    }
}


void MainWindow::on_pushButtonCreate_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}




void MainWindow::on_textEditUserName_textChanged()
{
    QString textEditUserName = ui->lineEdit_password->displayText();
}


void MainWindow::on_label_4_linkActivated(const QString &link)
{
    QString label_4 = ui-> lineEdit_password->text();
}


void MainWindow::on_pushButton_Settings_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_Cancel_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_Confirm_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

