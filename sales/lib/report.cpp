
#include "../include/report.h"
#include <string>
#include <iostream>
#include <ctime>
#include "../database/include/sqlite3.h"
#include "../include/database.cpp"

using namespace std;

void Report::report_order_number(){

    // current date/time according to system
    time_t now =time(0);

    tm *ltm = localtime(&now);
 
    count = database::count_select_data(ltm->tm_mday)
    cout<< count << " orders were made today "<<endl; 
   
}


