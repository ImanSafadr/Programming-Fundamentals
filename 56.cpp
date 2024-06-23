#include<iostream>
using namespace std;
void fac(int a);

int main()
{   int num;
	cout<<"enter the number ";
	cin>>num;
	
	fac(num);
	
	return 0;
}
void fac(int a)
{
int factorial=1; 

for(int i=1;i<=a;i++){
	factorial=factorial*i;	
}
cout<<"the factorial value is "<<factorial<<endl;
}
