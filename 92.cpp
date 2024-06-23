#include<iostream>
#include<string.h>
using namespace std;

int main()
{
//  char ch[5] = {'3','s','A','%','w'};
    char name1[100] = "Ali";
    char name2[100] = "ali";

    strcpy(name2, name1);

    cout<<name1<<endl;
    cout<<name2<<endl;
    cout<<"Length of string "<<strlen(name2)<<endl;
    cout<<"Length of string "<<strlen(name1)<<endl;

    if(strcmp(name1, name2) > 0)
        cout<<"String-1 is largest"<<endl;
    else if (strcmp(name1, name2) < 0)
        cout<<"String-2 is largest"<<endl;
    else if (strcmp(name1, name2) == 0)
        cout<<"Both are equals"<<endl;

    strcat(name1," ");
    strcat(name1,name2);

    cout<<"New String is "<<name1<<endl;

    char name[10];
    cout<<"Enter name ";
    cin.getline(name,10);
    cout<<"\n\nName is "<<name<<endl;

    return 0;
}//declare a str rect with 3 data membs color of tyoe char arr and l & w of type int if color and area of 2 rects are same then print marching rects
//not machimg rcts.
