#include<iostream>
using namespace std;


void bin(int size,int arr[]);


int main()
{
	int size=10;
	int arr[size]={1,5,45,34,6,12,4,56,-3,10};
	
	bin(size,arr);
	
	return 0;
}
void bin(int size,int arr[])
{
	int no,low=0,high=size-1,mid,found=-1;
	cout<<"enter the number ";
	cin>>no;
	while(low<=high&&found==-1){
		mid=(low+high)/2;
		if(no==arr[mid]){
			found=mid;
		}
		else if(no<arr[mid])
		high=mid-1;
		else
		low=mid+1;
	}
	if(found==-1)
	cout<<"the number was not found "<<endl;
	else
	cout<<"the number was  found "<<found<<endl;
	}
