#include<iostream>
using namespace std;

void bubble(int size,int arr[]);



int main()
{
	int size=10;
	int arr[size]={1,5,45,34,98,12,4,56,-3,10};
	
	bubble(size,arr);
	
	return 0;
}
void bubble(int size,int arr[])
{
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}}}
				for(int i=0;i<size;i++){
			cout<<"the values after sorting are "<<arr[i]<<endl;
}}
