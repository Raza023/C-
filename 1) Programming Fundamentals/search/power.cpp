#include<iostream>
using namespace std;

int main()
{
	double n,p;
	double x;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"Enter it's power:";
	cin>>p;
	x=1;
	while (p>=1)
	{
		x=x*n;
		p=p-1;
	}
	cout<<"answer is "<<x;
	return 0;
}
