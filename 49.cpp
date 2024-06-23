#include<iostream>
using namespace std;
int main()
{
	const int size=10;
	int arr[size],start=0,end=9,mid,num;
	for(int i=0;i<=size;i++)
	{cout<<"enter the value";
	cin>>arr[i];
	}
	cout<<"enter the number";
	cin>>num;
	while(start<=end)
	mid=start+end/2;
	{
		if(arr[mid]==num)
		mid=num;
		else if (arr[mid]<num)
		end=num-1;
		else 
		start=num+1;
	}
	
	
	return 0;
}
