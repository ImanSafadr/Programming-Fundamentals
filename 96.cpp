#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   char name1[20];	
   char name2[20];	
   char name3[20];	
	
		cout<<"Enter the name1 ";
	cin>>name1;
	cout<<"Enter the name2 ";
	cin>>name2;
	cout<<"Enter the name3 ";
	cin>>name3;
	 cout<<endl;
	 
	 cout<<"Length of string "<<strlen(name1)<<endl;
	 cout<<"Length of string "<<strlen(name2)<<endl;
	 cout<<"Length of string "<<strlen(name3)<<endl;
	
//	strcpy(name2,name1);
    cout<<"Length of string "<<strlen(name2)<<endl;
    cout<<"The name is "<<name2<<endl;
	
	strcat(name1," ");
	strcat(name1,name2);
	strcat(name1," ");
	strcat(name1,name3);
	cout<<"The name is "<<name1<<endl;
	cin.ignore();
   char name4[20];	
			cout<<"Enter the name ";
	cin.getline(name4,20);
	cout<<"The name is "<<name4<<endl;
		
	return 0;
}
