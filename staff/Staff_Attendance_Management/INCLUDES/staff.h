#ifndef STAFF_H
#define STAFF_H

#include <QFileInfo>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include "database.h"


class Staff{
public:
    int id;
    QString email, name, role, address;
    //Actualise the database needed:
    Staff(const QString& path){
        //initialize Database:
        DB myDB(path);
    }
    bool existStaff(const QString& email){
        //Checks if Staff is already enrolled
        QSqlQuery query;
        query.prepare("SELECT Email FROM Employee WHERE Email=(:Email)");
        query.bindValue(":Email", email);
        if(query.exec()){
            if(query.next()){
                return true;
            }else{
                return false;
            }
        }else{
           qDebug()<<"Error occured: "<<query.lastError();
            return false;
        }

    }

    bool enrollStaff(const QString& name, const QString& email, const QString& address, const QString& role){
        //Staff enroll method:
        bool cntrl = true;
        if(cntrl == true){
            QSqlQuery query;
            query.prepare("INSERT INTO Employee(Name,Email,Address,Role) VALUES(:Name,:Email,:Address,:Role)");
            query.bindValue(":Name",name);
            query.bindValue(":Email",email);
            query.bindValue(":Address",address);
            query.bindValue(":Role",role);
            bool result = query.exec();
            if(result){
                qDebug()<<"Successfully Inserted Values!";
                return true;
            }else{
                qDebug()<<"Error: "<<query.lastError();
                return false;
            }
        }else{
            qDebug()<<"Sorry This Staff is already enrolled!!";
            return false;
        }

    }
    bool removeStaff(QString email){
        //Check if the staff is enrolled before removing his/her record:
        bool cntl = true;
        if(cntl == true){
            QSqlQuery query;
            //Delete the Staff's record:
            query.prepare("DELETE FROM Employee WHERE Email=(:Email)");
            query.bindValue(":Email", email);
            if(query.exec()){
                 qDebug()<<"Staff Successfully removed";
                 return true;
             }else{
                qDebug()<<"Error: "<<query.lastError();
                return false;
            }
        }else{
            qDebug()<<"Sorry, this staff is not enrolled in the system!";
            return false;
        }
    }

};

#endif //STAFF_H
