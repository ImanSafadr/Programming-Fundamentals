#include<iostream>
using namespace std;

struct time{
	int hours;
	int mins;
	int secs;
};
void timeins(time ts);
int main()
{
	time t;
	cout<<"enter the hours ";
	cin>>t.hours;
    cout<<"enter the minutes ";
	cin>>t.mins;
	cout<<"enter the seconds ";
	cin>>t.secs;
	
	timeins(t);
	
	
	return 0;
}
void timeins(time ts)
{
	ts.hours=ts.hours*3600;
	ts.mins=ts.mins*60;
	
	
	int tt=ts.hours+ts.mins+ts.secs;
	cout<<"the time in seconds is="<<tt<<endl;
}
