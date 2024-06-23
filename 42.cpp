#include<iostream>
using namespace std;
int main(){
	int size=5;
	int arr1[size],arr2[size], temp[size];
	for(int n=0;n<size;n++){
	cout<<"enter value for 1arr";	
		cin>>arr1[n];
	cout<<"enter value for 2arr";	
		cin>>arr2[n];
		
	}

	for(int i=0;i<size;i++){
		
	for(int j=0;j<size;j++){
	
		if(arr1[i]==arr2[j])
		
	   temp[size]=arr1[j];
	   	cout<<"the common number is"<<temp[size]<<endl;	
	   }
	
	}
//cout<<"the common number is"<<temp[size]<<endl;		
	
	return 0;
}
