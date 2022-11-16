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
class SQLite_db: public Database{
        public:
            SQLite_db();
            ////////////////////////////////////////////////////////////
            /// \brief Parameterized constructor.
            ///
            /// This constructor initialize the database using the following parameters
            ///
            /// \param name   name of one of the database
            /// \param uri   location of the database in the system
            /// \param DatabaseType   this is the type of the database (default value is Sqlite_db)
            ///
            ////////////////////////////////////////////////////////////
            SQLite_db(string name, string  uri, DatabaseType  type=Sqlite_db);
            ~SQLite_db();
};

class IntegerField: public Field{
        public:
            IntegerField();
            IntegerField(string name, FieldType type = Integer);
            ~IntegerField();
};

class TextField: public Field{
        public:
            TextField();
            TextField(string name, FieldType type = Text);
            ~TextField();
};

class NumericField: public Field{
        public:
            NumericField();
            NumericField(string name, FieldType type = Text);
            ~NumericField();
};

#endif
