#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter a number (1 to 100): ";
	cin>>num;
	while(num>100||num<1)
	{
		cout<<"Error!\nEnter a number (1 to 100): ";
		cin>>num;	
	}
	
	return 0;
}
