#include<iostream>
using namespace std;
int main()
{
	int size=5;
	int arr[size];
	for(int w=0;w<size;w++)
	{
		cout<<"enter the number  ";
		cin>>arr[w];
	}
	int temp;
	for(int i=0;i<size-1;i++){
	for(int j=0;j<size-1-i;j++){
	   if(arr[j]>arr[j+1]){
	   temp=arr[j];
	   arr[j]=arr[j+1];
	   arr[j+1]=temp;	
	}}}
	for(int i=0;i<size;i++){
      cout<<"the values after swapping is "<<arr[i]<<endl;		
}
int no,low=0,high=size-1,mid,found=-1;
cout<<"enter search value";
cin>>no;
while(low<=high&&found==-1){
mid=(low+high)/2;
if(no==arr[mid])
found=mid;
else if(no>arr[mid])
low=mid+1;
else
high=mid-1;
}
if(found==-1){
cout<<"the number was not found";
}else
{cout<<"the number was found at "<<found<<endl;
}
	for(int i=0;i<size-1;i++){
    int small=i;
	for(int j=i+1;j<size;j++){
 	  if(arr[small]<arr[j])
     small=j
     ;if(i!=small){
     	temp=arr[i];
	   arr[i]=arr[small];
	   arr[small]=temp;  	      
}}}
for(int i=0;i<size;i++){
      cout<<"the values after  is "<<arr[i]<<endl;	}
	return 0; 
}
