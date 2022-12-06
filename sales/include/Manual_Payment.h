#ifndef MANUAL_PAYMENT_H
#define MANUAL_PAYMENT_H

#include<iostream>
#include<string>


using namespace std;

class Manual_Payment
{
private:
    /* data */
    string Cus_name;
    string Cus_number;
    string Product_type;
    int amount;
public:
    Manual_Payment();
    
    string getCus_name();
    string getCus_number();
    string getProoduct_type();
    
    int getAmount();
    void setAmount();
    void setCus_name();
    void setCus_number();
    void setProduct_type();

};
#endif //MANUAL_PAYMENT_H
