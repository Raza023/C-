#include<iostream>
using namespace std;

int main()
{
	int t,i=1;
	cout<<"Enter table number:";
	cin>>t;
	while (i<=10)
	{
		cout<<t<<"*"<<i<<"="<<t*i<<endl;
		i+=1;
	}
	return 0;
}
