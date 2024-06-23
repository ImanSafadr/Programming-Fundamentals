#include<iostream>
using namespace std;
int main()
{
	int size=10;
	int arr[size];
	for(int i=0;i<size;i++){
	cout<<"enter the number ";
	cin>>arr[i];}
	
	for(int i=0;i<size-1;i++){
	for(int j=0;j<size-1-i;j++){
	if(arr[j]>arr[j++]){
		swap(arr[j],arr[j++])
	}}}
	for(int j=0;j<size;j++){
		cout<<"the value is"<<arr[j]<<endl;
}

    int no,low=0,high=size-1;mid,found=-1;
    	cout<<"enter the number ";
	cin>>no;
 while(low<=high&&found=-1)
    mid=(high+low)/2;
    if(arr[mid]==no){
    	found=mid;}
    	else if(arr[mid]<no){
    	low=mid+1;
	}else high=mid-1;  
//    now if we have foumd it
if(found==-1)
{cout<<"we have not found it";}
else cout<<"we have  found it"<<got<<endl;

	return 0;
}
