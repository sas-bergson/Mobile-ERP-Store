#include "employee.hpp"

int callback(void *data, int argc, char **argv, char **azColName){
   std::cout << std::endl <<   "Callback function called";
   Employee emp(argv);
   ((vector<Employee>*)data)->push_back(emp);
   return 0;
}

Employee::Employee(int32_t id,string name,int32_t age,string  gender,int32_t phone_nbr,string  address){
    this->id = id;
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->phone_nbr = phone_nbr;
    this->address = address;
}

Employee::Employee(char** azCols){
    this->id =stoi(azCols[0]);
    this->name = azCols[1];
    this->age = stoi(azCols[2]);
    this->gender = azCols[3];
    this->phone_nbr = stoi(azCols[4]);
    this->address = azCols[5];
}

Employee::Employee(const Employee& emp){
    id = emp.id;
    name = emp.name;
    age = emp.age;
    gender = emp.gender;
    phone_nbr = emp.phone_nbr;
    address = emp.address;
}

int32_t Employee::get_id(){return this->id;}

int32_t Employee::get_age(){return this->age;}

int32_t Employee::get_phone_nbr(){return this->phone_nbr;}

int32_t Employee::get_job_position_id(){return this->job_position_id;}

string Employee::get_name(){return this->name;}

string Employee::get_gender(){return this->gender;}

string Employee::get_address(){return this->address;}

EmployeeSqlite::EmployeeSqlite(string uri):
uri(uri){
    sqlite3 *db;
    int rc;
    rc = sqlite3_open(uri.c_str(), &db);

   if( rc ) {
      std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
   } else {
      std::cout <<  "Opened database successfully" << std::endl;
   }
   sqlite3_close(db);
}

int32_t EmployeeSqlite::getAllEmployees(vector<Employee>* emp_v){
    int rc;
    sqlite3 *db;
    char *zErrMsg = 0;
    stringstream ss("");

    /* SELECT ALL  Employee SQL statement */
    ss << "SELECT * FROM 'Employee' ;";
    
    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, ss.str().c_str(), callback, (void*)emp_v, &zErrMsg);
            if( rc ) {
            std::cerr << "Could not select  EMPLOYEEs in the database " << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        std::cout << "All EMPLOYEEs selected from the database Successfully" << std::endl;
    }
    sqlite3_close(db);
    return SQLITE_OK;
}

int32_t EmployeeSqlite::getEmployees_by_Job(JobPosition job, vector<Employee>* emp_v){
   vector<Employee> records;
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    const char *sql;
    stringstream ss("");

    /* SELECT ALL by Job SQL statement */
    ss << "SELECT * FROM 'Employee' "
        << "where job_position_id' = "<< job.get_id() <<";";
    sql = ss.str().c_str();
    
    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, sql, callback, emp_v, &zErrMsg);
            if( rc ) {
            std::cerr << "Could not delete  EMPLOYEE in the database " << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        std::cout << "EMPLOYEE deleted in the database Successfully" << std::endl;
    }
    sqlite3_close(db);
    return SQLITE_OK;
}
int32_t EmployeeSqlite::getEmployee_by_Id(int32_t emp_id, Employee* emp_rec){
    vector<Employee> emp_v;
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    const char *sql;
    stringstream ss("");

    /* SELECT by Id SQL statement */
    ss << "SELECT * FROM 'Employee' "
        << "where id' = "<< emp_id <<";";
    sql = ss.str().c_str();
    
    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, sql, callback, &emp_v, &zErrMsg);
            if( rc ) {
            std::cerr << "Could not select  EMPLOYEEs in the database " << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        std::cout << "EMPLOYEE selected in the database Successfully" << std::endl;
    }
    sqlite3_close(db);
    *emp_rec = emp_v.front();
    return SQLITE_OK;
}

int32_t EmployeeSqlite::createTableEmployee(){
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    const char *sql;
     
    /* CREATE Table SQL statement */
    sql = "CREATE TABLE 'Employee' ( \
	        'id'	INTEGER NOT NULL, \
	        'name'	TEXT NOT NULL, \
	        'phone_number'	INTEGER NOT NULL, \
	        'address'	TEXT, \
	        'age'	INTEGER NOT NULL, \
	        'gender'	TEXT NOT NULL, \
	        'job_position_id'	INTEGER NOT NULL, \
	        PRIMARY KEY('id' AUTOINCREMENT), \
	        FOREIGN KEY('job_position_id') REFERENCES 'Job_Position'('id')\
        );";

        rc = sqlite3_open(uri.c_str(), &db);

        if( rc ) {
            std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
            return SQLITE_IOERR;
        } else {
            rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
             if( rc ) {
                std::cerr << "Could not create the table EMPLOYEE " << sqlite3_errmsg(db) << std::endl;
                return SQLITE_ABORT;
            }
            std::cout << "Table created Successfully" << std::endl;
        }
        sqlite3_close(db);
        return SQLITE_OK;
}

int32_t EmployeeSqlite::dropTableEmployee(){
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    const char *sql;
     
    /* DROP Table SQL statement */
    sql = "DROP TABLE 'Employee';";

    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
            if( rc ) {
            std::cerr << "Could not drop the table EMPLOYEE " << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        std::cout << "Table dropped Successfully" << std::endl;
    }
    sqlite3_close(db);
    return SQLITE_OK;
}

int32_t EmployeeSqlite::createEmployee(Employee emp){
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    const char *sql;
    stringstream ss("");

    /* INSERT  Employee SQL statement */
    ss << "INSERT INTO 'Employee' ('name', 'phone_number', 'address', 'age', 'gender', 'job_position_id') VALUES ('"
        << emp.get_name() << "'," 
        << emp.get_phone_nbr() << ",'" 
        << emp.get_address() << "'," 
        << emp.get_age() << ",'" 
        << emp.get_gender() << "'," 
        << emp.get_job_position_id()<< ");";
    sql = ss.str().c_str();
    
    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
            if( rc ) {
            std::cerr << "Could not add a new  EMPLOYEE in the database " << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        std::cout << "New EMPLOYEE created in the database Successfully" << std::endl;
    }
    sqlite3_close(db);
    return SQLITE_OK;
}

int32_t EmployeeSqlite::updateEmployee(Employee emp){
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    const char *sql;
    stringstream ss("");

    /* UPDATE  Employee SQL statement */
    ss << "UPDATE  'Employee' set 'name' = '" << emp.get_name() << "'," 
        << "'phone_number' = "<<emp.get_phone_nbr() << "," 
        << "'address' = "<< emp.get_address() << "'," 
        << "'age' = "<< emp.get_age() << ",'" 
        << "'gender' = "<< emp.get_gender() << "'," 
        << "'job_position_id' = "<< emp.get_job_position_id()
        << " WHERE id=" << emp.get_id() << ";";
    sql = ss.str().c_str();
    
    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
            if( rc ) {
            std::cerr << "Could not update  EMPLOYEE in the database " << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        std::cout << "EMPLOYEE updated in the database Successfully" << std::endl;
    }
    sqlite3_close(db);
    return SQLITE_OK;
}

int32_t EmployeeSqlite::deleteEmployee(Employee emp){
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    const char *sql;
    stringstream ss("");

    /* DELETE  Employee SQL statement */
    ss << "DELETE FROM 'Employee' "
        << "WHERE id=" << emp.get_id() << ";";
    sql = ss.str().c_str();
    
    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
            if( rc ) {
            std::cerr << "Could not delete  EMPLOYEE in the database " << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        std::cout << "EMPLOYEE deleted in the database Successfully" << std::endl;
    }
    sqlite3_close(db);
    return SQLITE_OK;
}

EmployeeQtSqlite::EmployeeQtSqlite(string uri):
uri(uri){}

int32_t EmployeeQtSqlite::getAllEmployees(vector<Employee>*  emp_v){
    return 0;
}

int32_t EmployeeQtSqlite::getEmployees_by_Job(JobPosition job, vector<Employee>* emp_v){
    return 0;
}

int32_t EmployeeQtSqlite::getEmployee_by_Id(int32_t emp_id, Employee* emp_rec){
    return 0;
}

int32_t EmployeeQtSqlite::createTableEmployee(){
    return 0;
}

int32_t EmployeeQtSqlite::dropTableEmployee(){
    return 0;
}

int32_t EmployeeQtSqlite::createEmployee(Employee emp){
    return 0;
}

int32_t EmployeeQtSqlite::updateEmployee(Employee emp){
     return 0;
}

int32_t EmployeeQtSqlite::deleteEmployee(Employee emp){
     return 0;
}
