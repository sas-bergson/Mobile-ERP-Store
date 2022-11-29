#ifndef SHOP_H
#define sHOP_H

#include <iostream>
#include <string>
using namespace std;
/**
 * @class Shop
 * @brief  This class is use to create an instance of a shop with data needed for the operation in shop statistics.
 * @param shop_id unique identifier tio the shop
 * @param shop_name the given name to the shop
 * @param shop_income the revenue made by the shop 
 * @param shop_manager The name of the person managing the shop
 */

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