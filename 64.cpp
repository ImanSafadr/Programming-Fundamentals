#include<iostream>
using namespace std;

void temp(int t,int celc);

int main()
{   int far,cel;
	cout<<"enter the temperature in farenhiet ";
	cin>>far;
	temp(far,cel);
	
	return 0;
}
void temp(int t,int celc)
{
	 celc=(t-32)*5/9;
	cout<<"the temperature in celcius is "<<celc<<endl;
	
}
