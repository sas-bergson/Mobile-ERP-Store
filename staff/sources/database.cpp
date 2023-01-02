#include "headers/database.h"
#include <QIODevice>
#include <QSqlField>
#include <QSqlDriver>
#include <QDateTime>
#include <QFile>
#include <headers/listmodel.h>
#include <QDebug>
#include <QCoreApplication>



DataBase::DataBase(QObject *parent) : QObject(parent), erreurConnexion(false)
{

 
  db = QSqlDatabase::addDatabase("QSQLITE");

    QFile sfile(QString("assets:/db") + QString("/" + DATABASE_NAME ));
    QFile dfile(QString("./" + DATABASE_NAME ));
    QFile::setPermissions("./" + DATABASE_NAME,QFile::WriteOwner | QFile::ReadOwner | QFile::ExeOwner);
    //remplacer(sfile, dfile);
    copier(sfile, dfile);

    if(estBDPresente(QString("./") + DATABASE_NAME ))
    {
        db.setDatabaseName(QString("./") + DATABASE_NAME );
        db.open();
        erreurConnexion = false;
        QSqlQuery r;
        if(!r.exec("pragma foreign_keys = on;"))
        {
            qDebug() << Q_FUNC_INFO << QString::fromUtf8("Erreur : %1").arg(r.lastError().text());
        }
    }
    else
    {
        erreurConnexion = true;
        qDebug() << Q_FUNC_INFO << QString::fromUtf8("Erreur : impossible d'ouvrir la base de données %1 !").arg(QCoreApplication::applicationDirPath() + DATABASE_NAME );
    }

    emit erreurChanged();


}

DataBase::~DataBase()
{



}
//Belirtilen Database adında bir database yoksa oluşturulacak. Bu işlem için restoreDataBase yönlendir.
//The specified Database will be created if a database does not exist. Redirect restoreDataBase for this action

   





void DataBase::closeDataBase()
{
    db.close();
}

//Veritabanı oluşturur.
//Creates a database
bool DataBase::createTable()
{
    QSqlQuery query;
    if(!query.exec( "CREATE TABLE " TABLE " ("
                            "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                            TABLE_NAME     " VARCHAR(255)    NOT NULL,"
                            TABLE_DEPARTMENT    "  VARCHAR(255) NOT NULL   ,"
                            TABLE_GENDER       " VARCHAR(255)    NOT NULL,"
                            TABLE_JOB_POSITION    " VARCHAR(255)  NOT NULL "
                        " )"
                    )){
        qDebug() << "DataBase: error of create " << TABLE;
        qDebug() << query.lastError().text();
        return false;
    } else {
        return true;
    }
    return false;
}

//Database insert işlemleri
//Database insert operations
bool DataBase::inserIntoTable(const int id, const QString &name, const QString &department, const QString &gender,const QString &job_position)
{


    QSqlQuery query;

    query.prepare(
                "INSERT INTO " TABLE
                " ("
                TABLE_ID ", "
                TABLE_NAME ", "
                TABLE_DEPARTMENT ","
                TABLE_GENDER ","               
                TABLE_JOB_POSITION ") "
                "VALUES (:Id, :Name, :Department, :Gender, :Job_position)");



    query.bindValue(":Id",      id);
    query.bindValue(":Name",      name);
    query.bindValue(":Department",        department);
    query.bindValue(":Gender",       gender);
    query.bindValue(":Job_position",    job_position );


    if(!query.exec()){
        qDebug() << "error insert into " << TABLE;
        qDebug() << query.lastError().text();
        return false;
    } else {
        return true;
    }

    return false;


}
//Update kısmında olan işlemler Insert ile aynıdır.
//Operations in the Update section are the same as Insert

bool DataBase::update(const int id,const QString &name, const QString &department, const QString &gender,const QString &job_position ) // there are not exists params
{
    //fonksiyona gelen tum datalara debug at

    qDebug() << "update() running..";
    QSqlQuery query;
    qDebug() << "id : " << id;
    qDebug()<< "name : "<< name;
    qDebug()<< "department : "<< department;
    qDebug()<< "gender : "<< gender;

    qDebug() << "job_position : " << job_position;

    query.prepare("UPDATE Employee SET NAME=:Name, DEPARTMENT=:Department, GENDER=:Gender,  JOB_POSITION=:Job_position  WHERE id = :ID");
   

    query.bindValue(":ID",          id);
    query.bindValue(":Name",      name);
    query.bindValue(":Department",       department);
    query.bindValue(":Gender",       gender);
    query.bindValue(":Job_position",       job_position);
    


    //query sorgusunun son halini ekrana string yaz

    qDebug() << "query prepared ! "<< query.exec();

    if(!query.exec()){
        qDebug() << "error update " << TABLE;
        qDebug() << "lastError : " << query.lastError().text();
        return false;
    } else {
        return true;

    }
    return false;
}

//Seçilen veriyi silme işlemi
//Delete the selected data
bool DataBase::removeRecord(const int id)
{

    // id degerine debug at

    QSqlQuery query;

    query.prepare("DELETE FROM " TABLE " WHERE id= :ID ;");
    query.bindValue(":ID", id);

    if(!query.exec()){
        qDebug() << "error delete row " << TABLE;
        qDebug() << query.lastError().text();
        return false;
    } else {
        return true;
    }
    return false;

}

bool DataBase::select(const int id) 

{


QSqlQuery query;

    query.prepare("SELECT * FROM " TABLE " WHERE   id= :ID ;");
    
      query.bindValue(":ID", id);

    if(!query.exec()){
        qDebug() << "error delete row " << TABLE;
        qDebug() << query.lastError().text();
        return false;
    } else {
        return true;
    }
    return false;


}
 
 bool DataBase::copier(QFile &sfile, QFile &dfile)
{
    if (sfile.exists())
    {
        return sfile.copy(dfile.fileName());
    }
    return false;
}


bool DataBase::remplacer(QFile &sfile, QFile &dfile)
{
    bool retour;

    // supprime le fichier destination
    if (sfile.exists())
    {
        if (dfile.exists())
        {
            retour = dfile.remove();
            if(!retour)
            {
                return false;
            }
        }
    }

    return copier(sfile, dfile);
}

bool DataBase::estBDPresente(QString BD)
{
    QFile fichier(BD);

    if (fichier.exists())
    {
        return true;
    }
    return false;
}

