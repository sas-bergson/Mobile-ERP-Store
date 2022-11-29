#include "../include/shop.h"
/**
 * @brief Construct a new Shop:: Shop object
 * 
 * @param shop_id 
 * @param shop_name 
 * @param shop_income 
 * @param shop_manager 
 */
Shop::Shop(int shop_id , string shop_name ,  int shop_income , string shop_manager){
  this->shop_id = shop_id;
  this->shop_name = shop_name;
  this->shop_income = shop_income;
  this->shop_manager = shop_manager;
}
/**
 * @brief Destroy the Shop:: Shop object
 * 
 */
Shop::~Shop(){
    // nothong
}/**
 * @brief used to get shop_id
 * 
 * @return int 
 */
int Shop::get_shop_id(){
  return shop_id;
}
/**
 * @brief  used to get the shop_name
 * 
 * @return string 
 */
string Shop::get_shop_name(){
  return shop_name;
}
/**
 * @brief used to get the shops revenue
 * 
 * @return int 
 */
int Shop::get_shop_income(){
  return shop_income;

}
/**
 * @brief used to get the shops manager name
 * 
 * @return string 
 */
string Shop::get_shop_manager(){
  return shop_manager;
}