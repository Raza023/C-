#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter 1: ";
	cin>>num;
	while(num!=1)
	{
		cout<<"Error!\nEnter 1: ";
		cin>>num;	
	}
	
	return 0;
}
