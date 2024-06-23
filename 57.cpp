#include<iostream>
using namespace std;
long tab(int a,int b,int c);

int main()
{   int num ,start,end;
	cout<<"enter the number ";
	cin>>num;
	cout<<"enter the start number ";
	cin>>start;
	cout<<"enter the end number ";
	cin>>end;
	 
tab (num,start,end);		
	
	return 0;
}
long tab(int a,int b,int c)
{int table; 
for(int i=b;i<=c;i++){
	table=a*i;
cout<<"the table is "<<table<<endl;
}

return table;
}
