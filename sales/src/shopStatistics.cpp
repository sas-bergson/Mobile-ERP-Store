#include "../include/shopStatistics.h"

ShopStatistic::ShopStatistic()
             :shops()
{
    // nothing
}
  ShopStatistic::~ShopStatistic(){
    //nithing
  }
  void ShopStatistic::instantiate_data(){
    shops.insert(shops.begin(),Shop(1, "Brainless" , 890000 , "TATAH"));
    shops.insert(shops.begin(),Shop(2, "Caryam" , 1000000 , "TATAH"));
    shops.insert(shops.begin(),Shop(3, "Dress For All" , 72900000 , "TATAH"));
    shops.insert(shops.begin(),Shop(4, "Market" , 5000000 , "TATAH"));
    shops.insert(shops.begin(),Shop(5, "Niki" , 1000000 , "TATAH"));
    shops.insert(shops.begin(),Shop(6, "Yaya" , 2500000 , "TATAH"));
  }


void ShopStatistic::sorting_listOfShops_in_order_of_highest_income(){
    sort(shops.begin(), shops.end(), 
    []( Shop &shop_a,  Shop &shop_b) -> bool
{ 
    return shop_a.get_shop_income() > shop_b.get_shop_income(); 
});
}


void ShopStatistic::print_sytsem(){
    double malls_income{0};
    for (Shop shop : shops){
    malls_income += shop.get_shop_income();

    
  }

    cout << "Shop ID" << setw(25) << "Shop Name" << setw(25) << "Income(frans)" << setw(25) << "Shop Manager" << endl;

    for (Shop shop : shops){
      double shops_revenue{0};
      shops_revenue = shop.get_shop_income();
     
      double percentage {0};
      percentage = shops_revenue / malls_income * 100;

  
      cout << shop.get_shop_id() << setw(25) << shop.get_shop_name() << setw(25) << shop.get_shop_income()<< setw(25) << shop.get_shop_manager()<< setw(25)<< "Which composed :"<< percentage << "% of the malls income" << endl;
    }
}