#include "job_position.hpp"

int callback(void *data, int argc, char **argv, char **azColName){
   //std::cout <<   "Callback function called" << std::endl;
   JobPosition job_p(argv);
   ((vector<JobPosition>*)data)->push_back(job_p);
   return 0;
}

int callback_n(void *data, int argc, char **argv, char **azColName){
   //std::cout <<   "Callback function called" << std::endl;
   ((vector<string>*)data)->push_back(argv[0]);
   return 0;
}

std::ostream &operator << (std::ostream &os, const JobPosition &obj){
			os <<endl << "id = "<< obj.id << endl
                << "title = "<< obj.title << endl
                << "working_period = "<< obj.working_period << endl
                << "hourly_rate = "<< obj.hourly_rate << endl;

			return os; // return the output stream of data to the console
}

bool JobPosition::operator==(const JobPosition &obj){
    if (this->id !=  obj.id) return false;
    if (this->title.compare(obj.title)) return false;
    if (this->working_period.compare(obj.working_period)) return false;
    if (this->hourly_rate != obj.hourly_rate) return false;
	return true;
}

JobPosition::JobPosition(){
    this->id = 0;
    this->title = "unknown";
    this->working_period = "unknown";
    this->hourly_rate = 0;
}

JobPosition::JobPosition(int id, const char* title, const char*  working_period, int hourly_rate){
    this->id = id;
    this->title = title;
    this->working_period = working_period;
    this->hourly_rate = hourly_rate;
}

JobPosition::JobPosition(int32_t id, string title, string  working_period, int32_t hourly_rate){
    this->id = id;
    this->title = title;
    this->working_period = working_period;
    this->hourly_rate = hourly_rate;
}

JobPosition::JobPosition(char** azCols){
    this->id = stoi(azCols[0]);
    this->title = azCols[1];
    this->working_period = azCols[2];
    this->hourly_rate = stoi(azCols[3]);
}

JobPosition::JobPosition(const JobPosition& job_p){
    id  = job_p.id;
    title = job_p.title;
    working_period = job_p.working_period;
    hourly_rate = job_p.hourly_rate;
}

int32_t JobPosition::get_id(){return this->id;}

int32_t JobPosition::get_hourly_rate(){return this->hourly_rate;}

string JobPosition::get_title(){return this->title;}

string JobPosition::get_working_period(){return this->working_period;}

JobPositionSqlite::JobPositionSqlite(string uri):
uri(uri){
    sqlite3 *db;
    int rc;
    rc = sqlite3_open(uri.c_str(), &db);

   if( rc ) {
      std::cerr << "Could not open the database " << endl << sqlite3_errmsg(db) << std::endl;
   } else {
      std::cout <<  "Opened database successfully" << std::endl;
   }
   sqlite3_close(db);
}

bool JobPositionSqlite::tableExists(){
    sqlite3 *db;
    char *zErrMsg=0;
    int rc;
    const char *sql;
    vector<string> namesList;

    sql = "SELECT name \
            FROM sqlite_schema \
            WHERE type ='table' AND name NOT LIKE 'sqlite_%';";
    std::cout << "running sql statement = " << sql << std::endl;

    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, sql,callback_n, (void*) &namesList, &zErrMsg);
        if(rc) {
            std::cerr << "Could not get table names from the database "<< endl << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        cout << "All table names acquired from the database Successfully" << endl;
        for (const auto& name :namesList){
            cout << name <<endl;
        }
        cout <<endl;
        sqlite3_close(db);
        for (const auto& name :namesList){
            if (!name.compare("Job_Position")){
                cout<< "JOB POSITION table found in database............." << endl;
                return true;
            }
        }
        cout<< "JOB POSITION table not found in database............." << endl;
    }
    return false;
}

bool JobPositionSqlite::tableContains(JobPosition job_p){
    sqlite3 *db;
    char *zErrMsg=0;
    int rc;
    vector<JobPosition> job_p_records;
    stringstream ss;

    /* SELECT ALL JOBs SQL statement */
    ss << "SELECT * from 'Job_Position';";
    std::cout << "running sql statement = " << ss.str() << std::endl;
    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, ss.str().c_str(),callback, (void*) &job_p_records, &zErrMsg);
        if(rc) {
            std::cerr << "Could not get JOB POSITION records from the database "<< endl << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        cout << "All JOB POSITION records acquired from the database Successfully" << endl;
        sqlite3_close(db);
        for (const auto& jp :job_p_records){
            if(job_p == jp){
                cout<< "JOB POSITION record was found in database............." << endl;
                return true;
            }
        }
        cout<< "JOB POSITION record was not found in database............." << endl;
    }
    return false;
}

int32_t JobPositionSqlite::createTable(){
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    const char *sql;
     
    /* CREATE Table SQL statement */
    sql = "CREATE TABLE 'Job_Position' (\
	        'id' INTEGER NOT NULL,\
	        'title'	TEXT NOT NULL,\
	        'working_period' TEXT NOT NULL, \
	        'hourly_rate' TEXT NOT NULL,\
	        PRIMARY KEY('id' AUTOINCREMENT)\
        );";
    std::cout << "running sql statement = " << sql << std::endl;

    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
            if( rc ) {
            std::cerr << "Could not create the JOB POSITION Table"<< endl << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        std::cout << "JOB POSITION Table created Successfully" << std::endl;
    }
    sqlite3_close(db);
    return SQLITE_OK;
}

int32_t JobPositionSqlite::dropTable(){
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    const char *sql;
     
    /* DROP Table SQL statement */
    sql = "DROP TABLE 'Job_Position';";
    std::cout << "running sql statement = " << sql << std::endl;

    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
            if( rc ) {
            std::cerr << "Could not drop the JOB POSITION Table"<< endl << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        std::cout << "JOB POSITION Table dropped Successfully" << std::endl;
    }
    sqlite3_close(db);
    return SQLITE_OK;
}


int32_t JobPositionSqlite::getAllJobPositions(vector<JobPosition>* job_p_v){
    sqlite3 *db;
    char *zErrMsg=0;
    int rc;
    stringstream ss;

    /* SELECT ALL JOBs SQL statement */
    ss << "SELECT * from 'Job_Position';";
    std::cout << "running sql statement = " << ss.str() << std::endl;

    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, ss.str().c_str(),callback, (void*) job_p_v, &zErrMsg);
        if(rc) {
            std::cerr << "Could not select JOB POSITION records in the database "<< endl << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        cout << "All JOB POSITION records selected from the database Successfully" << endl;
    }
    sqlite3_close(db);
    return SQLITE_OK;
}

int32_t JobPositionSqlite::getJobPosition_by_Id(int32_t job_id, JobPosition* job_p){
    vector<JobPosition> job_p_records;
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    stringstream ss;

    /* SELECT By ID SQL statement */
    ss << "SELECT * FROM 'Job_Position' "
        << "where id = "<< job_id <<";";
    std::cout << "running sql statement = " << ss.str() << std::endl;

    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, ss.str().c_str(), callback, &job_p_records, &zErrMsg);
            if( rc ) {
            std::cerr << "Could not select JOB POSITION records in the database "<< endl << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        std::cout << "All JOB POSITION records selected from the database Successfully" << std::endl;
    }
    sqlite3_close(db);
    * job_p = job_p_records.front();
    return SQLITE_OK;
}

int32_t JobPositionSqlite::createJobPosition(JobPosition job_p){
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    stringstream ss;

    /* INSERT JOB SQL statement */
    ss << "INSERT INTO 'Job_Position' ('title', 'working_period', 'hourly_rate') VALUES ('"
        << job_p.get_title() << "','" 
        << job_p.get_working_period() << "'," 
        << job_p.get_hourly_rate()<< ");";
    std::cout << "running sql statement = " << ss.str() << std::endl;
    
    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, ss.str().c_str(),NULL, NULL, &zErrMsg);
            if( rc ) {
            std::cerr << "Could not create a new JOB POSITION in the database "<< endl << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        std::cout << "New JOB POSITION record created in the database Successfully" << std::endl;
    }
    sqlite3_close(db);
    return SQLITE_OK;
}

int32_t JobPositionSqlite::updateJobPosition(JobPosition job_p){
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    stringstream ss;

    /* UPDATE JOB  SQL statement */
    ss << "UPDATE  'Job_Position' set 'title' = '" << job_p.get_title() << "',"  
        << "'working_period' = '"<< job_p.get_working_period() << "',"  
        << "'hourly_rate' = "<< job_p.get_hourly_rate()
        << " WHERE id=" << job_p.get_id() << ";";
    std::cout << "running sql statement = " << ss.str() << std::endl;
    
    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, ss.str().c_str(), NULL, NULL, &zErrMsg);
            if( rc ) {
            std::cerr << "Could not update JOB POSITION record in the database " << endl << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        std::cout << "JOB POSITION record updated in the database Successfully" << std::endl;
    }
    sqlite3_close(db);
    return SQLITE_OK;
}

int32_t JobPositionSqlite::deleteJobPosition(JobPosition job_p){
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    stringstream ss;

    /* DELETE  Employee SQL statement */
    ss << "DELETE FROM 'Job_Position' "
        << "WHERE id=" << job_p.get_id() << ";";
    std::cout << "running sql statement = " << ss.str() << std::endl;

    rc = sqlite3_open(uri.c_str(), &db);

    if( rc ) {
        std::cerr << "Could not open the database " << sqlite3_errmsg(db) << std::endl;
        return SQLITE_IOERR;
    } else {
        rc = sqlite3_exec(db, ss.str().c_str(), NULL, NULL, &zErrMsg);
            if( rc ) {
            std::cerr << "Could not delete JOB POSITION records in the database " << endl << sqlite3_errmsg(db) << std::endl;
            return SQLITE_ABORT;
        }
        std::cout << "JOB POSITION record deleted in the database Successfully" << std::endl;
    }
    sqlite3_close(db);
    return SQLITE_OK;
}

bool JobPositionQtSqlite::tableExists(){
    return false;
}

bool JobPositionQtSqlite::tableContains(JobPosition job_p){
    return false;
}

int32_t JobPositionQtSqlite::createTable(){
    return 0;
}

int32_t JobPositionQtSqlite::dropTable()
{
    return 0;
}

JobPositionQtSqlite::JobPositionQtSqlite(string uri):
uri(uri){}

int32_t JobPositionQtSqlite::getAllJobPositions(vector<JobPosition>* job_p_v){
    return 0;
}

int32_t JobPositionQtSqlite::getJobPosition_by_Id(int32_t job_id, JobPosition* job_p){
    return 0;
}

int32_t JobPositionQtSqlite::createJobPosition(JobPosition job_p)
{
    return 0;
}

int32_t JobPositionQtSqlite::updateJobPosition(JobPosition job_p){
     return 0;
}

int32_t JobPositionQtSqlite::deleteJobPosition(JobPosition job_p){
     return 0;
}
