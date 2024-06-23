#include<iostream>
using namespace std;

struct person{
	int id;
	string name;
	int age;
};
int main()
{
	person p1,p2={1233,"fghj",56};
	cout<<"enter the id of person 1 ";
	cin>>p1.id;
	cout<<"enter the name of person 1 ";
	cin>>p1.name;
	cout<<"enter the age of person 1 ";
	cin>>p1.age;
	
//	p2=p1;
	if(p1.age<p2.age){
	cout<<"the id of person 2 is "<<p2.id<<endl;
	cout<<"the name of person 2 is "<<p2.name<<endl;
	cout<<"the age of person 2 is "<<p2.age<<endl;
}  else
{	cout<<"the id of person 1 is "<<p1.id<<endl;
	cout<<"the name of person 1 is "<<p1.name<<endl;
	cout<<"the age of person 1 is "<<p1.age<<endl;
}
	return 0;
}
