// This is a program system for tracking sales
// bills from sales.

    #include<iostream>
    #include <fstream>
    #include <string>
    #include <vector>
    #include <iomanip>
	#include <fstream>
	#include <ostream>

	using namespace std;

	//Global variable for total of items entered
	int productsub[100];
	int productsadd[100];
	ofstream file;
	ifstream ifile;
	string filename;
	int out;
	float itemtotal;
	string itemspurchased;
	string date;
	char productname;
	int product_id;
	int itemsnum;
	int totalproducts;
	int defaultamount;
	int newamount;
	int price[9];
	int subproductsnum[100];
	int productsnum[100];
	int newproductsnum[100];
	string products[100] = {" "};

	//function prototypes
	void displaystock(); // 4.
	void defaultstock();
	void items(); // 1.
	void search();
	void exportfile();
	void menu();
	void addproducts();	// 2.
	void deleteproducts(); //5.
	void disstock();
	void viewstock();
	void addmoreproducts();

	int main()
	{
		

		return 0;
	}

	