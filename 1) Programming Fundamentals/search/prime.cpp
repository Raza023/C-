#include<iostream>
using namespace std;

int main()
{
	int n,i=1,counter=0;
	cout<<"Enter any number:";
	cin>>n;
	while (i<=n)
	{
		if (n%i==0)
		{
			counter=counter+1;
		}
	i=i+1;
	}
	if (counter==2)
	{
		cout<<n<<" is a prime number.";
	}
	else
	{
		cout<<n<<" is not a prime number";
	}
	
	return 0;	
}
