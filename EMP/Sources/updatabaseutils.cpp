#include <QtSql/QSqlDatabase>
#include <QString>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QComboBox>
#include <QLabel>
#include <QTableView>
#include <QSqlDatabase>


class UpDatabaseUtils
{
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

    void setEmployeeUpdateDetails(QTableView* UptableView)
    {
        if(Employ.isOpen())
        {
            QSqlQueryModel *querModel = new QSqlQueryModel();
            querModel->setQuery("SELECT EmployeeID, NAME FROM Work;");
            UptableView->setModel(querModel);
        }
    }

    QSqlQuery* showEmployeeDetailsToLineEdit(QString EmployeeID)
    {
        QSqlQuery *qry = new QSqlQuery(Employ);

        qry->prepare("SELECT * FROM Work WHERE EployeeID='" + EmployeeID + "';");
        qry->exec();
        qry->next();

        return qry;
    }
};


