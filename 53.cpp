#include<iostream>
using namespace std;
int main()
{
//	bubble sort
int size=5;
int arr[size];
for(int w=0;w<size;w++){
	cout<<"enter the array number ";
	cin>>arr[w];
}
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
		for(int i=0;i<size;i++){
		cout<<"vlues after swapping are"<<arr[i]<<endl;	
		}
		
//		binary search

int no,mid,low=0,high=size-1,found=-1;
cout<<"enter the search number";
cin>>no;
while(low<=high&&found==-1){
	
	mid=(low+high)/2;
	if(no==arr[mid])
	found=mid;
	else if(no>arr[mid])
	low=mid+1;
	else
	high=mid-1;}
if(found==-1){
	cout<<"the number was not found";
}else
cout<<"the number "<<no<<" was found at index "<<found<<endl;

//selection sort
int large;
for(int i=0;i<size-1;i++){
	large=i;
		for(int j=i+1;j<size;j++){
	      if(arr[large]<arr[j])
	      large=j;}
	   if(large!=i){
	   	int temp=arr[large];
	   	arr[large]=arr[i];
	   	arr[i]=temp;
	   }}
	   for(int i=0;i<size;i++){
	   	cout<<"vlues after swapping are"<<arr[i]<<endl;	
		}
	   	return 0;
}
