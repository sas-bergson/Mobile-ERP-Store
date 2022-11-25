////////////////////////////////////////////////////////////
//
// Copyright (c) 2022
// Daniel Moune Computer Systems, Inc.
//
// Permission to use, copy, modify, distribute and sell this software
// and its documentation for any purpose is hereby granted without fee,
// provided that the above copyright notice appear in all copies and
// that both that copyright notice and this permission notice appear
// in supporting documentation.  Engr Daniel Moune makes no
// representations about the suitability of this software for any
// purpose.  It is provided "as is" without express or implied warranty.
//
////////////////////////////////////////////////////////////
#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <sstream>
#include <vector>

using namespace std;

enum DatabaseType{
    SQLite_db,
    MySql_db,
    PostGreSql_db
};

enum FieldType{
    Integer,
    Blob,
    Text,
    Numeric
};

enum ConstraintType{
    not_null,
    auto_increment,
    primary_key,
    unique
};

enum QueryType{
    Create,
    Select,
    Insert,
    Update,
    Delete
};

////////////////////////////////////////////////////////////
/// \brief The Database class is an abstract class supposed to encapsulate management of SQL based database systems.
///
/// This class represents database systems using SQL as definition and manipulation language.
/// The class can be used as model for Object-Relational-Mapping in an MVC architecture
/// The currently supported database systems are
///    + Sqlite
///    + MySql,
///    + PostGreSql
///
/// Database abstract class provides the following services
///     + create     -- creates the database in the DB management systems
///     + drop       -- drops the database in the DB management systems
///
////////////////////////////////////////////////////////////
class Database{
        protected:
            string name;
            string  uri;
            DatabaseType  type;
        public:
            virtual string get_uri() = 0;
            virtual string get_name() = 0;
            virtual DatabaseType get_type() = 0;
            virtual int32_t create() = 0;
            virtual int32_t drop() = 0;
};

class Field{
        protected:
            string name;
            istream value;
            FieldType  type;
            vector<ConstraintType> constraints;
            virtual FieldType get_type()=0;
            virtual string get_create_stmt_sql()=0;
        public:
            virtual string get_name()=0;
            virtual char get_char()=0;
            virtual int get_int()=0;
            virtual float get_float()=0;
            virtual string get_string()=0;
};

class Table{
        protected:
            string name;
            vector<Field> fields;
            virtual string get_description_sql()=0;
            virtual string get_create_stmt_sql()=0;
            virtual string get_drop_stmt_sql()=0;
        public:
            virtual string get_name()=0;
            virtual int32_t create() = 0;
            virtual int32_t drop() = 0;
};

class Query{
        protected:
            string db_name;
            string tbl_name;
            string  sql_stmt;
            QueryType  type;
            virtual string get_sql_stmt() = 0;
        public:
            virtual string get_db_name() = 0;
            virtual string get_tbl_name() = 0;
            virtual QueryType get_type() = 0;
            virtual int32_t execute() = 0;
};

#endif
