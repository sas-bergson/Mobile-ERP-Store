/*
BAIMAM BOUKAR JEAN JACQUES
email: baimam.jeanjacque@ictuniversiy.edu.cm
tel: (+237) 690535759
course: Introduction to mobile apps development
instructor: Engr. Daniel Moune
*/

#include<string>
#include<vector>
#include "employee.hpp"
using namespace std;

// template class of the SQLite Database class
class SQLiteDatabase{
    /*----------DATA ATTRIBUTES--------------*/
    private:
        string name;
    public:
    /*----------CONSTRUCTORS--------------*/
        SQLiteDatabase();
        SQLiteDatabase(string db_name);
        SQLiteDatabase(string db_name, string db_version)


    /*----------MODIFIERS(GETTERS & SETTERS)--------------*/


    /*----------CLASS METHODS--------------*/
        int open_databse(string db_name);
        int insert(Employee data);
        Employee fetchByName(string name);
        Employee fetchById(int id);
        vector<Employee> fetchAll();
        int remove(int id);
        vector<Employee> search(string query);

     /*----------DESTRUCTORS--------------*/
        ~SQLiteDatabase();
}