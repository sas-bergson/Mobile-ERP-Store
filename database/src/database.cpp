#include "../include/database.h"
#include "../include/sqlite3.h"
#include <cstring>
#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;


database::database(){
    if(sqlite3_open("Store_db", &DB)){
        cout<<"database created successfully";
    }else{
        cout<< "failed to create database";
    }
}

void database::create_database(){
    if(sqlite3_open("Store_db", &DB)){
        cout<<"database created successfully";
    }else{
        cout<< "failed to create database";
    }
}

void database::create_table(){
    query = "CREATE TABLE order("
        "order_id  INT(20)  PRIMARY KEY, "
        "user_id  INT(20), "
        "total_item  INT(20), "
        "total_price  INT(20), "
        "date  INT(20) );";

    rc = sqlite3_exec(DB, query.c_str(), NULL, 0, &messaggeError);

    if (rc != SQLITE_OK) {
        cout << "Error Create Table" <<endl;
        sqlite3_free(messaggeError);
    }
    else
        cout << "Table created Successfully" <<endl;
}

int database::callback(void* data, int argc, char** argv, char** azColName){
    
    for (int i = 0; i < argc; i++) {
        cout<< azColName[i]<<": " << argv[i] << endl;
    }
    cout<< endl;
}

void database::insert_data(){

    query = "INSERT INTO order(order_id, user_id, total_item, total_price, date) VALUES (11,1,24,320000,12);";
    rc = sqlite3_exec(DB, query.c_str, callback, 0, &messaggeError);

    query = "INSERT INTO order(order_id, user_id, total_item, total_price, date) VALUES (12,2,9,30000,12);";
    rc = sqlite3_exec(DB, query.c_str, callback, 0, &messaggeError);

    query = "INSERT INTO order(order_id, user_id, total_item, total_price, date) VALUES (13,3,2,2000,13);";
    rc = sqlite3_exec(DB, query.c_str, callback, 0, &messaggeError);

    query = "INSERT INTO order(order_id, user_id, total_item, total_price, date) VALUES (14,4,4,20000,14);";
    rc = sqlite3_exec(DB, query.c_str, callback, 0, &messaggeError);



}


int database::count_select_data(int* date){
    char *query = NULL;
    // build a string using asprint
    asprintf(&query, "SELECT COUNT(order_id) FROM order WHERE date = 12;", date);
    // prepare the query
    sqlite3_prepare(DB, query, strlen(query), &stmt, NULL);
    // test it
    rc = sqlite3_step(stmt);
    // finalize the usage
    sqlite3_finalize(stmt);
    // free up the query space
    free(query);

    return rc;
}
