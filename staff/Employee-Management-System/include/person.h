#ifndef PERSON.H
#define PERSON.H

#include <string>


class Person {
    private:
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
        Person() {} 

        Person(int id, std::string fName, std::string lName, double wHours, double cpHour, int ag, int sal, std::string ad) {
            personalID = id;
            firstName = fName;
            lastName = lName;
            workingHours = wHours;
            costPerHour = cpHour;
            age = ag;
            salary = sal;
            address = ad;

        }
        
        void Set_FirstName(std::string fName) {
            firstName = fName;
        }

        void Set_LastName(std::string lName) {
            lastName = lName;
        } 

        void Set_WorkingHours(double wHours) {
            workingHours = wHours;
        }

        void Set_CostPerHour(double cpHour) {
            costPerHour = cpHour;
        }

        void Set_age(int ag) {
            age = ag;
        }

        void Set_salary(int sal) {
            salary = sal;
        }

        void Set_address(std::string ad){
            address = ad;
        }

        int Get_PersonalID() {
            return personalID;
        }

        std::string Get_FirstName() {
            return firstName;
        }

        std::string Get_LastName() {
            return lastName;
        }

        double Get_SalaryPerYear(){
            return workingHours * costPerHour * 52;
        }

        double Get_WorkingHour() {
            return workingHours;
        }

        double Get_CostPerHour() {
            return costPerHour;
        }

        int Get_age() {
            return age;
        }

        int Get_salary() {
            return salary;
        }

        std::string Get_address() {
            return address;
        }

};

#endif
