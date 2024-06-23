#include<iostream>
using namespace std; 
int main()
{   int size=5;
	int arr[size];
	int max,min;
	
	for(int i=0;i<size;i++){
	cout<<"enter the value of arr1[i]";
	cin>>arr[i];	
		
	max=min=arr[0];	}
		
	for(int j=0;j<size;j++)	{
		if(max<arr[j])
		max=arr[j];
		
		if(min>arr[j])
		min=arr[j];
	}
	cout<<"the min value is"<<min<<endl;
	cout<<"the max value is"<<max<<endl;
	
	
	
	
	return 0;
}
