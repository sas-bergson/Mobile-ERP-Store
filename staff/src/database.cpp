#include<string>
#include<iosream>
#include<vector>
#include "employee.hpp"

SQLiteDatabase::SQLiteDatabase(){

}
SQLiteDatabase::SQLiteDatabase(string db_name){

}
SQLiteDatabase::SQLiteDatabase(string db_name, string db_version){

}
SQLiteDatabase::~SQLiteDatabase(){

}

int SQLiteDatabase::open_database(string db_name){

}
int SQLiteDatabase::insert(Employee data){
}

Employee SQLiteDatabase::fetchByName(string name){

}
Employee SQLiteDatabase::fetchById(int id){

}
vector<Employee> SQLiteDatabase::fetchAll(){

}

int SQLiteDatabase::remove(int id){

}