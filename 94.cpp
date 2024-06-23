#include<iostream>
#include<string.h>
using namespace std;

struct rectangle{
	char color[20];
	int length;
	int width;
	int area;
};
void get(rectangle& r){
	cout<<"Enter the color ";
	cin>>r.color;
	cout<<"Enter the length ";
	cin>>r.length;
	cout<<"Enter the width ";
	cin>>r.width;
	 r.area=r.length*r.width;
}

int main()
{
   rectangle r1,r2;	
	get(r1);
	cout<<endl;
	get(r2);
	
	if(strcmp(r1.color,r2.color)==0 && r1.area==r2.area)
     cout<<"they are same rectangles"<<endl;
	 else
	 cout<<"they are not same rectangles"<<endl;	
	return 0;
}
