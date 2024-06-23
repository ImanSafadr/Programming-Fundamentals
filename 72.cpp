#include<iostream>
using namespace std;

const int row=3;
 const int column=3;
 
 void ini(int arr[row][column]);
void even(int arr[row][column]);
void odd(int arr[row][column]);

int main()
{ 
   int arr[row][column];

  
  ini(arr);
  even(arr);	
  odd(arr);

	return 0;
}
 void ini(int arr[row][column])
 {
 		for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			
		cout<<"enter the value of "<<i<<j<<" number ";
		cin>>arr[i][j];	
			
			
		}}
 }
void even(int arr[row][column])
{
	int evensum=0;
  int evencnt=0;
	
		for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
				if(arr[i][j]%2==0){			   
	  
	evensum=evensum+arr[i][j];
	evencnt=evencnt+1;
}}}
cout<<"the evensum is "<<evensum<<endl;	
	  cout<<"the even numbers are "<<evencnt<<endl;
		
}
void odd(int arr[row][column])
{
	int oddsum=0;
  int oddcnt=0;
	
		for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
				if(arr[i][j]%2!=0){			   
	  
	oddsum=oddsum+arr[i][j];
	oddcnt=oddcnt+1;
}}}
cout<<"the oddsum is "<<oddsum<<endl;	
	  cout<<"the odd numbers are "<<oddcnt<<endl;
		
}

