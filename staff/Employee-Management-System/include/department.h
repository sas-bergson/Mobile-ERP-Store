#ifndef DEPARTMENT.H
#define DEPARTMENT.H

#include <map>
#include "person.h"

class Department
{
private:
    map<int, Person> employees;
    int noOfEmployees = 0;
    static int idCounter;

    void displayPerson(Person p);

public:
    Department();
    map<int, Person> Get_employees();
    void AddPerson();
    void addData(string fName, string lName, double wHours, double cpHour);
    void DeletePerson();
    void UpdatePerson();
    void ReportList();
    void ShowAllEmployees();
};

int Department::idCounter = 8921001;



#endif