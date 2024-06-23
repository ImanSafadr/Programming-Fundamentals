#include<iostream>
using namespace std;
const int size=5;

void showout(int arr[size]);
void showin(int arr[size]);


int main()
{
	
	int arr[size];
	
	showin(arr);
    showout(arr);
	
	return 0;
}
void showout(int arr[size])
{
	for(int j=0;j<size;j++)
	{
		cout<<"the value of"<< j <<"is "<<arr[j]<<endl;
	}
	
}
void showin(int arr[size])
{
		for(int i=0;i<size;i++)
	{
		cout<<"enter the value of"<< i <<"number ";
		cin>>arr[i];
	}

}
