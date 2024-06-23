#include<iostream>
using namespace std;
int main()
{int no;
 int size=10;
 int arr[size];
	for(int n=0;n<size;n++){
	cout<<"enter the arr";
    cin>>arr[n];
	}	
	cout<<"enter the number";
    cin>>no;
    
    for(int i=0;i<size;i++){
      if(arr[i]==no)
	  cout<<"the number has been located";	
    	
    }
    return 0;
}
