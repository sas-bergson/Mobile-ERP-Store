#include<iostream>
using namespace std;

class OrangeMoney{
    private:
        string name;
        int num;
        int code;
        float amount;
    public:
        string getname(){
            return name;
        } 
        int getnum(){
            return num;
        }
        int getamount(){
            return amount;
        }
        int getcode(){
            return code;
        }   
};
int main(){
    int num, code;
    float amt;
    string name;

    cout<<"\t\t\t Please Enter Customer`s Phone Number: \n";
    cin>>num;

    cout<<"\t\t\t Enter Amount: \n";
    cin>>amt;

    cout<<"\t\t\t Please confirm Name!\n";
    cin>>name;

}