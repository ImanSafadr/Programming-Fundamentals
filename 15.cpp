#include <iostream>
using namespace std;
int main()
{
 int no;
 float sum=0;
 cout<<"enter the number";
 cin>>no;
 for(int i;i<=no;i++)
 sum=sum+(1/(float)i);
 cout<<"the answer is"<<sum<<endl;
 return 0;
}
