#include<iostream>
using namespace std;
int main()
{
	int marks[5]={11,22,33,44,55};
	int* p=marks;
	
//	cout<<"the value is"<<p<<endl;
	cout<<"the value is"<<*p<<endl;
	cout<<"the value is"<<*(p+1)<<endl;
	cout<<"the value is"<<*(p+2)<<endl;
	cout<<"the value is"<<*(p+3)<<endl;
	cout<<"the value is"<<*(p+4)<<endl;
	
return 0;
}
