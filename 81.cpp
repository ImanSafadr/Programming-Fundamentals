#include<iostream>
using namespace std;
int main()
{
	int size=10;
    int arrc[size];
    int arr2[size]={1,65,9,88,56,34,76,75,33,12};
    int arr1[size]={1,65,8,87,56,34,76,78,34,10};
    int com=0;
    	for(int i=0;i<size;i++)
	{ if(arr1[i]==arr2[i]){
    arrc[com]=arr2[i];
    com++;
	}
}
    	for(int i=0;i<com;i++){
    cout<<"display the common numbers array  "<<arrc[i]<<endl;
	}
    return 0;
}
