#include<iostream>
using namespace std;

int main()
{
		
	int n,m,s,l,i;
	cout<<"enter the range:";
	cin>>n>>m;
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
	while (s<=l)
	{
		cout<<"Table of "<<s<<" is:"<<endl;
		i=1;
		while (i<=10)
		{   
			cout<<s<<"*"<<i<<"="<<s*i<<endl;
			i+=1;
		}
		s+=1;
	}
	
	return 0;
}
