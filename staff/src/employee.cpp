#include <sqlite3.h>
#include <sstream>
#include <fstream>
#include "employee.hpp"

Employee::Employee(string name,int32_t age,string  gender,int32_t phone_nbr,string  address):
name(name),age(age),gender(gender),
phone_nbr(phone_nbr),address(address){}

int32_t Employee::get_id(){return this->id;}

int32_t Employee::get_age(){return this->age;}

int32_t Employee::get_phone_nbr(){return this->phone_nbr;}

int32_t Employee::get_job_position_id(){return this->job_position_id;}

string Employee::get_name(){return this->name;}

string Employee::get_gender(){return this->gender;}

string Employee::get_address(){return this->address;}

EmployeeSqlite::EmployeeSqlite(string uri):
uri(uri){}

vector<Employee> EmployeeSqlite::getAllEmployees(){
    vector<Employee> records;
    return records;
}

vector<Employee> EmployeeSqlite::getAllEmployees_by_Job(JobPosition job){
    vector<Employee> records;
    return records;
}
Employee EmployeeSqlite::getEmployee_by_Id(int32_t emp_id){
    Employee emp;
    return emp;
}

int32_t EmployeeSqlite::createEmployee(Employee emp){
    return 0;
}

int32_t EmployeeSqlite::updateEmployee(Employee emp){
     return 0;
}

int32_t EmployeeSqlite::deleteEmployee(Employee emp){
     return 0;
}

EmployeeQtSqlite::EmployeeQtSqlite(string uri):
uri(uri){}

vector<Employee> EmployeeQtSqlite::getAllEmployees(){
    vector<Employee> records;
    return records;
}

vector<Employee> EmployeeQtSqlite::getAllEmployees_by_Job(JobPosition job){
    vector<Employee> records;
    return records;
}
Employee EmployeeQtSqlite::getEmployee_by_Id(int32_t emp_id){
    Employee emp;
    return emp;
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
