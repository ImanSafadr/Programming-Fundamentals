#include<iostream>
using namespace std;

void vowel(char a);

int main()
{
	char ch;
	cout<<"enter the character ";
	cin>>ch;
	
	vowel(ch)
	
	
	;return 0;
}
void vowel(char a)
{   
    bool vow;
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    cout<<"the condition is true"<<endl;
	else
	cout<<"the condition is false"<<endl;
	
}
