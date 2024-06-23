#include<iostream>
using namespace std;
int main()
{
	int basic,total;
	int choose;
	cout<<"enter the salary";
	cin>>basic;
	switch(choose)
	{
		case 20000:
		total=basic+5000;
			cout<<"the answer is "<<total <<endl;
		break;
		case 30000:
		total=basic+6000;
	cout<<"the answer is "<<total <<endl;
		break;
		case 40000:
		total=basic+7000;
		cout<<"the answer is "<<total <<endl;
		break;
		case 50000:
		total=basic+10000;
		cout<<"the answer is "<<total <<endl;
		break;
		default:
			cout<<"the option not found"<<endl;
	}
	
	return 0;
}
