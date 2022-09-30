#include<iostream>
using namespace std;

int sum(int ,int);
int sum(int,int,int);
int sum(int,int,int,int);

int main()
{
	int result;
	int n=1,m=2,o=3,p=4;
	result=sum(n,m);
	cout<<"Sum of numbers is "<<result<<endl;
	result=sum(n,m,p);
	cout<<"Sum of numbers is "<<result<<endl;
	result=sum(n,m,p,o);
	cout<<"Sum of numbers is "<<result<<endl;
	
	return 0;
}

int sum(int a,int b)
{
	int add=a+b;
	return add;
}

int sum(int a,int b,int c)
{
	int add=a+b+c;
	return add;
}

int sum(int a,int b,int c,int d)
{
	int add=a+b+c+d;
	return add;
}

