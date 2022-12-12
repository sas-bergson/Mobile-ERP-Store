/*Implementation of Employee header
*/
#include "EmployeeTraining.h"
#include <string>
#include <string_view>

namespace Employment
{

    //Default cto
    EmployeeTraining::EmployeeTraining()
    {
        mLastName = "";
        mFirstName = "";
        mPosition = "";
        mEmployeeNumber = 0;
    }


    //Constructor
    EmployeeTraining::EmployeeTraining(std::string& lName, std::string& fName,
        std::string& position, int empNumber) :
        mLastName(lName), mFirstName(fName), mPosition(position),
        mEmployeeNumber(empNumber)
    {
    }


    //getters and setters
    int EmployeeTraining::getEmployeeNumber() const
    {
        return mEmployeeNumber;
    }

    const std::string& EmployeeTraining::getHireDate() const
    {
        return mHireDate;
    }

    const std::string& EmployeeTraining::getPosition() const
    {
        return mPosition;
    }

    const std::string& EmployeeTraining::getFirstName() const
    {
        return mFirstName;
    }

    const std::string& EmployeeTraining::getLastName() const
    {
        return mLastName;
    }


    //If hire date is not in the right format, throws exception
    void EmployeeTraining::setHireDate(std::string date)
    {
        if (date.length() == 10 && date[2] == '/' && date[5] == '/'
            && isdigit(date[0]) && isdigit(date[1]) &&
            isdigit(date[3]) && isdigit(date[4])
            && isdigit(date[6]) && isdigit(date[7]) && isdigit(date[8]) &&
            isdigit(date[9])) {
            mHireDate = date;
        }
        else {
            throw InvalidHireDate
            ("Invalid date format.\nValid format is: dd/mm/yyyy. \n");
        }
    }

    void EmployeeTraining::setEmployeeNumber(int number)
    {
        mEmployeeNumber = number;
    }

    void EmployeeTraining::setPosition(std::string position)
    {
        mPosition = position;
    }

    void EmployeeTraining::setFirstName(std::string fName)
    {
        mFirstName = fName;
    }

    void EmployeeTraining::setLastName(std::string lName)
    {
        mLastName = lName;
    }






}
