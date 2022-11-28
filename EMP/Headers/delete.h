#ifndef DELETE_H
#define DELETE_H
#include "deldatabaseutils.cpp"

#include <QDialog>

namespace Ui {
class Delete;
}

class Delete : public QDialog
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
        Employ.setDatabaseName("C:/Users/pc/Desktop/SQ/Employ.db");   // sets the database name in the file destintaion

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
    explicit Delete(QWidget *parent = nullptr);
    ~Delete();

   DelDatabaseUtils Utils;

private slots:
    void on_BackB_clicked();

    void on_Load_clicked();

    void on_DeltableView_doubleClicked(const QModelIndex &index);

private:
    Ui::Delete *ui;
};

#endif // DELETE_H
