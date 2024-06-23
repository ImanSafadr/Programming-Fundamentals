#include<iostream>
using namespace std;
int main()
{
	int size=5;
	int arr[size];
	for(int v=0;v<size;v++){
		cout<<"enter the array number ";
		cin>>arr[v];
	}int temp;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
			temp=arr[j];	
			arr[j]=arr[j+1];
			arr[j+1]=temp;	
			}}}
			
	for(int i=0;i<size;i++){
		cout<<"the sorted array is"<<arr[i]<<endl;
	}
	int no,mid,low=0,high=size-1,found=-1;
		cout<<"enter the search number ";
		cin>>no;
	while(low<=high&&found==-1){
		mid=(high+low)/2;
		if(no==arr[mid])
		found=mid;
		else if(no>arr[mid]){
			low=mid+1;
		}
		else
		high=mid-1;
	}
	if(found==-1)
	cout<<"the number was not found"<<endl;
	else
	cout<<"the number was  found at  "<<found<<endl;
	
for(int i=0;i<size-1;i++){
	int large=i;
	for(int j=i;j<size;j++){
	if(arr[large]<arr[j])
	large=j;
}
   if(i!=large){
  int temp=arr[i];	
			arr[i]=arr[large];
			arr[large]=temp;	
   	}}
   	for(int i=0;i<size;i++){
   		    cout<<"the values after sorting are "<<arr[i]<<endl;

	   }
	return 0;
}



