#include<iostream>
using namespace std;
int main()
{
  int sum=-1;
	int arr[10]={54,56,54,74,47,54,89,10,34,76};
	int no;
	cout<<"enter the number";
	cin>>no;
	for(int i=0;i<10;i++){
		if(arr[i]==no)
		sum=i;
		break;
	}
	cout<<"the value is"<<sum<<endl;
	return 0;
}
