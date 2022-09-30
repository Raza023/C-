#include<iostream>
using namespace std;



void divide(int n,int m)
{
	int div;
	if(m==0)
	{
		cout<<"Error!"<<endl;
		return;
	}
	else
	{
		div=n/m;
		cout<<"division="<<div<<endl;
	}
}

int main()
{
	int x,y;
	cout<<"Enter a number: ";
	cin>>x;
	cout<<"Enter another number: ";
	cin>>y;
	divide(x,y);
		
	return 0;
}
