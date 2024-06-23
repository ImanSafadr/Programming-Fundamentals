#include<iostream>
using namespace std;
int main()
{
int no,min,max;
char choice='y';
cout<<"enter the number ";
cin>>no;
min=max=no;
while(true)
{
cout<<"enter your choice ";
cin>>choice;
if(no>max){
	max=no;}
		if(no<min){
	min=no;;}
	if(choice!='y'||choice!='Y'){
	break;
}
cout<<"enter the number ";
cin>>no;
}
cout<<"the maximum value is"<<max<<endl;
cout<<"the minimum value is"<<min<<endl;
return 0;
}
