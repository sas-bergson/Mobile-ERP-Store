#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QString>
#include <QDebug>
#include <QSqlError>
#include <QMainWindow>
#include "databaseutils.cpp"
#include <QPushButton>
#include <QWidget>
#include <QMouseEvent>
#include <QPoint>

namespace Ui {
class Search;
}

class Search : public QDialog
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
        Employ.setDatabaseName("C:/Users/pc/Desktop/MAX/EMP/android/assets/Employ.db");   // sets the database name in the file destintaion

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
    explicit Search(QWidget *parent = nullptr);
    ~Search();

    DatabaseUtils dbUtils;

private slots:
    void on_Close_clicked();


    void loadTotalData();



    void on_loadButton_clicked();

private:
    Ui::Search *ui;
};

#endif // SEARCH_H
