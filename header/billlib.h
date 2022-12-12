#include<iostream>
#include<string.h>
#include<fstream>
//#include"Producthandling.cpp"
using namespace std;

struct bill{
	int bno;

	string toname;
	string toinfo;

	string foname;
	string foinfo;

	int procode;
	string des;
	double rate;
	int qty;
	double total;
	double dis;
	double cgst;
	double sgst;
	double igst;
	double otchar;
	double ftotal;
	string word;

};

void takein();
void show();
void dispallb();


void takein()
{

    cout<<"=========================================================================\n\t\t\t\tBILL ENTRY\n=========================================================================\n";
	struct bill b;
	fstream fio,pio;
	int s;
g:
cout<<"\t\t\tPlease Select Bill Type\n\t\t\t1.  Bill is from the firm\n\t\t\t2.  Bill is for the firm\n\t\tEnter: ";
cin>>s;
cout<<"=========================================================================\n";
if(s==1)
{
	string useless;
	int pc;
	pio.open("product_shop.txt");
	pio.seekg(0,ios::beg);

	fio.open("bill_to.txt");
	fio.seekg(0,ios::end);
	cout<<"\t\t\tEnter Bill no.: ";
	cin>>b.bno;
fio<<b.bno<<endl;
	cout<<"\t\t\tName of Drawee: ";
	getline(cin, b.toname);
	getline(cin, b.toname);

fio<<b.toname<<endl;
	cout<<"\t\t\tContact info of Drawee : ";
	getline(cin, b.toinfo);
fio<<b.toinfo<<endl;
ag:
	cout<<"\t\t\tProduct Code: ";
	cin>>b.procode;


	while(!pio.eof() )
	{
		pio>>pc;
		if(b.procode==pc)
		{
		    //cout<<"100"<<endl;
		    fio<<b.procode<<endl;
            getline(pio,b.des);
			getline(pio,b.des);
			fio<<b.des<<endl;//name of product
						cout<<"\t\tProduct name:"<<b.des<<endl;
			pio>>b.rate;
			fio<<b.rate<<endl;//rate of product
						cout<<"\t\tRate: "<<b.rate<<endl;
			getline(pio,useless);//skiping some file lines
			getline(pio,useless);//skiping some file lines
			pio>>b.cgst;
			fio<<b.cgst<<endl;//cgst of product
						cout<<"\t\tCGST: "<<b.cgst<<endl;
			pio>>b.sgst;
			fio<<b.sgst<<endl;//sgst of product
						cout<<"\t\tSGST: "<<b.sgst<<endl;
			pio>>b.igst;
			fio<<b.igst<<endl;//igst of product
						cout<<"\t\tIGST: "<<b.igst<<endl;
			goto fd;
			//break;
		}
		else
		{
			for(int x=0;x<=7;x++)
			{
				getline(pio,useless);
			}
		}
	}
pio.seekg(0,ios::beg);
goto ag;
fd:
	cout<<"\t\t\tProduct Quantity: ";
	cin>>b.qty;
fio<<b.qty<<endl;
	b.total=b.qty*b.rate;
	cout<<"\t\t\tProduct Total: "<<b.total<<endl;
fio<<b.total<<endl;
	cout<<"\t\t\tDiscount: ";
	cin>>b.dis;
fio<<b.dis<<endl;
	cout<<"\t\t\tService & Other Charges: ";
	cin>>b.otchar;
fio<<b.otchar<<endl;
cout<<"_________________________________________________________________________\n";
cout<<"\t\tSelect the option for tax:\n\t\t1.  Local bill\n\t\t2.  State outside bill\n\tInput: ";
int sel;
cin>>sel;
cout<<"_________________________________________________________________________\n";
if(sel==1)
{
	b.ftotal=b.total+b.total*(b.cgst/100)+b.total*(b.sgst/100)- b.dis+b.otchar;
}
else if(sel==2)
{
	b.ftotal=b.total+b.total*(b.igst/100)- b.dis+b.otchar;
}
	cout<<"\t\t\tTotal amt: "<<b.ftotal<<endl;
fio<<b.ftotal<<endl;
fio<<endl;


cout<<"=========================================================================\n\t\t\tBILL ADDED\n";
cout<<"=========================================================================\n";
pio.close();
fio.close();
}

else if(s==2)
{

	fio.open("bill_from.txt");
	fio.seekg(0,ios::end);

	cout<<"\t\t\tEnter Bill no.: ";
	cin>>b.bno;
fio<<b.bno<<endl;

	cout<<"\t\t\tName of Drawer: ";
	getline(cin, b.foname);
	getline(cin, b.foname);
fio<<b.foname<<endl;
	cout<<"\t\t\tContact info of Drawer : ";
	getline(cin, b.foinfo);
fio<<b.foinfo<<endl;

cout<<"________________________________________________________________________\n";

	cout<<"\t\t\tProduct Name: ";
	getline(cin,b.des);
fio<<b.procode<<endl;

	cout<<"\t\t\tProduct Quantity: ";
	cin>>b.qty;
fio<<b.qty<<endl;
	cout<<"\t\t\tProduct Rate: ";
	cin>>b.rate;
fio<<b.rate<<endl;
	b.total=b.qty*b.rate;
	cout<<"\t\t\tProduct Total: "<<b.total<<endl;
fio<<b.total<<endl;


	cout<<"\n\t\t\tDiscount: ";
	cin>>b.dis;
fio<<b.dis<<endl;

	cout<<"\t\t\tCGST: ";
	cin>>b.cgst;
fio<<b.cgst<<endl;
	cout<<"\t\t\tSGST: ";
	cin>>b.sgst;
fio<<b.sgst<<endl;
	cout<<"\t\t\tIGST ";
	cin>>b.igst;
fio<<b.igst<<endl;

	cout<<"\t\t\tService & Other Charges: ";
	cin>>b.otchar;
fio<<b.otchar<<endl;
cout<<"_________________________________________________________________________\n";
cout<<"Select the option for tax:\n1.Local bill\n2.State outside bill\nInput:";
int sel;
cin>>sel;
cout<<"_________________________________________________________________________\n";
if(sel==1)
{
	b.ftotal=(b.total+b.total*(b.cgst/100)+b.total*(b.sgst/100))- b.dis+b.otchar;
}
else if(sel==2)
{
	b.ftotal=b.total+b.total*(b.igst/100)- b.dis+b.otchar;
}
fio<<b.ftotal<<endl;
cout<<"Final Total: "<<b.ftotal<<endl;
fio<<endl;
cout<<"=========================================================================\n\t\t\tBILL ADDED\n";
cout<<"=========================================================================\n";

fio.close();

}

else
{
    cout<<"_________________________________________________________________________\n";

	cout<<"Enter Correct input\n";

cout<<"_________________________________________________________________________\n";
	goto g;
}

}


void show()
{
	cout<<"=========================================================================\n\t\t\t\tBILL SEARCH\n=========================================================================\n";
	struct bill b;
	fstream fio;
	int s,bn;
	string useless;
g:
cout<<"\t\t\tPlease Select Bill Type:\n\t\t\t1.  Bill is from the firm\n\t\t\t2.  Bill is for the firm\n\t\tEnter: ";
cin>>s;
cout<<"=========================================================================\n";
cout<<"Enter Bill no: ";
cin>>bn;
cout<<"_________________________________________________________________________\n";

if(s==1)
{
	fio.open("bill_to.txt");
	fio.seekg(0,ios::beg);
	string disp;
	while(fio)
	{
		fio>>b.bno;
		if(b.bno==bn)
		{
			cout<<"\t\t\tBill Number: "<<b.bno<<endl;
			getline(fio,disp);
			getline(fio,disp);
			cout<<"\t\t\tBill To: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tContact Details: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tProduct code: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tProduct Name: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tProduct Rate: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tCGST: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tSGST: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tIGST: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tQuantity: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tTotal: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\n\t\t\tDiscount: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tService and other Charges: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\n\t\t\tFinal Ammount: "<<disp<<endl;
cout<<"_________________________________________________________________________\n";

			break;
		}
		else
		{
			for(int x=0;x<=14;x++)
			{
			//	cout<<useless<<endl;
				getline(fio,useless);
			}
		}
	}
}

else if(s==2)
{
	fio.open("bill_from.txt");
	fio.seekg(0,ios::beg);
	string disp;
	while(fio)
	{
		fio>>b.bno;
		if(b.bno==bn)
		{
			cout<<"\t\t\tBill Number: "<<b.bno<<endl;
			getline(fio,disp);
			getline(fio,disp);
			cout<<"\t\t\tBill From: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tContact Details: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tProduct Name: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tQuantity: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tProduct Rate: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tTotal: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\n\t\t\tDiscount: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tCGST: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tSGST: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tIGST: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tService and other Charges: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\n\t\t\tFinal Ammount: "<<disp<<endl;
cout<<"_________________________________________________________________________\n";
			break;
		}
		else
		{
			for(int x=0;x<=13;x++)
			{
				getline(fio,useless);
			}
		}
	}
}
else
{
    cout<<"_________________________________________________________________________\n";

	cout<<"\t\t\tEnter Correct input\n";
	cout<<"_________________________________________________________________________\n";

	goto g;
}
cout<<"\t\t\tBILL PRINTED\n=========================================================================\n";

}


void dispallb()
{
    cout<<"=========================================================================\n\t\t\t\tSHOW ALL EXISTING BILLS\n=========================================================================\n";

    struct bill b;
	fstream fio,dio;
	int s,bn;
	string useless;
g:
cout<<"\t\t\tPlease Select Bill Type:\n\t\t\t1.  Bill is from the firm\n\t\t\t2.  Bill is for the firm\n\t\tEnter: ";
cin>>s;
cout<<"=========================================================================\n";
if(s==1)
{
	fio.open("bill_to.txt");
	fio.seekg(0,ios::beg);
	string disp;
	while(fio)
	{

			getline(fio,disp);
			if(disp=="")
            {
                break;
            }
            cout<<"\t\t\tBill No: "<<disp<<endl;
            cout<<"_________________________________________________________________________\n";

			getline(fio,disp);
			cout<<"\t\t\tBill To: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tContact Details: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\n\t\t\tProduct code: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tProduct Name: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tProduct Rate: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tCGST: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tSGST: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tIGST: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tQuantity: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tTotal: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\n\t\t\tDiscount: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tService and other Charges: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\n\t\t\tFinal Ammount: "<<disp<<endl;
			cout<<endl;
cout<<"_________________________________________________________________________\n";

			getline(fio,disp);
	}
fio.close();
}

else if(s==2)
{
	dio.open("bill_from.txt");
	dio.seekg(0,ios::beg);
	string disp;
	while(dio)
	{
	//	fio>>b.bno;
//			cout<<"Found "<<b.bno<<endl;

			getline(dio,disp);
			if(disp=="")
            {
                break;
            }

            cout<<"\t\t\tBill No: "<<disp<<endl;
			cout<<"_________________________________________________________________________\n";

			getline(dio,disp);
			cout<<"\t\t\tBill From: "<<disp<<endl;
			getline(dio,disp);
			cout<<"\t\t\tContact Details: "<<disp<<endl;
			getline(dio,disp);
			cout<<"\t\t\tProduct Name: "<<disp<<endl;
			getline(dio,disp);
			cout<<"\t\t\tQuantity: "<<disp<<endl;
			getline(dio,disp);
			cout<<"\t\t\tProduct Rate: "<<disp<<endl;
			getline(dio,disp);
			cout<<"\t\t\tTotal: "<<disp<<endl;
			getline(dio,disp);
			cout<<"\n\t\t\tDiscount: "<<disp<<endl;
			getline(dio,disp);
			cout<<"\t\t\tCGST: "<<disp<<endl;
			getline(dio,disp);
			cout<<"\t\t\tSGST: "<<disp<<endl;
			getline(dio,disp);
			cout<<"\t\t\tIGST: "<<disp<<endl;
			getline(dio,disp);
			cout<<"\t\t\tService and other Charges: "<<disp<<endl;
			getline(dio,disp);
			cout<<"\n\t\t\tFinal Ammount: "<<disp<<endl;
			cout<<endl;
cout<<"_________________________________________________________________________\n";

			getline(dio,disp);
	}
dio.close();
}
else
{
	cout<<"\t\t\tEnter Correct input\n";
cout<<"_________________________________________________________________________\n";
	goto g;
}
cout<<"=========================================================================\n\t\t\tALL BILLS PRINTED\n";
cout<<"=========================================================================\n";

}
