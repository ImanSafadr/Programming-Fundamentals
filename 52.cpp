#include<iostream>
using namespace std;
int main()
{int temp;
	int size=5;
	int arr[size];
	for(int w=0;w<size;w++)
	{
		cout<<"enter the number  ";
		cin>>arr[w];
	}
   int	sl,ss;
	for(int i=0;i<size-1;i++){
		int small=i;
		for(int j=i+1;j<size;j++){
	   if(arr[small]>arr[j])	
		small=j;
		}
		
		if(small!=i){
			temp=arr[i];
			arr[i]=arr[small]
			;arr[small]=temp;
		}}
	for(int i=0;i<size;i++){
	 cout<<"the values after  is "<<arr[i]<<endl;	
}
sl=arr[size-2];
    ss=arr[size-(size-1)];
cout<<"the second largest value  is "<<sl<<endl;
cout<<"the second smallest value  is "<<ss<<endl;

	return 0;
}
