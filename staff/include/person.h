#ifndef PERSON.H
#define PERSON.H

#include <string>
#include <vector>


class Person {
    protected:
        int personalID;
        std::string firstName;
        std::string lastName;
        double salary;
        double workingHours;
        double costPerHour;
        int age;
        int salary;
        std::string address;
    public:
        Person();
        Person(int id, std::string fName, std::string lName, double wHours, double cpHour, int ag, int sal, std::string ad);
        
        int Get_PersonalID();
        std::string Get_FirstName();
        std::string Get_LastName();
        double Get_WorkingHour();
        double Get_CostPerHour();
        int Get_age();
        int Get_salary();
        std::string Get_address();

};

class PersonDAO {
    protected:
        std::vector<Person> records;
    public:
        virtual std::vector<Person> getAllPersons() = 0;
        virtual Person getPerson_by_id(int per) = 0;
        virtual int createPerson(Person per) = 0;
        virtual int updatePerson(Person per) = 0;
        virtual int deletePerson(Person per) = 0;  
};


class PersonSqlite:PersonDAO {
    protected:
        std::string uri;
    public:
        PersonSqlite(std::string uri);
        std::vector<Person> getAllPersons();
        Person getPerson_by_id(int per_id);
        int createPerson(Person per);
        int updatePerson(Person per);
        int deletePerson(Person per);  

};

#endif
