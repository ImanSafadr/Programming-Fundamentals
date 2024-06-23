#include<iostream>
using namespace std;
 
void ini(int arr[],int s);
void show(int arr[],int s);
void bubble(int arr[],int s);
void selection(int arr[],int s);
void binary(int arr[],int s);
void linear(int arr[],int s);
void comp(int arr[],int s);
void prime(int arr[],int s);
void even(int arr[],int s);
void odd(int arr[],int s);

int main()
{ 
   int size=5;
   int arr[size];
   int opt;
   
   while(true)
  {cout<<"      MENU      "<<endl;
   cout<<endl;
   cout<<"1.INNITIALIZE THE ARRAY "<<endl;
   cout<<"2.SHOW THE ARRAY "<<endl;
   cout<<"3.GIVE BUBBLE SORT OF THE ARRAY "<<endl;
   cout<<"4.GIVE SELECTION SORT OF THE ARRAY "<<endl;
   cout<<"5.GIVE BINARY SEARCH OF THE ARRAY "<<endl;
   cout<<"6.GIVE LINEAR SEARCH OF THE ARRAY "<<endl;
   cout<<"7.GIVE MAX AND MIN OF THE ARRAY "<<endl;
   cout<<"8.GIVE PRIME NUMBERS OF THE ARRAY "<<endl;
   cout<<"9.GIVE EVEN NUMBERS OF THE ARRAY "<<endl;
   cout<<"10.GIVE ODD NUMBERS  OF THE ARRAY "<<endl;
   cout<<"11.EXIT THE ARRAY "<<endl;
  cout<<endl;
  cout<<"enter the option  ";
  cin>>opt;
 
 switch(opt)
 {
 	case 1:
 	ini(arr,size);
 	break;
 	case 2:
 	show(arr,size);
 	break;
    case 3:
 	bubble(arr,size);
 	break;
 	case 4:
 	selection(arr,size);
 	break;
 	case 5:
 	binary(arr,size);
 	break;
 	case 6:
 	linear(arr,size);
 	break;
 	case 7:
 	comp(arr,size);
 	break;
 	case 8:
 	prime(arr,size);
 	break;
 	case 9:
 	even(arr,size);
 	break;
 	case 10:
 	odd(arr,size);
 	break;
 	case 11:
 	exit(1);
 	break;
 	default:
 	cout<<"invalid option"<<endl;
 	break;
 }
  }
  
	return 0;
}
 void ini(int arr[],int s)
 {
 		for(int i=0;i<s;i++){
		
			
		cout<<"enter the value of "<<i<<" number ";
		cin>>arr[i];	
			
			
		}
		cout<<endl;
		}
 void show(int arr[],int s)
 {
 		for(int i=0;i<s;i++){
		
			
		cout<<"the value of "<<i<<" number is "<<arr[i]<<endl;	
			
			
		}
		cout<<endl;
		}
		void bubble(int arr[],int s)
		{
		for(int i=0;i<s-1;i++){
		for(int j=0;j<s-1-i;j++){
			if(arr[j]>arr[j+1]){
//			int temp=arr[j];
//			arr[j]=arr[j+1];
//			arr[j+1]=temp;
			swap(arr[j],arr[j+1]);
			}}}
			for(int i=0;i<s;i++){
			cout<<"the value in ascendind order is "<<arr[i]<<endl;
		}
			
		cout<<endl;	
		}
		void selection(int arr[],int s)
		{
			for(int i=0;i<s-1;i++){
			int small=i;
			for(int j=i;j<s;j++){
		if(arr[small]<arr[j])
			{
				small=j;
			}}
			if(small!=i){
				int temp=arr[small];
				arr[small]=arr[i];
				arr[i]=temp;
				
		}	}
			for(int i=0;i<s;i++){
					cout<<"the value in descending order is "<<arr[i]<<endl;
			}
		cout<<endl;
		}
		void binary(int arr[],int s)
		{
			int low=0,high=s-1,mid,sno,found=-1;
			cout<<"enter the binary search number ";
			cin>>sno;
			while(low<=high&&found==-1)
			{
				mid=(high+low)/2;
				if(arr[mid]==sno)
				found=mid;
				else if(arr[mid]>sno)
				low=mid+1;
				else
				high=mid-1;
			}
			if(found==-1)
			cout<<"the number was not found"<<endl;
			else
			cout<<"the number was found at index "<<found<<endl;
			cout<<endl;
		}
		void linear(int arr[],int s)
		{
			int sno,found=-1;
			cout<<"enter the linear search number ";
			cin>>sno;
			for(int i=0;i<s;i++){
		if(sno==arr[i])	
		found=i;
		}
		if(found==-1)
			cout<<"the number was not found"<<endl;
			else
		cout<<"the number was found at index "<<found<<endl;
	
			cout<<endl;
		}
		void comp(int arr[],int s)
		{
			for(int i=0;i<s-1;i++){
			int small=i;
			for(int j=i;j<s;j++){
		if(arr[small]<arr[j])
			{
				small=j;
			}}
			if(small!=i){
				int temp=arr[small];
				arr[small]=arr[i];
				arr[i]=temp;
		}	}
			int sl=arr[s-(s-1)];
			cout<<"the second largest number is "<<sl<<endl;
			int ss=arr[s-2];
			cout<<"the second smallest number is "<<ss<<endl;
			cout<<endl;
		}
		void prime(int arr[],int s)
		{  
			for(int i=0;i<s;i++){
 bool prime=true;		
				 
			for(int j=2;j<=arr[i]/2;j++){
			if(arr[i]%j==0)
			 prime=false;
}
       if(prime==false)
		cout<<"the number "<<arr[i]<<" is a not prime number"<<endl;
		else
			cout<<"the number "<<arr[i]<<" is a prime number"<<endl;
	}
	
		}
void even(int arr[],int s)
{
	int evensum=0;
  int evencnt=0;
	
		for(int i=0;i<s;i++){
		
				if(arr[i]%2==0){			   
	  
	evensum=evensum+arr[i];
	evencnt=evencnt+1;
}}
cout<<"the evensum is "<<evensum<<endl;	
	  cout<<"the even numbers are "<<evencnt<<endl;
		
}
void odd(int arr[],int s)
{
	int oddsum=0;
  int oddcnt=0;
	
		for(int i=0;i<s;i++){
				if(arr[i]%2!=0){			   
	  
	oddsum=oddsum+arr[i];
	oddcnt=oddcnt+1;
}}
cout<<"the oddsum is "<<oddsum<<endl;	
	  cout<<"the odd numbers are "<<oddcnt<<endl;
		
}

