#include<iostream>

using namespace std;

int main()
{
	int a=10;
	int *p;
	p=&a;
	int **dp;
	dp=&p;
	
	cout<<"Value of a "<<a<<"."<<endl;
	cout<<"Value of a "<<*p<<"."<<endl;
	cout<<"Value of a "<<**dp<<"."<<endl;
	
	cout<<endl;
	
	cout<<"Address of a: "<<&a<<"."<<endl;
	cout<<"Address of a: "<<p<<"."<<endl;
	cout<<"Address of a: "<<*dp<<"."<<endl;

	cout<<endl;
	
	cout<<"Address of p: "<<&p<<"."<<endl;
	cout<<"Address of p: "<<dp<<"."<<endl;
	
	cout<<endl;
	
	cout<<"Address of dp: "<<&dp<<"."<<endl;

	return 0;
}
