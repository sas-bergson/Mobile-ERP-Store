#ifndef DATABASE_H
#define DATABASE_H

#include <QFileInfo>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>


   class DB{
   public:
       DB(const QString& path){
           //Connecting to SQLite Database:
           // C:/Users/LENOVO/Desktop/Class Works/C++ QT/Accounting-App/Mobile-ERP-Store/staff/Staff_Attendance_Management/database/Staff.db
           QSqlDatabase staffDB;
           staffDB = QSqlDatabase::addDatabase("QSQLITE");
           staffDB.setDatabaseName(path);
           if(!staffDB.open()){
               qDebug()<<"Error reaching Database!";
           }else{
               qDebug()<<"Successfully Connected!";
           }
           QSqlQuery query;
       }

   };

#endif // DATABASE_H
