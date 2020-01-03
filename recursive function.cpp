#include<iostream>
#include<conio.h>
using namespace std;


	int product(int n)
	{
		if(n==2)
		
		return 2;
		
		else if(n%2==0)
	
			return(n*product(n-1));
		else
		return(product(n-1));
	}
	int sum(int num)
	{
		if(num==0||num==1)
		return 1;
		else 
		return(num+sum(num-1));
	}
		int main()
	{
		int n,a,num,b;
		cout<<"Enter a Number:";
		cin>>n;
		a=product(n);
		cout<<"The product of even natural number is"<<a;
		cout<<"\nEnter a New Number:";
		cin>>num;
		b=sum(num);
		cout<<"The sum of even natural number is"<<b;
	}


