#include<iostream>
using namespace std;

struct employe{
	string name;
	int number;
	int hworked;
	int hrate;
	float grosspay;
};

int main()
{
	employe e1;
	cout<<"enter the name of employe1 ";
	cin>>e1.name;
	cout<<"enter the number of employe1 ";
	cin>>e1.number;
	cout<<"enter the hours worked of employe1 ";
	cin>>e1.hworked;
	cout<<"enter the hour rate of employe1 ";
	cin>>e1.hrate;
	
	e1.grosspay=e1.hworked*e1.hrate;
	
	cout<<"the name of employe1 is "<<e1.name<<endl;
	cout<<"the number of employe1 is "<<e1.number<<endl;
	cout<<"the hours worked of employe1 are "<<e1.hworked<<endl;
	cout<<"the hour rate of employe1 is "<<e1.hrate<<endl;
	cout<<"the gross pay is "<<e1.grosspay<<endl;
	
	return 0;
}
