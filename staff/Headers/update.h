#ifndef UPDATE_H
#define UPDATE_H


#include <QDialog>
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
#include "updatabaseutils.cpp"

namespace Ui {
class Update;
}

class Update : public QDialog
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
    explicit Update(QWidget *parent = nullptr);
    ~Update();

    UpDatabaseUtils dUtils;

    void connectToDataBase();

private slots:
    void on_Back_clicked();



    void on_UpButton_clicked();

    void on_Ref_clicked();


    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_UptableView_activated(const QModelIndex &index);

private:
    Ui::Update *ui;
};

#endif // UPDATE_H
