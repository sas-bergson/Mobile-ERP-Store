// made by NYAAH LARRIEN 
// anyone can use and modify this code
// this code gets array of product and quantity sold a day
// and makes a report to the manager at the end of the day
// this code is not yet complete and much work is still to be done
// no sqlite database connection yet

#include <iostream>
#include <string>
#include "../lib/report.cpp"
#include "../database/src/database.cpp"


using namespace std;

int main(){

    // class objects
    Report sms;
    database sqlite;


    sqlite.create_database();
    sqlite.create_table();
    sqlite.insert_data();
    sms.report_order_number();

    return 0;

}






