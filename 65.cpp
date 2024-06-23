#include<iostream>
using namespace std;
int add(int a,int b);
long sub(int a,int b);
long mul(int a,int b);
long div(int a,int b);
long mod(int a,int b);
void inv();
int main()
{  int no1,no2;
   char opt;
   
   cout<<"enter the number";
   cin>>no1;
   cout<<"enter the number";
   cin>>no2;
   cout<<"choose your option";
   cin>>opt;
   
   if(opt=='+')
   cout<<"the addition value is "<<add(no1,no2)<<endl;
   else if(opt=='-'){
   cout<<"the subtraction value is "<<sub(no1,no2)<<endl;}
   else if(opt=='*'){
   cout<<"the multiplication value is "<<mul(no1,no2)<<endl;}
   else if(opt=='/'){
   cout<<"the division value is "<<div(no1,no2)<<endl;}
   else if(opt=='%'){
   cout<<"the division value is "<<mod(no1,no2)<<endl;}
   else
   inv();
return 0;
}
int add(int a,int b)
{
	int c=a+b;
	return c;
}
long sub(int a,int b)
{
	int c=a-b;
	return c;
}
long mul(int a,int b)
{
	int c=a*b;
	return c;
}
long div(int a,int b)
{
	int c=a/b;
	return c;
}
long mod(int a,int b)
{
	int c=a%b;
	return c;
}
void inv()
{
	cout<<"error.....invalid option  "<<endl;
}


