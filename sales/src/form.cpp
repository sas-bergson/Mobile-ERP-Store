#include <conio.h>
#include "form.h"

/**
 * @brief 
 * 
 */

using namespace std;


/**
 * @brief Get_data method
 * 
 * This method permits the user to fill in the form and has parameters as follows:
     * @param parameter-cust_name holds the customer name.
     * @param parameter-cust_name holds the customer name.
     * @param parameter-cust_phone holds the customer's phone number.
     * @param parameter-prod_name holds the name of the product.
     * @param parameter-product_ID holds the product's ID.
     * @param parameter-quantity holds the quantity of the good bought.
     * @param parameter-category holds the category under which the good falls.
     * @param parameter-unit_p holds the unit price of the good.
     * @param parameter-total It is total cost of the good, it is the product of quantity and unit price.
     * @param parameter-disc holds the discount if there is.
     * @param parameter-amt_paied It is the amount that is to be paied by the customer, it is obtained by subtracting discount from total.
     * @param parameter-date holds the date the recept was isseued.
 */

      void form::get_data(){
        cout << "********************************\n";
        cout << "**       RECEIPT FORM         **\n";
        cout << "********************************\n";
        cout << "\n";
        cout << "Customer name: "; cin >> cust_name;
        cout << "Contact:       "; cin >> cust_phone;
        cout << "Product name   "; cin >> prod_name;
        cout << "Product ID:    "; cin >> prod_ID;
        cout << "Category:      "; cin >> category;
        cout << "Quantity:      "; cin >> quantity;
        cout << "Price:         "; cin >> unit_p;
        total = unit_p * quantity; 
        cout << "Total:         " << total;
        cout << "\nDiscount:      "; cin >> disc; cout << "\n";
        amt_paied = total - disc; cout << "\n";
        cout << "Amount paied:  " << amt_paied; cout << "\n";
        cout << "Date:          "; cin >> date;
      }


/**
 * @brief Destroy the form::form object
 * 
 */
    form::~form(){

      }


/**
 * @brief Show data:
 * 
 * Tis method the recipt.
 * 
 */
      void form::show_data(){
        system("cls");
        cout << "\n\n        RECEIPT    ";
        cout << "\n\n  Customer name:    " << cust_name;
        cout << "\n\n  Contact:          " << cust_phone;
        cout << "\n\n  Product name:     " << prod_name;
        cout << "\n\n  Product ID:       " << prod_ID;
        cout << "\n\n  Category:         " << category;
        cout << "\n\n  Quantity:         " << quantity;
        cout << "\n\n  Amount:           " << total;
        cout << "\n\n  Discount:         " << disc;
        cout << "\n\n  Amount paied:     " << amt_paied;
        cout << "\n\n  Date:             " << date;
        cout << "\n\n   ";
      }
