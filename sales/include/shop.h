#ifndef SHOP_H
#define sHOP_H

#include <iostream>
#include <string>
using namespace std;


class Shop {
    private: 
    int shop_id;
    string shop_name;
    int shop_income;
    string shop_manager;
    
    public:
    Shop(int shop_id , string shop_name , int shop_income , string shop_manager);
    ~Shop();
    int get_shop_id();
    string get_shop_name();
    int get_shop_income();
    string get_shop_manager();
};

#endif