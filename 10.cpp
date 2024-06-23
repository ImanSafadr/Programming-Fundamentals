#include<iostream>
using namespace std;
int main()
{int no,l,i=1,psum=0,nsum=0,zsum=0;
cout<<"enter the number";
cin>>no;
//cout<<"enter the number";
//cin>>l;

while(i<=1){
	if(no>0)
	{psum++;}
	if(no<0)
	{nsum++;	}
	if(no==0)
	zsum++;
	 
	 i++;
//	 cout<<"do you want to enter again";
//cin>>no;
}
cout<<"the positive sum is"<<psum<<endl;
cout<<"the negative sum is"<<nsum<<endl;
cout<<"the zero sum is"<<zsum<<endl;
return 0;
}
