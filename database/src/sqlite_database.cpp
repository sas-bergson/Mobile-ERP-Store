#include <sqlite_database.hpp>
#include <sqlite3.h>
#include <sstream>
#include <fstream>

Sqlite_db::Sqlite_db(){
    this->name = "test_db";
    std::stringstream ss;
    ss <<"file:"<< this->name;
    this->uri= ss.str();
    this->type = SQLite_db;
}
Sqlite_db::Sqlite_db(string name, string  uri, DatabaseType  type){
    this->name = name;
    this->uri = uri;
    this->type = type;
}
Sqlite_db::~Sqlite_db(){}

string Sqlite_db::get_name(){return this->name;}
string Sqlite_db::get_uri(){return this->uri;}
DatabaseType Sqlite_db::get_type(){return this->type;}

int Sqlite_db::create(){
    sqlite3 *db;
    int ret;
    fprintf(stdout, "db.name = %s\ndb.uri = %s\n", this->name.c_str(), this->uri.c_str());
    if (SQLITE_OK != (ret = sqlite3_initialize()))
    {
        fprintf(stdout, "Failed to initialize library: %d\n", ret);
        return ret;
    }
   if(SQLITE_OK != (ret = sqlite3_open(this->name.c_str(), &db))) {
      fprintf(stdout, "Can't open database: %s\n", sqlite3_errmsg(db));
      sqlite3_close(db);
      return ret;
   } 
   fprintf(stdout, "Open database successfull !!!!: %s\n", sqlite3_errmsg(db));
   sqlite3_close(db);
    return SQLITE_OK;
}

int Sqlite_db::drop(){
    sqlite3 *db;
    int ret;
    if (SQLITE_OK != (ret = sqlite3_initialize()))
    {
        fprintf(stderr, "Failed to initialize library: %d\n", ret);
        return ret;
    }
   if(SQLITE_OK != (ret = sqlite3_open(uri.c_str(), &db))) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      sqlite3_close(db);
      return ret;
   } 
   fprintf(stdout, "Open database successfull !!!!: %s\n", sqlite3_errmsg(db));
   sqlite3_close(db);
    return SQLITE_OK;
}