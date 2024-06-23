#include<iostream>
using namespace std;
int main()
{
	int size=13;
	int arr[size]={-34,45,234,7,234,65,34,64,34,65,34,4,234};
	int sno;
	cout<<"enter the number ";
	cin>>sno;
	int k;
	for(int i=0;i<size;i++)
	{
		if(sno==arr[i])
		{arr[k]=i;
	}}
	for(int m=0;m<k;m++)
cout<<"display the value "<<arr[m]<<endl;

	return 0;
}


