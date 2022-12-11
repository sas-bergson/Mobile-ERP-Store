#include <sqlite3.h>
#include "person.h"
#include <string>

Person::Person(int id, std::string fName, std::string lName, double wHours, double cpHour, int ag, int sal, std::string ad):
    personalID(id), firstName(fName), lastName(lName), workingHours(wHours), costPerHour(cpHour), age(ag),salary(sal), address(ad){} 

int Person::Get_PersonalID(){
    return this->personalID;
}

std::string Person::Get_FirstName(){
    return this->firstName;
}

std::string Person::Get_LastName(){
    return this->lastName;
}

double Person::Get_WorkingHour(){
    return this->workingHours;
}

double Person::Get_CostPerHour(){
    return this->costPerHour;
}

int Person::Get_age(){
    return this->age;
}

int Person::Get_salary(){
    return this->salary;
}

std::string Person::Get_address(){
    return this->address;
}


PersonSqlite::PersonSqlite(std::string uri):
    uri(uri){}

std::vector<Person> PersonSqlite::getAllPersons(){
    std::vector<Person> records;
    return records;
}

Person PersonSqlite::getPerson_by_id(int per_id){
    Person per;
    return per;
}

int PersonSqlite::createPerson(Person per){
   sqlite3* DB;
    char* messaggeError;
    int exit = sqlite3_open("C:/Users/HP/Documents/GitHub/management/database/test.db", &DB);
    std::string query = "SELECT * FROM PERSON;";

}

int PersonSqlite::updatePerson(Person per){
   
}

int PersonSqlite::deletePerson(Person per){
   
}
           