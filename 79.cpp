#include<iostream>
using namespace std;
int main()
{
	int size=10;
    int arreven[size];
    int arrodd[size];
    int arr[size]={1,65,8,87,56,34,76,78,34,10};
	
	int even=0,odd=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{arreven[even]=arr[i];
		even++;
	}
		else{
		arrodd[odd]=arr[i];
	odd++;}
	}
	for(int i=0;i<even;i++){
cout<<"display the even numbers array  "<<arreven[i]<<endl;}
	for(int i=0;i<odd;i++){
cout<<"display the odd numbers array  "<<arrodd[i]<<endl;}

	return 0;
}
