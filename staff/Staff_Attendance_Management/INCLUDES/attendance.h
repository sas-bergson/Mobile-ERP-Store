#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <QFileInfo>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QVariant>
#include <QSqlError>
#include <QDate>
#include "database.h"

   class Attendance{
   public:

        //C:/Users/LENOVO/Desktop/Class Works/C++ QT/Accounting-App/Mobile-ERP-Store/staff/Staff_Attendance_Management/database/Staff.db
       QString email;
       int id;
       QDate date;
       QString start_hour;
       QString close_hour;

       Attendance(const QString& path){
           //initialize database:
           DB myDB(path);
       }
       bool addAttendance(const QString& StartHour, const QString& CloseHour, const QString& ADate, const QString& Email){
           //Checks if staff is enrolled before adding his attendance
           bool cntrl = true;
           if(cntrl == true){
               QSqlQuery query;
               int id;
               query.prepare("SELECT ID FROM Employee WHERE Email = (:Email)");
               query.bindValue(":Email", Email);

               if(query.exec()){
                   int x = query.record().indexOf("ID");
                   if(query.next()){
                       id = query.value(x).toInt();
                   }else{
                       id = NULL;
                       qDebug()<<"This Staff is not currently enrolled!";
                       return false;
                   }
               }else{
                   id = NULL;
                   qDebug()<<"Error checking this staff!";
                   return false;
               }
                qDebug()<<id;
                const int& ID = id;
                QSqlQuery query2;

               query2.prepare("INSERT INTO Attendance(ID,StartHour,CloseHour,ADate,Email) VALUES(:ID,:StartHour,:CloseHour,:ADate,:Email)");
               query2.bindValue(":ID",ID);
               query2.bindValue(":StartHour",StartHour);
               query2.bindValue(":CloseHour",CloseHour);
               query2.bindValue(":ADate",ADate);
               query2.bindValue(":Email",Email);
               bool result = query2.exec();
               if(result){
                   qDebug()<<"Successfully Inserted Values!";
                   return true;
               }else{
                   qDebug()<<"Error: Could not Mark Attendance! "<<query2.lastError();
                   return false;
               }
           }else{
               qDebug()<<"Sorry Attendance not Registered!!";
               return false;
           }
       }

   };

#endif // ATTENDANCE_H
