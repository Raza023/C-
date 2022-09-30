#include<iostream>
#include<string>
#include<string.h>
#define SIZE 100
#include"stack.h"
#include"stack.cpp"

using namespace std;

////////////////////// number palindrome //////////////////////////
int main()
{
	stack<int> st;
	int num;
	int var;
	cout<<"Enter a number: ";
	cin>>num;
	
	if(num<0)
	{
		cout<<"It is not a palindrome."<<endl;
	}
	else
	{
		var=num;
		
		int size=0;
		while(var>0)
		{
			var=var/10;
			size++;                  //getting size of number.(number of digits).
		}
		
		var=num;
		int rem=1;
		for(int i=0;i<size;i++)
		{
			rem=var%10;
			var=var/10;
			st.push(rem);            //pushing digits from right to left.
		}
		
		int rev=0;
		int count=1;
		for(int i=0;i<size;i++)
		{
			rev=st.pop()*count+rev;     //poping 
			count=count*10;
		}
		
		cout<<"Reverse: "<<rev<<endl;
		
		if(num==rev)
		{
			cout<<"It is a Palindrome."<<endl;
		}
		else
		{
			cout<<"It is not a Palindrome."<<endl;
		}
	}
	
	return 0;
}
