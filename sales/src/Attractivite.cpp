#include "Attractivite.h"
#include <iostream>
using namespace std;
Attractivite::Attractivite(int k,int m, int n, int o){
	k=passant;
	m=entrant;
	n=s;
	o=d;
}
void Attractivite::infos(){
	int passant;
	cout<<"enter the number of person who pass infront on your store"<<endl;
	cin>>passant;
	cout<<"enter the number of person who enter on your store"<<endl;
	cin>>entrant;
	int entrant, s,d;
	s=entrant/passant;
	d=s*100;
	cout<<"the percentage of attractivity of your store is "<<d<<"%"<<endl;
}
void Attractivite::calcul(){
    cout<<"aurevoir";
}
