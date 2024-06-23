#include <iostream>
using namespace std;

int sum(int a,int b);
void r();
int main()
{
	int num1,num2;
	cout<<"enter the number";
    cin>>num1;
	cout<<"enter the number";
	cin>>num2;
	cout<<"the sum is"<<sum(num1,num2)<<endl;
	r();
	return 0;
}
int sum(int a,int b)
{int c=a+b;
return c;}
void r(){
	cout<<"hello every noew";
}
