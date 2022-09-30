#include<iostream>
using namespace std;

void reference(int ,int ,int & ,int &);

int main()
{
	int x,y,rem,quo;
	cout<<"Enter denomintor: ";
	cin>>x;
	cout<<"Enter numerator: ";
	cin>>y;
	reference(x,y,rem,quo);
	cout<<"Quotient = "<<quo<<endl;
	cout<<"Remainder = "<<rem<<endl;
	return 0;
}

void reference(int a,int b,int &remainder ,int &quotient)
{
	if(b==0)
	{
		cout<<"Error! Numerator is 0."<<endl;
		exit(0);
	}
	remainder=a%b;
	quotient=a/b;
}
