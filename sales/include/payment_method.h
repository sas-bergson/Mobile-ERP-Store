#ifndef  PAYMENT_H
#define  PAYMENT_H

#include <iostream>
#include <string>

using namespace std;

class Payment{
    private:
        string name;
        int phoneNum;
        float amount;
        int code;
    public:
        string getname();
        int getphoneNum();
        float getamount();
        int getcode();
        void display();    
};
#endif