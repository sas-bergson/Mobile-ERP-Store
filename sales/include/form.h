#include <iostream>

using namespace std;

/**
 * @brief Thz class form that permits the user to enter data into the form
 * 
 */

class form{
    /**
     * @brief The class's atributes that are made private, that is they can't be accessed from outside the class.
     * 
     */
    private:
      string cust_name;
      string cust_phone;
      string prod_name;
      string prod_ID;
      int quantity;
      string category;
      float unit_p;
      float total;
      float disc;
      float amt_paied;
      string date;

    public:

      form() = default;
      ~form();
      void get_data();
      void show_data();
};
