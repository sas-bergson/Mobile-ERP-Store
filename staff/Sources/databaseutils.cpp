#include <QtSql/QSqlDatabase>
#include <QString>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QComboBox>
#include <QLabel>
#include <QTableView>
#include <QSqlDatabase>

class DatabaseUtils
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




    QSqlQueryModel* getDepartmentList()
    {
        QSqlQueryModel *model = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery(Employ);

        qry->prepare("SELECT DISTINCT(department) FROM company");

        if(qry->exec())
        {
            model->setQuery(*qry);
            qDebug() << "Sucesss";
        }
        else
        {
            qDebug() << "Failed";
        }

        return model;
    }

    QSqlQueryModel* getDesignationList(QComboBox* dept)
    {
        QSqlQueryModel *model = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery(Employ);

        qry->prepare("SELECT designation FROM company WHERE department='" + dept->currentText() + "';");

        if(qry->exec())
        {
            model->setQuery(*qry);
            qDebug() << "Sucesss";
        }
        else
        {
            qDebug() << "Failed";
        }

        return model;
    }

    QString getLastID()
    {
        QSqlQuery *qry = new QSqlQuery(Employ);

        qry->prepare("SELECT MAX(Employee_ID) FROM employee");
        qry->exec();
        qry->next();

        int lastID = qry->value(0).toInt() + 1;

        return QString::number(lastID);
    }

    QString getTotalEmployee()
    {
        QSqlQuery *qry = new QSqlQuery(Employ);

        qry->prepare("SELECT COUNT(Employee_ID) FROM employee");
        qry->exec();
        qry->next();

        int lastID = qry->value(0).toInt();

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

    QString getTotalDesign()
    {
        QSqlQuery *qry = new QSqlQuery(Employ);

        qry->prepare("SELECT COUNT(DISTINCT(designation)) FROM company");
        qry->exec();
        qry->next();

        int lastID = qry->value(0).toInt();

        return QString::number(lastID);
    }


    QString getEmployeeID(QString dept, QString design)
    {
        return dept + "/" + design + "/" + getLastID();
    }

    QString getDesignationShortName(QComboBox* design)
    {
        QSqlQuery *qry = new QSqlQuery(Employ);

        qry->prepare("SELECT design_short FROM company WHERE designation='" + design->currentText() + "';");
        qry->exec();
        qry->next();

        QString x = qry->value(0).toString();

        return x;
    }

    QString getDepartmentShortName(QComboBox* dept)
    {
        QSqlQuery *qry = new QSqlQuery(Employ);

        qry->prepare("SELECT dept_short FROM company WHERE department='" + dept->currentText() + "';");
        qry->exec();
        qry->next();

        QString x = qry->value(0).toString();

        return x;
    }

    int getSalary(QComboBox* dept, QComboBox* design)
    {
        QSqlQuery *qry = new QSqlQuery(Employ);

        qry->prepare("SELECT salary FROM company WHERE department='" + dept->currentText() + "' AND designation='" +design->currentText() + "';");
        qry->exec();
        qry->next();

        int x = qry->value(0).toInt();

        return x;
    }

    void setEmployeeDetails(QTableView* tableView)
    {
        if(Employ.isOpen())
        {
            QSqlQueryModel *querModel = new QSqlQueryModel();
            querModel->setQuery("SELECT id, name, department, designation, phone, email FROM employee;");
            tableView->setModel(querModel);
        }
    }

    void searchEmployeeDetails(QTableView* searchTableView, QString searchText)
    {
        if(Employ.isOpen())
        {
            QSqlQueryModel *querModel = new QSqlQueryModel();
            querModel->setQuery("SELECT EmployeeID, Name, Department, Phone, Salary  FROM Work WHERE Name LIKE '" + searchText + "%' OR ID LIKE '" + searchText +"%';");
            searchTableView->setModel(querModel);
        }
    }

    void setEmployeeUpdateDetails(QTableView* UptableView)
    {
        if(Employ.isOpen())
        {
            QSqlQueryModel *querModel = new QSqlQueryModel();
            querModel->setQuery("SELECT EmployeeID, Name, Phone FROM Work;");
            UptableView->setModel(querModel);
        }
    }

    QSqlQuery* showEmployeeDetailsToLineEdit(QString id)
    {
        QSqlQuery *qry = new QSqlQuery(Employ);

        qry->prepare("SELECT * FROM Work WHERE id='" + id + "';");
        qry->exec();
        qry->next();

        return qry;
    }

    void deleteEmployeeRecord(QString id)
    {
        QSqlQuery *qry = new QSqlQuery(Employ);

        qry->prepare("DELETE  FROM Work WHERE id='" + id + "';");

        qry->exec();
    }


};
