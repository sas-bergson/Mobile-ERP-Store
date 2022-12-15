#ifndef ADDEMP_H
#define ADDEMP_H


#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QString>
#include <QDebug>
#include <QSqlError>
#include <QMainWindow>
#include <QPushButton>
#include <QWidget>
#include <QMouseEvent>
#include <QPoint>
#include <QMainWindow>
#include <QtSql>                                // For using the SQL database
#include <QDebug>                               // For using the qDebug function
#include <QFileInfo>                            // For using the function to access the path and database file
#include <QMessageBox>
#include "addatabaseutils.cpp"

namespace Ui {
class AddEmp;
}

class AddEmp : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase Employ;
    // employeeData -> name of the database file where data from here is stored

    void connectionClose()
    // function to close the connection with the database
    {
        Employ.close();
        Employ.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connectionOpen()
    // function to open the connection to the database
    {
        Employ = QSqlDatabase::addDatabase("QSQLITE");                        // add the database into the project
        Employ.setHostName("localhost");
        Employ.setDatabaseName("C:/Users/pc/Desktop/MAX/EMP/android/assets/Employ.db"  );   // sets the database name in the file destintaion

        //Condition  -> for the messages to print when the onnection is made with the database
        if(!Employ.open()){
            qDebug()<<("Database Disconnected ...");
            return false;
        }
        else {
            qDebug()<<("Database Connected ...");
            return true;
        }
        }


public:
    explicit AddEmp(QWidget *parent = nullptr);
    ~AddEmp();

    void connectToDataBase();


     ADDatabaseUtils addDB;

private slots:
    void on_SubButton_clicked();

    void on_BackButton_clicked();

    void on_pushButton_clicked();


private:
    Ui::AddEmp *ui;
};

#endif // ADDEMP_H
