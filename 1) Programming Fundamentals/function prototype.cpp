#include<iostream>
using namespace std;

bool isPrime(int);

int main()
{
	bool result;
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	result=isPrime(num);
	if(result==true)                     //if(result)
	{
		cout<<num<<" is a prime number.\n";
	}
	else
	{
		cout<<num<<" is not a prime number."<<endl;
	}
	return 0;
}

bool isPrime(int n)
{
	bool flag=true;
	int div=2;
	while(div<=n)
	{
		if(n%div==0)
		{
			flag=false;
			break;
		}
		return flag;
		div++;
	}
}

