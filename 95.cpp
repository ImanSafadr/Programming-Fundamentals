#include<iostream>
#include<string.h>
using namespace std;

struct rectangle{
	char color[20];
	int length;
	int width;
};

int main()
{
   rectangle r1,r2;	
	
		cout<<"Enter the color ";
	cin>>r1.color;
	cout<<"Enter the length ";
	cin>>r1.length;
	cout<<"Enter the width ";
	cin>>r1.width;
	int area1=r1.length*r1.width;
	 cout<<endl;
	 	cout<<"Enter the color ";
	cin>>r2.color;
	cout<<"Enter the length ";
	cin>>r2.length;
	cout<<"Enter the width ";
	cin>>r2.width;
	int area2=r2.length*r2.width;
	
	if(strcmp(r1.color,r2.color)==0 && area1==area2)
     cout<<"they are same rectangles"<<endl;
	 else
	 cout<<"they are not  same rectangles"<<endl;	
	return 0;
}
