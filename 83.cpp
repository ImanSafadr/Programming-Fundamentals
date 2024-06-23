#include<iostream>
using namespace std;

struct student{
	string roll;
	int english;
	int physics;
	int computer;
	float ave;
};

int main()
{
	student s1;
	cout<<"enter the roll no of student1 ";
	cin>>s1.roll;
	cout<<"enter the english marks of student1 ";
	cin>>s1.english;
	cout<<"enter the physics marks of student1 ";
	cin>>s1.physics;
	cout<<"enter the computer marks of student1 ";
	cin>>s1.computer;
	
	s1.ave=(s1.english+s1.physics+s1.computer)/3;
	
	cout<<" the roll no of student1 is "<<s1.roll<<endl;
	cout<<" the english marks of student1 "<<s1.english<<endl;
	cout<<" the physics marks of student1 "<<s1.physics<<endl;
	cout<<" enter the computer marks of student1 "<<s1.computer<<endl;
	cout<<" the average of student 1 is "<<s1.ave<<endl;
	
	return 0;
}
