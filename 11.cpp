#include<iostream>
using namespace std;
int main()
{int no,pos=0,neg=0,zer=0;
char choice='y';
while(choice=='y'||choice=='Y'){
cout<<"enter the number";
cin>>no;


	if(no>0){
	pos++;}
  else	if(no<0){
  neg++;}
  else
	zer++;	

	cout<<"do you want to enter the number again";
cin>>choice;
}
cout<<"the positive number is"<<pos<<endl;
cout<<"the negative number is"<<neg<<endl;
cout<<"the zero number is"<<zer<<endl;
return 0;}
