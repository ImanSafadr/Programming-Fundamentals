#include<iostream>
using namespace std;
int main()
{ 
   int max,min,diff;
   int size=10;
   int arr[size];
	for(int n=0;n<size;n++){
	cout<<"enter the arr";
    cin>>arr[n];
	}	
	max=min=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	diff=max-min;
	cout<<"the difference between them is"<<diff<<endl;
	
	return 0;
}
