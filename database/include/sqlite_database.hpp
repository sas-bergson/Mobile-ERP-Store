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
#ifndef SQLITE_DATABASE_H
#define SQLITE_DATABASE_H

#include <database.hpp>
using namespace std;

////////////////////////////////////////////////////////////
/// \brief The Database class encapsulates management of SQLite databases.
///
/// This class represents Sqlite databases
///
/// SQLiteDatabase abstract class provides the following services
///     + create     -- creates the database in the DB management systems
///     + drop       -- drops the database in the DB management systems
///
////////////////////////////////////////////////////////////
class Sqlite_db: public Database{
        public:
            ////////////////////////////////////////////////////////////
            /// \brief default constructor.
            ////////////////////////////////////////////////////////////
            Sqlite_db();
            ////////////////////////////////////////////////////////////
            /// \brief Parameterized constructor.
            ///
            /// \param name   name of one of the database
            /// \param uri   location of the database in the system
            /// \param DatabaseType   this is the type of the database (default value is Sqlite_db)
            ////////////////////////////////////////////////////////////
            Sqlite_db(string name, string  uri, DatabaseType  type=SQLite_db);
            ////////////////////////////////////////////////////////////
            /// \brief destructor.
            ////////////////////////////////////////////////////////////
            ~Sqlite_db();
             virtual string get_uri();
            virtual string get_name();
            virtual DatabaseType get_type();
            virtual int32_t create();
            virtual int32_t drop();
};

class IntegerField: public Field{
        public:
            ////////////////////////////////////////////////////////////
            /// \brief default constructor.
            ////////////////////////////////////////////////////////////
            IntegerField();
            ////////////////////////////////////////////////////////////
            /// \brief Parameterized constructor.
            ///
            /// \param name   name of one of the database
            /// \param FieldType   this is the type of the database (default value is Integer)
            ////////////////////////////////////////////////////////////
            IntegerField(string name, FieldType type = Integer);
            ////////////////////////////////////////////////////////////
            /// \brief destructor.
            ////////////////////////////////////////////////////////////
            ~IntegerField();
};

class TextField: public Field{
        public:
            ////////////////////////////////////////////////////////////
            /// \brief default constructor.
            ////////////////////////////////////////////////////////////
            TextField();
             ////////////////////////////////////////////////////////////
            /// \brief Parameterized constructor.
            ///
            /// \param name   name of one of the database
            /// \param FieldType   this is the type of the database (default value is Text)
            ////////////////////////////////////////////////////////////
            TextField(string name, FieldType type = Text);
            ////////////////////////////////////////////////////////////
            /// \brief destructor.
            ////////////////////////////////////////////////////////////
            ~TextField();
};

class NumericField: public Field{
        public:
            ////////////////////////////////////////////////////////////
            /// \brief default constructor.
            ////////////////////////////////////////////////////////////
            NumericField();
             ////////////////////////////////////////////////////////////
            /// \brief Parameterized constructor.
            ///
            /// \param name   name of one of the database
            /// \param FieldType   this is the type of the database (default value is Numeric)
            ////////////////////////////////////////////////////////////
            NumericField(string name, FieldType type = Numeric);
            ////////////////////////////////////////////////////////////
            /// \brief destructor.
            ////////////////////////////////////////////////////////////
            ~NumericField();
};

class BlobField: public Field{
        public:
            ////////////////////////////////////////////////////////////
            /// \brief default constructor.
            ////////////////////////////////////////////////////////////
            BlobField();
             ////////////////////////////////////////////////////////////
            /// \brief Parameterized constructor.
            ///
            /// \param name   name of one of the database
            /// \param FieldType   this is the type of the database (default value is Blob)
            ////////////////////////////////////////////////////////////
            BlobField(string name, FieldType type = Blob);
            ////////////////////////////////////////////////////////////
            /// \brief destructor.
            ////////////////////////////////////////////////////////////
            ~BlobField();
};

class SqliteTable: public Table{
        public:
            ////////////////////////////////////////////////////////////
            /// \brief default constructor.
            ////////////////////////////////////////////////////////////
            SqliteTable();
             ////////////////////////////////////////////////////////////
            /// \brief Parameterized constructor.
            ///
            /// \param name   name of one of the database
            ////////////////////////////////////////////////////////////
            SqliteTable(string name);
            ////////////////////////////////////////////////////////////
            /// \brief destructor.
            ////////////////////////////////////////////////////////////
            ~SqliteTable();
};

#endif
