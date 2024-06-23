#include<iostream>
using namespace std;

struct complex{
	int real;
	int imaginary;	
};
int main()
{
	complex no;
	cout<<"enter the real number ";
	cin>>no.real;
	cout<<"enter the imaginary number ";
	cin>>no.imaginary;
	
	cout<<"The complex number= "<<no.real<<"+"<<no.imaginary<<"i"<<endl;
	
	
	return 0;
}
