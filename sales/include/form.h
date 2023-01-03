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
      string prod_name;
      string prod_ID;
      int quantity;
      string category;
      int unit_p;
      int total;
      int disc;
      int amt_paied;
      int status;
      char pay_method;
      string date;
      int bal;
      int amt_p;
      int choise;

    public:

      form() = default;
      ~form();
      void get_data();
      void complete_pay();
      void partial_pay();
      void complete_R();
      void partial_R();
      void fetch_data();
      void save_receipt();
};
