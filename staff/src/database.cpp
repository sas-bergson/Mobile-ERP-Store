#include <iostream>
#include <sqlite3.h>
#include <string>

#include "database.h"
#include "person.h"

using namespace std;

void connection()
{
	sqlite3* DB;
	int exit = 0;
	exit = sqlite3_open("C:/Users/HP/Documents/GitHub/management/database/test.db", &DB);

	if (exit) {
		std::cerr << "Error open DB " << sqlite3_errmsg(DB) << std::endl;
	}
	else
		std::cout << "Opened Database Successfully!" << std::endl;
	sqlite3_close(DB);
}


void createTable()
{
    sqlite3* DB;
    std::string sql = "CREATE TABLE PERSON("
              "ID INT PRIMARY KEY     NOT NULL, "
                      "NAME           TEXT    NOT NULL, "
                      "SURNAME          TEXT     NOT NULL, "
                      "AGE            INT     NOT NULL, "
                      "ADDRESS        CHAR(50), "
                      "SALARY         REAL );";
    int exit = 0;
    exit = sqlite3_open("C:/Users/HP/Documents/GitHub/management/database/test.db", &DB);
    char* messaggeError;
    exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messaggeError);
 
    if (exit != SQLITE_OK) {
        std::cerr << "Error Create Table" << std::endl;
        sqlite3_free(messaggeError);
    }
    else
        std::cout << "Table created Successfully" << std::endl;
    sqlite3_close(DB);
}




static int callback(void* data, int argc, char** argv, char** azColName)
{
    int i;
    fprintf(stderr, "%s: ", (const char*)data);
  
    for (i = 0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
  
    printf("\n");
}
  

/* void insert()
{
    sqlite3* DB;
    char* messaggeError;
    int exit = sqlite3_open("C:/Users/HP/Documents/GitHub/management/database/test.db", &DB);
    string query = "SELECT * FROM PERSON;";

    cout << "STATE OF TABLE BEFORE INSERT" << endl;

    Person p;

    int id;
    string fname;
    string sname;
    int ag;
    string ad;
    int sal;

    cout << "Enter the users given id" << endl;
    cin >> id;
    cout << "First name" << endl;
    p.Set_FirstName(fname);
    cout << "Second name" << endl;
    p.Set_LastName(sname);
    cout << "Age" << endl;
    p.Set_age(ag);
    cout << "User's Address" << endl;
    p.Set_address(ad);
    cout << "User's salary" << endl;
    p.Set_salary(sal);
   
  
    sqlite3_exec(DB, query.c_str(), callback, NULL, NULL);
  
    string sql("INSERT INTO PERSON VALUES(?, ?, ?, ?, ?, ?)",(id, p.Get_FirstName(), p.Get_LastName(), p.Get_age(), p.Get_address(), p.Get_salary()));
  
    exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messaggeError);
    if (exit != SQLITE_OK) {
        std::cerr << "Error Insert" << std::endl;
        sqlite3_free(messaggeError);
    }
    else
        std::cout << "Records created Successfully!" << std::endl;
        sqlite3_exec(DB, query.c_str(), callback, NULL, NULL);
        sqlite3_close(DB);
}




void select ()
{
    sqlite3* DB;
    int exit = 0;
    exit = sqlite3_open("C:/Users/HP/Documents/GitHub/management/database/test.db", &DB);
    string data("CALLBACK FUNCTION");
 
    string sql("SELECT * FROM PERSON;");
    if (exit) {
        std::cerr << "Error open DB " << sqlite3_errmsg(DB) << std::endl;
    }
    else
        std::cout << "Opened Database Successfully!" << std::endl;
  
    int rc = sqlite3_exec(DB, sql.c_str(), callback, (void*)data.c_str(), NULL);
  
    if (rc != SQLITE_OK)
        cerr << "Error SELECT" << endl;
    else {
        cout << "Operation OK!" << endl;
    }
  
    sqlite3_close(DB);
} */
