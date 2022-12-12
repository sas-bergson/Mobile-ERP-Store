#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
void newinvo();
void showinvo();
void dispalli();

struct inv{
	int ino;

	string toname;
	string toinfo;

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


void newinvo()
{
struct inv b;
	fstream fio,pio;
	int s;
string useless;
	int pc;
	pio.open("product_shop.txt");
	pio.seekg(0,ios::beg);

	fio.open("invoice.txt");
	fio.seekg(0,ios::end);
cout<<"=========================================================================\n\t\t\t\tCREATE INVOICE\n=========================================================================\n";

	cout<<"\t\t\tEnter Invoice no.: ";
	cin>>b.ino;
fio<<b.ino<<endl;
	cout<<"\t\t\tName of Drawee: ";
	getline(cin, b.toname);
	getline(cin, b.toname);

fio<<b.toname<<endl;
	cout<<"\t\t\tContact info of Drawee : ";
	getline(cin, b.toinfo);
fio<<b.toinfo<<endl;

	cout<<"\t\t\tProduct Code: ";
	cin>>b.procode;
fio<<b.procode<<endl;

	while(pio)
	{
		pio>>pc;
		if(b.procode==pc)
		{
				cout<<"\t\tProduct Code: "<<pc<<endl;

			getline(pio,b.des);
			getline(pio,b.des);
			fio<<b.des<<endl;//name of product
						cout<<"\t\tProduct Name: "<<b.des<<endl;
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

			break;
		}
		else
		{
			for(int x=0;x<=7;x++)
			{
				getline(pio,useless);
			}
		}
	}

	cout<<"\n\t\t\tProduct Quantity: ";
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

cout<<"\t\t\tSelect the option for tax:\n\t\t\t1. Local Invoice\n\t\t\t2. State outside Invoice\n\t\tInput: ";
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
     cout<<"=========================================================================\n";
cout<<"\t\t\tINVOICE SAVED\n";
     cout<<"=========================================================================\n";

pio.close();
fio.close();
}

void showinvo()
{
	struct inv b;
	fstream fio;
	int s,bn;
	string useless;
cout<<"=========================================================================\n\t\t\t\tSEARCH INVOICE\n=========================================================================\n";

	cout<<"\t\t\tEnter Invoice no: ";
cin>>bn;
cout<<"_________________________________________________________________________\n";

	fio.open("invoice.txt");
	fio.seekg(0,ios::beg);
	string disp;
	while(fio)
	{
		fio>>b.ino;
		if(b.ino==bn)
		{
			cout<<"\t\t\tInvoice Number: "<<b.ino<<endl;
			getline(fio,disp);
			getline(fio,disp);
			cout<<"\t\t\tInvoice To: "<<disp<<endl;
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
			cout<<"\n\t\t\tTotal: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tDiscount: "<<disp<<endl;
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
cout<<"\t\t\tINVOICE PRINTED\n";
cout<<"=========================================================================\n";

}

void dispalli()
{
	struct inv b;
	fstream fio,dio;
	int s,bn;
	string useless;

	fio.open("invoice.txt");
	fio.seekg(0,ios::beg);
	string disp;
cout<<"=========================================================================\n\t\t\t\tALL INVOICES\n=========================================================================\n";

	while(fio)
	{

			getline(fio,disp);
			if(disp=="")
            {
                break;
            }
            cout<<"\t\t\tInvoice No: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tInvoice To: "<<disp<<endl;
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
			cout<<"\n\t\t\tTotal: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tDiscount: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\t\t\tService and other Charges: "<<disp<<endl;
			getline(fio,disp);
			cout<<"\n\t\t\tFinal Ammount: "<<disp<<endl;
			cout<<endl;
			getline(fio,disp);
cout<<"_________________________________________________________________________\n";

	}
cout<<"=========================================================================\n";
	cout<<"\t\t\tALL INVOICE PRINTED\n";
cout<<"=========================================================================\n";

fio.close();
}


