#include "shop.h"
#include <vector>
#include <iomanip>
#include <ios>
#include <algorithm>
/**
 * @class ShopStatsitic
 * @brief This class gives the statitics of the general statistics of a shop and also that of individual shops
 */
class ShopStatistic{
  private:
  vector <Shop> shops;

  public:
  ShopStatistic();
  ~ShopStatistic();
  void instantiate_data();
  void print_sytsem();
  void sorting_listOfShops_in_order_of_highest_income();
  string percentage_composed_income(Shop & shop);
  double malls_income();


};