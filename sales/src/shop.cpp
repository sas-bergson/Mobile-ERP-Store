#include "../include/shop.h"

Shop::Shop(int shop_id , string shop_name ,  int shop_income , string shop_manager){
  this->shop_id = shop_id;
  this->shop_name = shop_name;
  this->shop_income = shop_income;
  this->shop_manager = shop_manager;
}
Shop::~Shop(){
    // nothong
}
int Shop::get_shop_id(){
  return shop_id;
}
string Shop::get_shop_name(){
  return shop_name;
}
int Shop::get_shop_income(){
  return shop_income;

}
string Shop::get_shop_manager(){
  return shop_manager;
}