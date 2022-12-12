#ifndef EMPLOYMENTDATA_H
#define EMPLOYMENTDATA_H
#include <string>

namespace Employment {
    class EmploymentData {
    public:
        //destructor
        ~EmploymentData() = default;

        //virtual getters functions

        virtual int getEmployeeNumber() const = 0;
        virtual const std::string& getHireDate() const = 0;
        virtual const std::string& getPosition() const = 0;
        virtual const std::string& getFirstName() const = 0;
        virtual const std::string& getLastName() const = 0;



        //virtual setters functions

        virtual void setHireDate(std::string date) = 0;
        virtual void setEmployeeNumber(int number) = 0;
        virtual void setPosition(std::string position) = 0;
        virtual void setFirstName(std::string fName) = 0;
        virtual void setLastName(std::string lName) = 0;






    };

}


#endif // EMPLOYMENTDATA_H
