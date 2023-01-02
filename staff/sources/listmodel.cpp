#include "headers/listmodel.h"
#include <QLabel>
#include <QSqlRecord>
#include <headers/database.h>

ListModel::ListModel(QObject *parent) :
    QSqlQueryModel(parent)
{
    this->updateModel();

}

// Modelden veri elde etme yöntemi
// Method of obtaining data from the model
QVariant ListModel::data(const QModelIndex & index, int role) const {

    // Sayı rolüne göre sütun numarasını tanımlayın
    // Define column number by number role
    int columnId = role - Qt::UserRole - 1;
//    qDebug()<<"User Role"<< Qt::UserRole;
//    qDebug()<<"Column Id:"<< columnId;
//    qDebug()<<"Role:"<< role;


    // Column id kullanarak dizi oluşturma
    // Creating array using column id
    QModelIndex modelIndex = this->index(index.row(), columnId);
//    qDebug()<<"Index:"<< index;

    return QSqlQueryModel::data(modelIndex, Qt::DisplayRole);
}



QHash<int, QByteArray> ListModel::roleNames() const  {

    QHash<int, QByteArray> roles;
      roles[IdRole] = "id";
      roles[NameRole] = "name";
      roles[DepartmentRole] = "department";
      roles[GenderRole] = "gender";
      roles[Job_positionRole] = "job_position";
      return roles;
}

// Yöntem, veri modeli gösterimindeki tabloları günceller
//The method updates the tables in the data model representation
void ListModel::updateModel()
{
    
   
     this->setQuery("SELECT id, " TABLE_NAME ", " TABLE_DEPARTMENT ", " TABLE_GENDER" , " TABLE_JOB_POSITION" FROM " TABLE);


}




void ListModel::updateData()
{
     
}
// Veri görünümü modelinde satırın kimliğini alma
// Getting the id of the row in the data view model


int ListModel::getId(int row)
{
    return this->data(this->index(row, 0), IdRole).toInt();
}

//Seçilen Id değerine göre verileri yazdırma
//Printing data based on selected Id value


QString ListModel::getName(int row)
{
    return this->data(this->index(row, 0), NameRole).toString();
}

QString ListModel::getDepartment(int row)
{
   return this->data(this->index(row, 0), DepartmentRole).toString();
}


QString ListModel::getGender(int row)
{
    return this->data(this->index(row, 0), GenderRole).toString();
}

QString ListModel::getJob_position(int row)
{
    return this->data(this->index(row, 0), Job_positionRole).toString();
}





















