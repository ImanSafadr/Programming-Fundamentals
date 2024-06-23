#include<iostream>
using namespace std;
int main()
{
	int size=10;
    int sum=0,lesser=0;
	float av;	
	int arr[size];
	for(int n=0;n<size;n++){
	cout<<"enter the arr";
    cin>>arr[n];
	}
	for(int i=0;i<size;i++){
		sum=sum+arr[i];		
	av=sum/size;	
	}

        for(int j=0;j<size;j++){
		if(arr[j]<av){
		lesser=lesser+arr[j];	
			
}
	}
	
		cout<<"the lesser numbers are"<<lesser<<endl;
return 0;
}
