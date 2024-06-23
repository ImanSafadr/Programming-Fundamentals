#include<iostream>
using namespace std;


void select(int size,int arr[]);


int main()
{
	int size=10;
	int arr[size]={1,5,45,34,98,12,4,56,-3,10};
	
	select(size,arr);
	
	return 0;
}
void select(int size,int arr[])
{
	for(int i=0;i<size-1;i++){
     int small=i;
		for(int j=i;j<size;j++){
	    if(arr[small]<arr[j]){
	    	small=j;
		}
	}
	if(small!=i){
		int temp=arr[small];
				arr[small]=arr[i];
				arr[i]=temp;
}}
for(int i=0;i<size;i++){
cout<<"the values after sorting are "<<arr[i]<<endl;
}
}

