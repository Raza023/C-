#include <iostream>
using namespace std;

int isPrime(long);

int main()
{
	int num;
	
	cout<<"Enter an integer number: ";
	cin>>num;
	
	if(isPrime(num))
		cout<<num<<" is a prime number"<<endl;
	else
		cout<<num<<" is not a prime number"<<endl;
		
	return 0;
}


int isPrime(long n)
{
	
	int prime=1;
	int i;
	for(i=2;i<(n-1);i++)
	{
		if(n%i==0)
		{
			prime=0;
			break;
		}
	}
	return prime;
}

