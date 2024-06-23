#include<iostream>
using namespace std;
int main()
{int tem,no,dig,ams=0;
cout<<"enter the number";
cin>>no;
tem=no;
for(int i=1;i<=1;i++)
dig=no%10;
ams=ams+(dig*dig*dig);
no=no/10;
if(tem==ams){
	cout<<"it is an amstrong number";
}else
{cout<<"it is not an amstrong number";
}

return 0;
}
