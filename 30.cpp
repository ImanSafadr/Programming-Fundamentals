#include<iostream>
using namespace std;
int main()
{
//	for(int i=1;i<=10;i++){
	
//	if(i==5)
//		break;
//	cout<<i<<endl;	
	
	
	int a=5;
	int* b = &a;
   int** c=&b;
	cout<<"print the location of a which is  "<<c<<endl;
	cout<<"print the location of a which is  "<<b<<endl;
	cout<<"print the location of a which is  "<<&b<<endl;
	cout<<"print the location of a which is  "<<*c<<endl;
	cout<<"print the location of a which is  "<<**c<<endl;
	
	return 0;
}
