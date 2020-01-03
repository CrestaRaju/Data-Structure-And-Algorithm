	#include<iostream>
#include<conio.h>
using namespace std;
	
	int sum(int num)
	{
		if(num==0||num==1)
		return 1;
		else 
		return(num+sum(num-1));
	}
	
			int main()
	{
		int num,b;
	
		cout<<"\nEnter a New Number:";
		cin>>num;
		b=sum(num);
		cout<<"The sum of even natural number is"<<b;
	}

