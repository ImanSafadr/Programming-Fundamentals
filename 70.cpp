#include<iostream>
using namespace std;

int prime(int a);

int main()
{
	int no;
	cout<<"enter the number ";
	cin>>no;

    if(prime(no)==0)
    cout<<"the number is not a prime number"<<endl;
    	else if(prime(no)==1)
	cout<<"the number is a prime number"<<endl;
	return 0;
}
int prime(int a)
{   int c;
	for(int i=2;i<a/2;i++){
		if(a%i==0)
      c=0;
		else
		c=1;

}
return c;
}
