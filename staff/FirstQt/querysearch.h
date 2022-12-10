#ifndef QUERYSEARCH_H
#define QUERYSEARCH_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QSqlError>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui { class querySearch; }
QT_END_NAMESPACE

class querySearch : public QMainWindow
{
    Q_OBJECT
public:
    QSqlDatabase Staff_Info;
    // employeeData -> name of the database file where data from here is stored

    void connectionClose()
    // function to close the connection with the database
    {
        Staff_Info.close();
        Staff_Info.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connectionOpen()
    // function to open the connection to the database
    {
        Staff_Info = QSqlDatabase::addDatabase("QSQLITE");                        // add the database into the project
        Staff_Info.setHostName("localhost");
        Staff_Info.setDatabaseName("C:/Users/Xavie/Desktop/Store/Staff_Info.db"); // sets the database name in the file destintaion

        //Condition  -> for the messages to print when the onnection is made with the database
        if(!Staff_Info.open()){
            qDebug()<<("Database Disconnected ...");
            return false;
        }
        else {
            qDebug()<<("Database Connected ...");
            return true;
        }
        }


public:
    querySearch(QWidget *parent = nullptr);
    ~querySearch();

private:
    Ui::querySearch *ui;
};
#endif // QUERYSEARCH_H
