#include <iostream>
using namespace std;
int main()
{
 int pos=0,neg=0,zero=0,num;
 char choice='y';
 while(choice=='y' || choice=='Y')
 {
 cout << "Enter any Number = ";
 cin >> num;
 if(num>0)
 {
 pos++;
 }
 else if(num<0)
 {
 neg++;
 }else
 {
 zero++;
 }
 cout << "Do you want to enter again ? = ";
 cin >> choice;
 }
 cout << "Positive Numbers = " << pos << endl;
 cout << "Negative Numbers = " << neg << endl;
 cout << "Zeros are = " << zero ;
 return 0;
}

