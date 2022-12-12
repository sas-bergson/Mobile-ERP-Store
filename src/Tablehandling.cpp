#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
	fstream fio; 
	string useless;
 //Table Fields
 //Name
 //Age
 //Gender
 //DoJ
 //qualification
 //Sal
 //Attendance
     fio.open("empl.txt"); 
    // Execute a loop If file successfully Opened 
    fio.seekg(0, ios::end); 
    while (fio) 
	{ 
        string n,ag,g,d,q,s,at; 
        // Taking input acc to field
        cout<<"Enter Name: ";
		getline(cin, n); 
        // Press -1 to exit 
        if (n == "-1") 
            break; 
  		cout<<"Enter Age: ";
		getline(cin, ag); 
 		cout<<"Enter Gender: ";
		getline(cin, g); 
 		cout<<"Enter Date of Registration: ";
  		getline(cin, d); 
 		cout<<"Enter Qualification: ";
  		getline(cin, q); 
 		cout<<"Enter Salary: ";
  		getline(cin, s); 
 		cout<<"Enter Attendance: ";
	  	getline(cin, at); 
  
        // Write line in file 
        fio << n << endl; 
        fio << ag<< endl; 
        fio << g << endl; 
        fio << d << endl; 
        fio << q << endl; 
        fio << s << endl; 
        fio << at<< endl;
		fio << endl;
    } 
  
    // pointer resets
    fio.seekg(0, ios::beg); 
  int c=1,x=0;//counters
        string n[10],ag[10],g[10],d[10],q[10],s[10],at[10]; 
    while (fio) { 
  		if(c==1)
        	getline(fio, n[x]); 
		else if(c==2)
        	getline(fio, ag[x]); 
		else if(c==3)
        	getline(fio, g[x] ); 
		else if(c==4)
        	getline(fio, d[x] ); 
		else if(c==5)
        	getline(fio, q[x] ); 
		else if(c==6)
        	getline(fio, s[x] ); 
		else if(c==7)
        {
			getline(fio, at[x]); 
			getline(fio,useless);
			c=0;
			x++;
		} 
		c++;
	//data is stored in string array acc to file		
    } 
    for(int x=0;x<10;x++)
 	{
 		cout<<n[x]<<endl;;
	} 
    fio.close(); 
return 0;
}
