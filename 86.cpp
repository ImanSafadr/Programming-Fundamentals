#include<iostream>
using namespace std;

struct complex{
	int real;
	int imaginary;	
};
int main()
{
	complex no1,no2;
	cout<<"enter the real number1 ";
	cin>>no1.real;
	cout<<"enter the imaginary number1 ";
	cin>>no1.imaginary;
	cout<<"enter the real number2 ";
	cin>>no2.real;
	cout<<"enter the imaginary number2 ";
	cin>>no2.imaginary;
	
	cout<<"The complex number= "<<no1.real+no2.real<<"+"<<no1.imaginary+no2.imaginary<<"i"<<endl;
	
	
	return 0;
}
