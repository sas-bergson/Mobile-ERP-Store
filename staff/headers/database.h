#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QFile>
#include <QDate>
#include <QDebug>
#include <QImage>
#include <QFileDialog>

/*

  Bütün database işlemleri burda yapılmaktadır. Database ile bağlantı, Database yoksa oluşturulması.
  kapatılması, düzenlenmesi, insert , update ve delete işlemleri burada yapılmaktadır.

  All database operations are done here. Connection with database, creation of database if there is no database.
  Closing, editing, insert, update and delete operations are done here.


*/
#define DATABASE_HOSTNAME   "StaffDb"
#define DATABASE_NAME QString("Staff.db")

#define TABLE                   "Employee" // table ismi degistirilmeli
#define TABLE_ID                "id"
#define TABLE_NAME           "name"
#define TABLE_DEPARTMENT             "department"
#define TABLE_GENDER              "gender"
#define TABLE_JOB_POSITION              "job_position"

#include "QFile"

class DataBase : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool erreurConnexion MEMBER erreurConnexion NOTIFY erreurChanged)
    

public:
    explicit DataBase(QObject *parent = 0);
    ~DataBase();
    


    

private:
    QSqlDatabase    db;
     bool erreurConnexion;

    
    bool copier(QFile &sfile, QFile &dfile);
    bool remplacer(QFile &sfile, QFile &dfile);
    bool estBDPresente(QString BD);
  
private:  
    bool createTable();
    void closeDataBase();

signals:
    void erreurChanged();

public slots:

    bool inserIntoTable(const int id, const QString &name, const QString &department, const QString &gender,const QString &job_position);
    bool update(const int id,const QString &name, const QString &department, const QString &gender,const QString &job_position );
    bool removeRecord(const int id); // tablodan kayıtları kaldırma
    bool select(const int id ); // tablodan kayıtları kaldırma    


};


#endif // DATABASE_H
