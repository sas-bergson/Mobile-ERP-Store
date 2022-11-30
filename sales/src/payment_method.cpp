#include "../include/payment_method.h"
string Payment:: getname(){
    return name;
}
int Payment::getphoneNum(){
    return phoneNum;
}
float Payment:: getamount(){
    return amount;
}
int Payment:: getcode(){
    return code;
}
void Payment:: display(){
     int selection;
    
    cout<<"\t\t****************************************\n";
    cout<<"\t\t     PLEASE SELECT PAYMENT METHOD       \n";
    cout<<"\t\t****************************************\n";

    cout<<"\t\t                                          \n";
    cout<<"\t\t            1) ORANGE MONEY               \n";
    cout<<"\t\t            2) MTN MONEY                  \n";
    cout<<"\t\t            3) VISA CARD                  \n";
    cout<<"\t\t                                          \n";

    cout<<"\t\t----------Please Enter Selection----------\n";
    cin>>selection;

    if(selection==1){
        cout<<"\t\t ORANGE MONEY \n";
    }
    else
    if(selection==2){
        cout<<"\t\t MTN MONEY \n";
    }
    else 
    if(selection==3){
    
        cout<<"\t\t VISA CARD \n";
    }
    else
    exit;
}