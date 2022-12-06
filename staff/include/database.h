/*
BAIMAM BOUKAR JEAN JACQUES
email: baimam.jeanjacque@ictuniversiy.edu.cm
tel: (+237) 690535759
course: Introduction to mobile apps development
instructor: Engr. Daniel Moune
*/

#include<string>
#include<vector>
using namespace std;

// template class of the SQLite Database class
class SQLiteDatabase{
    /*----------DATA ATTRIBUTES--------------*/
    private:
        string name;
    public:
    /*----------CONSTRUCTORS--------------*/
        SQLiteDatabase();


    /*----------MODIFIERS(GETTERS & SETTERS)--------------*/


    /*----------CLASS METHODS--------------*/
        int open_databse(string name);
        int create();
        T fetch();
        vector<T> fetchAll();
        int remove();


     /*----------DESTRUCTORS--------------*/
        ~SQLiteDatabase();
}