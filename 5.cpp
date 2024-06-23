#include<iostream>
using namespace std;
int main()
{
	int no,rev=0,dig;
	cout<<"enter the number";
	cin>>no;
	while(no>0){
	dig=no%10;
	no=no/10;
	rev=rev*10+dig;
}
	cout<<"the result is"<<rev<<endl;
	return 0;
	
}
