#include<iostream>
using namespace std;

int main()
{
	int n,m,s,l,i,counter;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"Enter another nunmber:";
	cin>>m;
	if (n>=m)
	{
		s=m;
		l=n;
	}
	else
	{
		s=n;
		l=m;
	}
	counter=0;
	while (s<=l)
	{
		i=2;
		while (i<=l)
		{
			if (s%i==0 && s%(i*i*i)==0)
			{
				cout<<s<<" is divisible by "<<i<<" and it's cube. "<<(i*i*i)<<endl;
				counter+=1;
			}
		i=i+1;	
		}
	s=s+1;
	}
	if(counter==0)
	{
		cout<<"There is no number in this range is divisible by any number and it's cube.";
	}
	return 0;
}
