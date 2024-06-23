#include<iostream>
using namespace std;
int main()
{int no;
bool prime=true;
cout<<"enter the number";
cin>>no;
for(int i=2;(i<=no/2);i++)
{
    if(no%i==0){
	prime=false;
	break;
}
}
if(prime==true)
cout<<"the number is prime";
else
cout<<"the number is not prime";

return 0;
}
