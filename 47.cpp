#include<iostream>
 using namespace std;

 typedef struct employee{
 	int id;
 	char fav;
 	float salary;
 }win;
 
  union money{
 	int wheat;
 	char house;
 	float dollar;
 };
 
 
 
 
 int main()
 {
 	union money m1;
 	m1.dollar=2000;
 	m1.house='a';
 	cout<<m1.dollar;
 	
 	
 	
 	
 	
 	
// 	win Abdullah;
// 	win Usman;
// 	win Ali;
// 	Abdullah.id=2029;
// 	Abdullah.fav='A';
// 	Abdullah.salary=100000000;
// 	cout<<Abdullah.id<<endl;
// 	cout<<Abdullah.fav<<endl;
// 	cout<<Abdullah.salary<<endl;
// 	
 	return 0;
 }
