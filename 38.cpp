#include<iostream>
using namespace std; 
int main()
{ 
	int size=10;
	int arr[size];
	int odd[size],even[size];
	for(int i=0;i<size;i++){
cout<<"enter the value of arr";
cin>>arr[i];		
	}
	for(int j=0;j<size;j++){
	if(arr[j]%2==0){
	 even[j]=arr[j];
		cout<<"the even value is"<<even[j]<<endl;
}
		else{
		 odd[j]=arr[j];
			cout<<"the odd value is"<<odd[j]<<endl;
	}
	}
	
	
	
	return 0;
}
