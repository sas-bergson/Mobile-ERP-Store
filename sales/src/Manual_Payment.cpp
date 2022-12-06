#include "../include/Manual_Payment.h"
#include <conio.h>
// Manual_Payment();

    void setCus_name(std::string Cus_name){
   printf("Enter The Customer Name:");
    scanf("%s", &Cus_name);
}
    string getCus_name(std::string Cus_name){
         return Cus_name;
    }
    void setCus_number(std::string Cus_number){
        printf("Enter The Customer Number:");
        scanf("%s", &Cus_number);
}
    string getCus_number(std::string Cus_number){
         return Cus_number;
    }
    void setProduct_type(std::string Product_type){
        printf("Enter Product type:");
        scanf("%s", &Product_type);
}
    string getProoduct_type(std::string Product_type){
        return Product_type;
    }
    void setAmount(int Amount){
        printf("Enter Amount To Be Payed:");
        scanf("%d", &Amount);
    }
    int getAmount(int Amount){
        return Amount;
    }
