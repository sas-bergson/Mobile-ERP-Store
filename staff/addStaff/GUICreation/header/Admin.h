#ifndef ADMIN_H
#define ADMIN_H
#include <string>
#include "EmploymentData.h"

namespace Employment
{
    class Admin
    {
    private:
        std::string mLogin;
        std::string mPassword;

    public:

        //Default constructor
        Admin() {mLogin = "Admin"; mPassword = "Admin123";}

        //Getters for login and password
        std::string getLogin()
        {
            return mLogin;
        }

        std::string getPassword()
        {
            return mPassword;
        }

        //Setter just for password
        void setPassword(std::string password)
        {
            mPassword = password;
        }




    };



}
#endif // ADMIN_H
