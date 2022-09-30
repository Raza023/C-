#include<iostream>
#include<string>

using namespace std;

void oddDescending(int var)
{
	if(var%2==0)
	{
		var--;
	}
	if(var>=1)
	{
		cout<<var<<endl;
		var-=2;
		oddDescending(var);
	}
}

void oddAscending(int var)
{
	if(var%2==0)
	{
		var--;
	}
	if(var>=1)
	{
		var-=2;
		oddAscending(var);
		var+=2;          //to strat from 1.
		cout<<var<<endl; //display baad ma karwana.
	}
}

int main()
{
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	while(x<=0)
	{
		cout<<"Please enter a positive number: ";
		cin>>x;
	}
	cout<<"Odd numbers between 1 and "<<x<<": "<<endl;
	oddAscending(x);
	cout<<endl;
	cout<<"Odd numbers between "<<x<<" and 1: "<<endl;
	oddDescending(x);
	return 0;
}
