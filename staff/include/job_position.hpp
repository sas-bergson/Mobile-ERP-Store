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
#ifndef JOBPOSITION_H
#define JOBPOSITION_H

#include <string>
#include <sstream>
#include <vector>

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
        JobPosition(string title, string  working_period, int32_t hourly_rate);
        int32_t get_id();
        int32_t get_hourly_rate();
        string get_title();
        string get_working_period();
};

class JobPositionDAO{
    protected:
        vector<JobPosition> records;
    public:
        virtual vector<JobPosition> getAllJobPositions() = 0;
        virtual JobPosition getlJobPosition_by_Id() = 0;
        virtual JobPosition getlJobPosition_by_Title() = 0;
        virtual int32_t createJobPosition(JobPosition job);
        virtual int32_t updateJobPosition(JobPosition job);
        virtual int32_t deleteJobPosition(JobPosition job);
};

class JobPositionSqlite:JobPositionDAO{
    protected:
        string uri;
    public:
        JobPositionSqlite(string uri);
       virtual vector<JobPosition> getAllJobPositions() = 0;
        virtual JobPosition getlJobPosition_by_Id() = 0;
        virtual JobPosition getlJobPosition_by_Title() = 0;
        virtual int32_t createJobPosition(JobPosition job);
        virtual int32_t updateJobPosition(JobPosition job);
        virtual int32_t deleteJobPosition(JobPosition job);
};

#endif
