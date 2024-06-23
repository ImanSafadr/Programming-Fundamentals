#include<iostream>
using namespace std;

struct student{
	string name;
	int roll;;
	float marks[5];
	float avg;
};
void show(student s)
{
	cout<<"The name of student is "<<s.name<<endl;
	cout<<"The roll number is "<<s.roll<<endl;
	for(int i=0;i<5;i++){
	cout<<"The marks of subject"<<i+1<<"are"<<s.marks[i]<<endl;
}
    cout<<"The average is "<<s.avg<<endl;
}
void get(student& s)
{
	cout<<"Get the values of student "<<endl;
	cout<<"Enter the name ";
	cin>>s.name;
	cout<<"Enter the roll ";
	cin>>s.roll;
	float sum=0.0f;
	for(int i=0;i<5;i++){
	cout<<"Enter the numbers of subject"<<i+1<<" ";
	cin>>s.marks[i];
	sum=sum+s.marks[i];
	}
	s.avg=sum/5.0f;
}
int main()
{
	student s[5];
	for(int i=0;i<5;i++)
	{
	 get(s[i]);	
	 cout<<endl;
	}
		for(int i=0;i<5;i++)
	{
	 show(s[i]);
	 cout<<endl;	
	}
	
}
