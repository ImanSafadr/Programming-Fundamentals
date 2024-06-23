#include<iostream>
using namespace std;

int ec(int r,int c);
int oc(int r,int c);

int main()
{ int row=3;
  int column=3;
  int evensum=0;
  int oddsum=0;
  
	int arr[row][column]={{24,58,98},
	                      {23,21,75},
						  {34,65,56}};
	
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
				if(arr[i][j]%2==0){
		    evensum=evensum+arr[i][j];			
				}
			else	
				oddsum=oddsum+arr[i][j];
				
				
		}}			
	cout<<"the evensum is "<<evensum<<endl;	
	cout<<"the oddsum is "<<oddsum<<endl;	
	
	cout<<"the even numbers are "<<ec(row,column)<<endl;
	cout<<"the odd numbers are "<<oc(row,column)<<endl;
	
	
	return 0;
}
int ec(int r,int c)
{
    int count=0;
	int arr[r][c]={{1,2,3},
	               {4,5,6},
				   {7,8,9}};
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
				if(arr[i][j]%2==0){			   
	  
	count =count+1;
}}}
	
	return count;
}
int oc(int r,int c)
{
    int count=0;
	int arr[r][c]={{1,2,3},
	               {4,5,6},
				   {7,8,9}};
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
				if(arr[i][j]%2!=0){			   
	  
	count =count+1;
}}}
	
	return count;
}
