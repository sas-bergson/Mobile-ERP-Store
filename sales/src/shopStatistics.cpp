#include "../include/shopStatistics.h"
/**
 * @brief Construct a new Shop Statistic:: Shop Statistic object
 * 
 */
ShopStatistic::ShopStatistic()
             :shops()
{
    // nothing
}
/**
 * @brief Destroy the Shop Statistic:: Shop Statistic object
 * 
 */
  ShopStatistic::~ShopStatistic(){
    //nithing
  }

  /**
   * @brief This function will be used to feych data from the database and instantiate it in the vector
   * But now, test data has been initiated in it.
   * 
   */
  void ShopStatistic::instantiate_data(){
    shops.insert(shops.begin(),Shop(1, "Brainless" , 890000 , "TATAH"));
    shops.insert(shops.begin(),Shop(2, "Caryam" , 1000000 , "TATAH"));
    shops.insert(shops.begin(),Shop(3, "Dress For All" , 72900000 , "TATAH"));
    shops.insert(shops.begin(),Shop(4, "Market" , 5000000 , "TATAH"));
    shops.insert(shops.begin(),Shop(5, "Niki" , 1000000 , "TATAH"));
    shops.insert(shops.begin(),Shop(6, "Yaya" , 2500000 , "TATAH"));
  }

/**
 * @brief This function or method sorts the vector of shops according to amount of revenue generated.
 * 
 */
void ShopStatistic::sorting_listOfShops_in_order_of_highest_income(){
    sort(shops.begin(), shops.end(), 
    []( Shop &shop_a,  Shop &shop_b) -> bool
{ 
    return shop_a.get_shop_income() > shop_b.get_shop_income(); 
});
}
/**
 * @brief Calculates the mall income
 * 
 * @return double 
 */
double ShopStatistic:: malls_income(){
   double malls_income{0};
   for (Shop shop : shops){
    malls_income += shop.get_shop_income();
   }

   return malls_income;
}
/**
 * @brief calculates the percentage composition of shops revenue in malls revenue. This function will be used frp the pi-chart
 * 
 * @param shop 
 * @return string 
 */
string ShopStatistic::percentage_composed_income(Shop & shop){
     double composed_persentage{0};
     string say{"% of mall income"};
     composed_persentage = shop.get_shop_income() / malls_income() * 100;

     return to_string(composed_persentage) + say;
} 


/**
 * @brief This one actually prints 
 * 
 */
void ShopStatistic::print_sytsem(){   
    cout << "Shop ID" << setw(25) << "Shop Name" << setw(25) << "Income(frans)" << setw(25) << "Shop Manager" << endl;

    for (Shop shop : shops){

      cout << shop.get_shop_id() << setw(25) << shop.get_shop_name() << setw(25) << shop.get_shop_income()<< setw(25) << shop.get_shop_manager()<< setw(25)<< "Which composed :"<< percentage_composed_income(shop) << endl;
    }
}