#include<iostream>
#include<math.h>
using namespace std;

void powe(int a,int b);

int main()
{
   	int base,exp;
   	cout<<"enter the base ";
   	cin>>base;
   	cout<<"enter the exponent ";
   	cin>>exp;
	
	powe(base,exp);
	
	return 0;
}
void powe(int a,int b)
{
	int res= pow(a,b);
	cout<<"the value of "<<a<<"to power"<<b<<"is"<<res<<endl;
	
	
}
