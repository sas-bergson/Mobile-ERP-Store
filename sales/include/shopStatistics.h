#include "shop.h"
#include <vector>
#include <iomanip>
#include <ios>
#include <algorithm>

class ShopStatistic{
  private: 
  vector <Shop> shops;

  public:

  ShopStatistic();
  ~ShopStatistic();
  void instantiate_data();
  void print_sytsem();
  void sorting_listOfShops_in_order_of_highest_income();


};