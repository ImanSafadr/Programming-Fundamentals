#include<iostream>
using namespace std;
int main()
{int no1,no2,pow=1,i;
cout<<"enter the number";
cin>>no1;
cout<<"enter the number";
cin>>no2;	
	for(i=1;i<=no2;i++)
	pow=pow*no1;
	cout<<"the result is"<<pow;
	return 0;
}
