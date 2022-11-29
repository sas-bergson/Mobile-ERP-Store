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
