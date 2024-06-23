//Question
#include<iostream>
using namespace std;
int main()
{
	const int SIZE=5;
	int arr[SIZE],i;
	for(i=0;i<=SIZE-1;i++){
	cout<<"Enter :";
	cin>>arr[i];
	}
	int even=0,odd=0,arre[SIZE],arro[SIZE];
	for(i=0;i<SIZE;i++){
		if(arr[i]%2==0)
		{
		arre[even]=arr[i];
		even++;
		}
		else
		{
			arro[odd]=arr[i];
			odd++;
		}
	}
	for(i=0;i<even;i++){
	cout<<"Even no array is:"<<arre[i]<<endl;
	}
	for(i=0;i<odd;i++){
	cout<<"Odd no array is:"<<arro[i]<<endl;
	}
	return 0;
}
