#include<iostream> 
 using namespace std;
 void factorial(int);
 int main()
 {
  int  num;
   cout << "Enter the Number :"; 
cin>>num;

factorial(num);

 return 0; 
} 
 void factorial(int n) 
{ 
 
int fact = 1; 
 for (int count= 1; count <= n; count++) 
{ 
fact = fact * count;
 
}  cout <<  << " Factorial Value Is " << factorial<<endl;

 }
