#include<iostream>
using namespace std;
int main()
{ int salary,choice;
  float totalsalary;
  
  cout<<"Enter the slary";
  cin>>salary;
  
  switch(choice)
  {  
  	case 1:
  		salary<45000;
  		totalsalary=salary+(salary*0.30);
//  		cout<<"the total salary is"<<totalsalary<<endl;
  		break;
  	case 2:
  	    salary=45000;
  		totalsalary=salary+(salary*0.20);
//  		cout<<"the total salary is"<<totalsalary<<endl;
  		break;
    case 3:
  		salary>45000;
  		totalsalary=salary+(salary*0.10);
//  		cout<<"the total salary is"<<totalsalary<<endl;
  		break;
  	default:
	  cout<<"error";
	  break;	
}		
cout<<"the total salary is"<<totalsalary<<endl;
	return 0;
}
