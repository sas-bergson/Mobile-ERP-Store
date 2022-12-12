#include "sqlite3.h"
#include <string>
#include <stdio.h>
#ifndef DATABASE_H
#define DATABASE_H

using namespace std;

class database{

    public:
    
    sqlite3 *DB;
    char *messaggeError;
    int rc;
    char* query;

    sqlite3_stmt *stmt;


    public:

    database();
    int callback(void* data, int argc, char** argv, char** azColName);
    void create_database();
    void create_table();
    void insert_data();
    int count_select_data(int* date);
    void delet_data();

};

#endif