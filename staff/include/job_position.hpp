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
# pragma once
#ifndef JOBPOSITION_H
#define JOBPOSITION_H

#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <sqlite3.h>

#include "callback.hpp"

using namespace std;

////////////////////////////////////////////////////////////
/// \brief The JobPosition class is designed to encapsulate management of JobPosition records in the database.
///
/// This class represents an JobPosition record in the TABLE of Job Positions in the database
/// The class can be used as model for Object-Relational-Mapping in an MVC architecture
///
////////////////////////////////////////////////////////////
class JobPosition{
    protected:
        int32_t id;
        int32_t hourly_rate;
        string title;
        string  working_period;
    public:
        JobPosition();
        JobPosition(int id, const char* title, const char*  working_period, int hourly_rate);
        JobPosition(int32_t id, string title, string  working_period, int32_t hourly_rate);
        JobPosition(char** azCols);
        JobPosition(const JobPosition& job);
        int32_t get_id();
        int32_t get_hourly_rate();
        string get_title();
        string get_working_period();
        bool operator==(const JobPosition &obj);
        friend std::ostream &operator << (std::ostream &os, const JobPosition &obj);
};
////////////////////////////////////////////////////////////
/// \brief The JobPositionDAO class is designed to encapsulate management of Job Positions records in the database.
///
/// This class represents a Job Position Data Access Object
/// The class can be used for providing and high level API for accessing various data sources in an MVC architecture
///
/// JobPositionDAO class provides the following services:
///     + getAllJobPositions               -- collects all JobPositions records from the database and returns them as a list
///     + getJobPosition_by_Id           -- collects a single JobPosition record in the database and returns an JobPosition Object
///     + createTableJobPosition       -- creates the JobPosition table in the database
///     + createJobPosition                -- drops the JobPosition table in the database
///     + createJobPosition                -- creates a single JobPosition record in the database from an JobPosition Object
///     + updateJobPosition               -- updates a single JobPosition record in the database from an JobPosition Object
///     + deleteJobPosition                -- deletes a single JobPosition record in the database from an JobPosition Object
///
////////////////////////////////////////////////////////////
class JobPositionDAO{
    public:
        virtual bool tableExists()=0;
        virtual bool tableContains(JobPosition job_p)=0;
        virtual int32_t createTable() = 0;
        virtual int32_t dropTable() = 0;
        virtual int32_t getAllJobPositions(vector<JobPosition>* job_p_v) = 0;
        virtual int32_t getJobPosition_by_Id(int32_t job_id, JobPosition* job_p) = 0;
        virtual int32_t createJobPosition(JobPosition job_p)=0;
        virtual int32_t updateJobPosition(JobPosition job_p)=0;
        virtual int32_t deleteJobPosition(JobPosition job_p)=0;
};

class JobPositionSqlite:JobPositionDAO{
    protected:
        string uri;
    public:
        bool tableExists();
        bool tableContains(JobPosition job_p);
        int32_t createTable();
        int32_t dropTable();
        JobPositionSqlite(string uri);
        int32_t getAllJobPositions(vector<JobPosition>* job_p_v);
        int32_t getJobPosition_by_Id(int32_t job_id, JobPosition* job_p);
        int32_t createJobPosition(JobPosition job_p);
        int32_t updateJobPosition(JobPosition job_p);
        int32_t deleteJobPosition(JobPosition job_p);
};

class JobPositionQtSqlite:JobPositionDAO{
    protected:
        string uri;
    public:
        bool tableExists();
        bool tableContains(JobPosition job_p);
        int32_t createTable();
        int32_t dropTable();
        JobPositionQtSqlite(string uri);
        int32_t getAllJobPositions(vector<JobPosition>* job_p_v);
        int32_t getJobPosition_by_Id(int32_t job_id, JobPosition* job_p);
        int32_t createJobPosition(JobPosition job_p);
        int32_t updateJobPosition(JobPosition job_p);
        int32_t deleteJobPosition(JobPosition job_p);
};

#endif
