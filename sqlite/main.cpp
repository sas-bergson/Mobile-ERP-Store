// #include <stdio.h>
// #include "sqlite3.h"
// #include <iostream>
// #include <string>
// using namespace std;

// static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
//    int i;
//    for(i = 0; i<argc; i++) {
//       printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
//    }
//    cout<<"\n";
//    return 0;
// }


// int main(int argc, char* argv[]) {
//    sqlite3 *db;
//    char *zErrMsg = 0;
//    int rc;
//    char *sql;
//    char *nameOfTable;
   

//    /* Open database */
//    rc = sqlite3_open("test.db", &db);
   
//    if( rc ) {
//       fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
//       return(0);
//    } else {
//       fprintf(stdout, "Opened database successfully\n");
//    }

//    /* Create SQL statement */
//    cout << "what do you want to do: 1 create table, 2 read a table, 3 insert to table, 4 delete table";
//    int choice = 0;
//    cin >> choice;
//    if(choice == 1){
//    sql = "CREATE TABLE  bon ("   \
   
//       "ID INT PRIMARY KEY     NOT NULL," \
//       "NAME           TEXT    NOT NULL," \
//       "AGE            INT     NOT NULL," \
//       "ADDRESS        CHAR(50)," \
//       "SALARY         REAL );";
     
//    }
//    else if (choice == 2){
//       sql = "SELECT * from bon";
//    }
//    else if (choice == 3){
//       sql = "INSERT INTO bon (ID,NAME,AGE,ADDRESS,SALARY) "  
//          "VALUES (1, 'Varun', 20, 'India', 20000.00 ); " 
//          "INSERT INTO bon (ID,NAME,AGE,ADDRESS,SALARY) "  
//          "VALUES (2, 'John', 25, 'America', 15000.00 ); "     
//          "INSERT INTO bon (ID,NAME,AGE,ADDRESS,SALARY)" 
//          "VALUES (3, 'Jack', 23, 'England', 20000.00 );" 
//          "INSERT INTO bon (ID,NAME,AGE,ADDRESS,SALARY)" 
//          "VALUES (4, 'Bruce', 25, 'France ', 65000.00 );";
//    }
   
   
//    //Create a table

   


//    /* Execute SQL statement */
//    rc = sqlite3_exec(db, sql, callback,  (void*)data, &zErrMsg);
   
//    if( rc != SQLITE_OK ){
//       fprintf(stderr, "SQL error: %s\n", zErrMsg);
//       sqlite3_free(zErrMsg);
//    } else {
//       fprintf(stdout, "Table created successfully\n");
//    }
//    sqlite3_close(db);
//    return 0;
// }
// #include <iostream.h>
#include <stdlib.h>
#include "sqlite3.h" 
#include <iostream>
using namespace std;
static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      cout << "\n" << azColName[i] <<": " << argv[i] ? argv[i] : "NULL";
   }
   cout<<"\n";
   return 0;
}

int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   char *sql;
   bool keepon = true;
   string option = "no option";
   while (keepon)
   {
   
   
   
   /* Open database */
   rc = sqlite3_open("test.db", &db);
   
   if( rc ) {
      cout<<"Can't open database:"<<sqlite3_errmsg(db)<<"\n";
      return(0);
   } else {
      cout<<"Opened database successfully\n";
   }

   int choice = 0;
   cout << "what do you wish to do 1: create table, 2: read element of table, 3: insert in table, 4: update in table, 5: remove from table, 0: exit \n";
   cin >> choice;
   
   if(choice == 1){
 sql = "CREATE TABLE COMPANY("  
      "ID INT PRIMARY KEY     NOT NULL," 
      "NAME           TEXT    ," 
      "AGE            INT     ," 
      "ADDRESS        CHAR(50)," 
      "SALARY         REAL );";
   }
   else if (choice == 3)
   {
      /* Create SQL statement */
    sql = "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) "  
         "VALUES (1, 'Varun', 20, 'India', 20000.00 ); " 
         "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) "  
         "VALUES (2, 'John', 25, 'America', 15000.00 ); "     
         "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY)" 
         "VALUES (3, 'Jack', 23, 'England', 20000.00 );" 
         "INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY)" 
         "VALUES (4, 'Bruce', 25, 'France ', 65000.00 );";
         option = "database created";
   }

   else if (choice == 2)
   {
        sql = "SELECT * from COMPANY";
        option = "selected";
   }

   else if (choice == 4)
   {
         sql = "UPDATE COMPANY set SALARY = 85000.00 where ID=1; " 
         "SELECT * from COMPANY";
         option = "updated successfully";

   }

   else if (choice == 5)
   {
         sql = "DELETE from COMPANY where ID=2; " 
         "SELECT * from COMPANY";
         option = "deleted successfully";
   }

 
   else{
      cout << "no appropriate choice was selected";
      option = "acia";
   }

   

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   
   if( rc != SQLITE_OK ){
      cout<<"SQL error:"<<zErrMsg<<"\n";
      sqlite3_free(zErrMsg);
   } else {
      cout <<option <<"\n";
   }
   sqlite3_close(db);
   }
   return 0;
}