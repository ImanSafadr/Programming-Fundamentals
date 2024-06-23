#include<iostream>
using namespace std;
int main()
{
int size=5;
int arr1[size],arr2[size];

for(int i=0;i<size;i++)	{
	
	cout<<"enter the value of arr1[i]";
	cin>>arr1[i];
	}
	
	for(int j=0;j<size;j++){
		arr2[j]=arr1[j]*2;
	
	cout<<"the value is"<<arr2[j]<<endl;
	}
	
	
	
	return 0;
}
