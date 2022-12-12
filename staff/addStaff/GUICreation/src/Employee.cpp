/* Implementation of the header file for Employee class
*/
#include "Employee.h"
#include <string>

namespace Employment
{

    //Default cto
    Employee::Employee()
    {
        mSalary = 0;
        mHired = false;
    }

    //Constructor
    Employee::Employee(std::string& lName, std::string& fName,
        std::string& position, int empNumber, double salary, bool hire) :
        EmployeeTraining(lName, fName, position, empNumber)
    {

        mSalary = salary;
        mHired = hire;
    }

    //setters and getters
    double Employee::getSalary() const
    {
        return mSalary;
    }
    const std::string& Employee::getUserName() const
    {
        return mUserName;
    }

    const std::string& Employee::getPassword() const
    {
        return mPassword;
    }

    void Employee::setPayment(double pay)
    {
        mSalary = pay;
    }

    void Employee::setUserName(std::string user)
    {
        mUserName = user;
    }

    void Employee::setPassword(std::string pssw)
    {
        mPassword = pssw;
    }

    bool Employee::isEmployee()
    {
        mHired = true;

        return mHired;
    }

    bool Employee::isFired()
    {
        return mHired;
    }

    //if employee is promoted, his salary will be increased
    void Employee::Promote(int raise)
    {
        Employee::setPayment(Employee::getSalary() + raise);
    }

    //overloaded operators
    std::ostream& operator<<(std::ostream& ostr, const Employee& employee)
        {
            ostr << "Name: " << employee.getFirstName() << "\n" <<
                "Last Name: " << employee.getLastName() << "\n" <<
                "Position: " << employee.getPosition() << "\n" <<
                "Payment: " << employee.getSalary() << "\n" <<
                "Employee Number: " << employee.getEmployeeNumber() << "\n" <<
                "Hire Date: " << employee.getHireDate() << std::endl;

            return ostr;
        }


}
