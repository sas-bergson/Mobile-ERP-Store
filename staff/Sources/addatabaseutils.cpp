#include <QtSql/QSqlDatabase>
#include <QString>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QComboBox>
#include <QLabel>
#include <QTableView>
#include <QSqlDatabase>


class ADDatabaseUtils
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

    QString getLastID()
    {
        QSqlQuery *qry = new QSqlQuery(Employ);

        qry->prepare("SELECT MAX(EmployeeID) FROM Work");
        qry->exec();
        qry->next();

        int lastID = qry->value(0).toInt() + 1;

        return QString::number(lastID);
    }

    QString getTotalDept()
    {
        QSqlQuery *qry = new QSqlQuery(Employ);

        qry->prepare("SELECT COUNT(DISTINCT(department)) FROM company");
        qry->exec();
        qry->next();

        int lastID = qry->value(0).toInt();

        return QString::number(lastID);
    }

    QString getEmployeeID(QString )
    {
        return  getLastID();
    }

    QString getDepartmentShortName(QComboBox* Edep)
    {
        QSqlQuery *qry = new QSqlQuery(Employ);

        qry->prepare("SELECT * FROM Department WHERE Name='" + Edep->currentText() + "';");
        qry->exec();
        qry->next();

        QString x = qry->value(0).toString();

        return x;
    }

  };
