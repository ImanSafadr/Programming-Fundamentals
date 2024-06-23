#include<iostream>
using namespace std;
int main()
{int no,dig,sum=0;
cout<<"the number is";
cin>>no;
while(no>0) {
	dig=no%10;
	no=no/10;
	sum=sum+dig;
}
cout<<"the result is"<<sum;
return 0;
}

