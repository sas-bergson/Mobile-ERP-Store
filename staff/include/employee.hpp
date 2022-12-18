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
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <sstream>
#include <vector>

#include "job_position.hpp"

using namespace std;

////////////////////////////////////////////////////////////
/// \brief The Employee class is designed to encapsulate management of Employee records in the database.
///
/// This class represents an Employee record in the TABLE of Employees in the database
/// The class can be used as model for Object-Relational-Mapping in an MVC architecture
///
////////////////////////////////////////////////////////////
class Employee{
        protected:
            int32_t id;
            int32_t age;
            int32_t phone_nbr;
            int32_t job_position_id;
            string name;
            string  address;
            string  gender;
        public:
            Employee();
            Employee(int32_t id,string name,int32_t age,string  gender,int32_t phone_nbr,string  address);
            Employee(char** azCols);
            Employee(const Employee& emp);
            int32_t get_id();
            int32_t get_age();
            int32_t get_phone_nbr();
            int32_t get_job_position_id();
            string get_name();
            string get_gender();
            string get_address();
};

////////////////////////////////////////////////////////////
/// \brief The EmployeeDAO class is designed to encapsulate management of Employee records in the database.
///
/// This class represents an Employee Data Access Object
/// The class can be used for providing and high level API for accessing various data sources in an MVC architecture
///
/// EmployeeDAO class provides the following services:
///     + getAllEmployees               -- collects all Employees records from the database and returns them as a list
///     + getEmployees_by_Job      -- collects all Employees having the same job in the database and returns them as a list
///     + getEmployee_by_Id           -- collects a single Employee record in the database and returns an Employee Object
///     + createTableEmployee       -- creates the Employees Table in the database
///     + dropTableEmployee          -- drops the Employees Table in the database
///     + createEmployee                -- creates a single Employee record in the database from an Employee Object
///     + updateEmployee               -- updates a single Employee record in the database from an Employee Object
///     + deleteEmployee                -- deletes a single Employee record in the database from an Employee Object
///
////////////////////////////////////////////////////////////
class EmployeeDAO{
        public:
            virtual int32_t getAllEmployees(vector<Employee>* emp_v) = 0;
            virtual int32_t getEmployees_by_Job(JobPosition job, vector<Employee>* emp_v) = 0;
            virtual int32_t getEmployee_by_Id(int32_t emp_id, Employee* emp_rec) = 0;
            virtual int32_t createTableEmployee() = 0;
            virtual int32_t dropTableEmployee() = 0;
            virtual int32_t createEmployee(Employee emp) = 0;
            virtual int32_t updateEmployee(Employee emp) = 0;
            virtual int32_t deleteEmployee(Employee emp) = 0;
};

////////////////////////////////////////////////////////////
/// \brief The EmployeeSQLite class is an implementation of EmployeeDAO for SQLite databases using default SQLite C++ API.
///
/// This class represents an Employee Data Access Object for SQLite
/// The class can be used for providing and high level API for accessing various SQLite databases in an MVC architecture
///
class EmployeeSqlite:EmployeeDAO{
        protected:
            string uri;
        public:
            EmployeeSqlite(string uri);
            int32_t getAllEmployees(vector<Employee>* emp_v);
            int32_t getEmployees_by_Job(JobPosition job, vector<Employee>* emp_v);
            int32_t getEmployee_by_Id(int32_t emp_id, Employee* emp_rec);
            int32_t createTableEmployee();
            int32_t dropTableEmployee();
            int32_t createEmployee(Employee emp);
            int32_t updateEmployee(Employee emp);
            int32_t deleteEmployee(Employee emp);
};

////////////////////////////////////////////////////////////
/// \brief The EmployeeSQLiteQT class is an implementation of EmployeeDAO for SQLite databases using QT driver.
///
/// This class represents an Employee Data Access Object for SQLite accessed with Qt framework
/// The class can be used for providing and high level API for accessing various SQLite databases in an MVC architecture
///
class EmployeeQtSqlite:EmployeeDAO{
        protected:
            string uri;
        public:
            EmployeeQtSqlite(string uri);
            int32_t getAllEmployees(vector<Employee>* emp_v);
            int32_t getEmployees_by_Job(JobPosition job, vector<Employee>* emp_v);
            int32_t getEmployee_by_Id(int32_t emp_id, Employee* emp_rec);
            int32_t createTableEmployee();
            int32_t dropTableEmployee();
            int32_t createEmployee(Employee emp);
            int32_t updateEmployee(Employee emp);
            int32_t deleteEmployee(Employee emp);
};

#endif
