#include<iostream>
using namespace std;

void inp(float a,float b,char opt);
float cal(float a,float b,char opt);
void show(float res);

int main()
{  
	int no1,no2,select;
	float result;
	
	inp(no1,no2,select);
	
	cal(no1,no2,select);
	show(result);
	
	return 0;
}
void inp(float a,float b,char opt)
{
	cout<<"enter the number";
	cin>>a;
	cout<<"enter the number";
	cin>>b;
	cout<<"enter the character";
	cin>>opt;
}
float cal(float a,float b,char opt)
{
	float result=0.0f;
	switch(opt)
	{
		case '+':
		result=a+b;
		break;
		case '-':
		result=a-b;
		break;
		case '/':
		result=a/b;
		break;
		case '*':
		result=a*b;
		break;
		default:
			cout<<"engine malfunctioned"<<endl;
	}
	return result;	
}
void show(float res)
{
	cout<<"the result is "<<res<<endl;
}
