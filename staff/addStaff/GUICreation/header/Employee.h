#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "EmployeeTraining.h"
#include <string>

namespace Employment
{
    class Employee : public EmployeeTraining
    {
    protected:
        std::string mUserName; //will be created by Admin
        std::string mPassword; //will be set by Admin
        double mSalary = 0;
        bool mHired = false;

    public:
        Employee(); //Default constructor
        Employee(std::string& lName, std::string& fName,
            std::string& position, int empNumber, double salary, bool hire);

        //Destructor
        virtual ~Employee() = default;


        //Getters
        virtual double getSalary() const;
        virtual const std::string& getUserName() const;
        virtual const std::string& getPassword() const;

        //Setters
        virtual void setPayment(double pay);
        virtual void setUserName(std::string);
        virtual void setPassword(std::string);


        virtual bool isEmployee();
        virtual bool isFired();
        virtual void Promote(int raise);

    };

    std::ostream& operator<<(std::ostream& ostr, const Employee& employee);

}
#endif // EMPLOYEE_H
