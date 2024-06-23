#include<iostream>
using namespace std; 
int main()
{
	int array1[5],array2[5];
	
	for(int i=0;i<5;i++)
	{
		cin>>array1[i];
	array2[i]=array1[i]*2;
	}
	for(int j=0;j<5;j++)
	cout<<"the aaray is"<<array2[j]<<endl;
	
	return 0;
}
