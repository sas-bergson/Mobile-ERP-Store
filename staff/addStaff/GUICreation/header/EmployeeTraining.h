#ifndef EMPLOYEETRAINING_H
#define EMPLOYEETRAINING_H
#include "EmploymentData.h"
#include <iostream>
#include <string_view>

namespace Employment
{
    class EmployeeTraining: public EmploymentData
    {
    protected:
        std::string mLastName; //Last name
        std::string mFirstName; //first name
        std::string mHireDate;
        std::string mPosition; //when hired or promoted
        int mEmployeeNumber = 0; //must be unique (throws exception)


    public:
        EmployeeTraining(); //Default constructor
        EmployeeTraining(std::string& lName, std::string& fName,
            std::string& position, int empNumber);

        //Destructor
        ~EmployeeTraining() = default;

        //Getters
        int getEmployeeNumber() const override;
        virtual const std::string& getHireDate() const override;
        virtual const std::string& getPosition() const override;
        virtual const std::string& getFirstName() const override;
        virtual const std::string& getLastName() const override;


        //Setters

        virtual void setHireDate(std::string date) override;
        virtual void setEmployeeNumber(int number) override;
        virtual void setPosition(std::string position) override;
        virtual void setFirstName(std::string fName) override;
        virtual void setLastName(std::string lName) override;


        //Exceptions
        //if hire date is not in the valid format
        class InvalidHireDate : public std::exception
        {
        private:
            std::string mMessage;

        public:
            InvalidHireDate(std::string_view myMessage) : mMessage(myMessage) {}
            virtual const char* what() const noexcept override
            {
                return mMessage.c_str();
            }
        };


        class EmpNumberExist {}; //if the employee number already exist





    };

}

#endif // EMPLOYEETRAINING_H
