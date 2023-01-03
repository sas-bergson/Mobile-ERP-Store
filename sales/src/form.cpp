#include<conio.h>
#include "../include/form.h"

    using namespace std;

void form::complete_pay()
{
  cout << "Select payment method:\n";
  cout << "1, Dirrect payment\n";
  cout << "2, Orange money\n";
  cout << "3, Mobile money\n";
  cin >> choise;
  switch (choise)
  {
  case 1:
    cout << "Successful";
    break;
  case 2:
    cout << "Still under developement.";
    break;
  case 3:
    cout << "Still under developement.";
    break;
  default:
    cout << "Wrong input.";
  }
}

void form::partial_pay()
{
  cout << "Amount paied:   ";  cin >> amt_paied;
  bal = amt_p - amt_paied;
  cout << "balance:        ""\n" << bal;
  cout << "Select payment method: \n";
  cout << "1, Dirrect payment\n";
  cout << "2, Orange money\n";
  cout << "3, Mobile money\n";
  cin >> choise;
  switch (choise)
  {
  case 1:
    cout << "Successful";
    break;
  case 2:
    cout << "Still under developement.";
    break;
  case 3:
    cout << "Still under developement.";
    break;
  default:
    cout << "Wrong selection.";
  }
}


/**
 * @brief Destroy the form::form object
 *
 */
form::~form()
{
}

/**
 * @brief Show data:
 *
 * Tis method the recipt.
 *
 */
void form::complete_R()
{
  system("cls");
  cout << "\n\n            RECEIPT        ";
  cout << "\n\n  Product name:          " << prod_name;
  cout << "\n\n  Product ID:            " << prod_ID;
  cout << "\n\n  Category:              " << category;
  cout << "\n\n  Quantity:              " << quantity;
  cout << "\n\n  Cost:                  " << total;
  cout << "\n\n  Discount:              " << disc;
  cout << "\n\n  Amount to be paied:    " << amt_p;
  cout << "\n\n  Date:                  " << __DATE__ ; 
  cout << "\n\n  Time:                  " << __TIME__;
  cout << "\n\n   ";
}

void form::partial_R(){
system("cls");
  cout << "\n\n            RECEIPT        ";
  cout << "\n\n  Product name:          " << prod_name;
  cout << "\n\n  Product ID:            " << prod_ID;
  cout << "\n\n  Category:              " << category;
  cout << "\n\n  Quantity:              " << quantity;
  cout << "\n\n  Cost:                  " << total;
  cout << "\n\n  Discount:              " << disc;
  cout << "\n\n  Amount to be paied:    " << amt_p;
  cout << "\n\n  Amount paied:          " << amt_paied;
  cout << "\n\n  balance:               " << bal;
  cout << "\n\n  Date:                  " << __DATE__ ; 
  cout << "\n\n  Time:                  " << __TIME__;
  cout << "\n\n   ";
}

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
  cout << "Product name   ";
  cin >> prod_name;
  cout << "Product ID:    ";
  cin >> prod_ID;
  cout << "Category:      ";
  cin >> category;
  cout << "Unit price:    ";
  cin >> unit_p;
  cout << "Quantity:      ";
  cin >> quantity;
  total = unit_p * quantity;
  cout << "Total cost:    " << total;
  cout << "\nDiscount:      ";   cin >> disc;
  amt_p = total - disc;
  cout << "Amount to pay: " << amt_p;
  cout << "\n";
  cout << "Amont paied completely?\n ";
  cout << "1, yes      2,no\n";
  cin >> status;
  switch (status){
  case 1:
  complete_pay();
  complete_R();
  break;
  case 2:
  partial_pay();
  partial_R();
  break;
  default:
  cout << "Wrong selection.";
  }
}
