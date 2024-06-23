#include<iostream>
using namespace std;
int main()
{ int evensum=0,oddsum=0;
	int array[10]={11,22,33,44,55,66,77,88,99,100};
	for(int i=0;i<10;i++)
	{
		if(array[i]%2==0){
			evensum=evensum+1;
			
		}else{
		oddsum=oddsum+1;}

	
	

	}
		cout<<"the even is"<<evensum<<endl;
	cout<<"the odd is"<<oddsum<<endl;
	
	return 0;
}
