#include<iostream>
using namespace std;

void sw(int a,int b);

int main()
{
	int no1,no2;
	cout<<"enter the number ";
	cin>>no1;
	cout<<"enter the number ";
	cin>>no2;
	
	sw(no1,no2);
	
	cout<<"the value of a after swapping is "<<no1<<endl;
	cout<<"the value of b after swapping is"<<no2<<endl;
	
	return 0;
}
void sw(int a,int b)
{
//		cout<<"the value of a before swapping is "<<a<<endl;
//	cout<<"the value of before swapping is"<<b<<endl;

	int temp=a;
	a=b;
	b=temp;
//	cout<<"the value of a after swapping is "<<a<<endl;
//	cout<<"the value of after swapping is"<<b<<endl;
}
