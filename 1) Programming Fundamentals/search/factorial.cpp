#include<iostream>
using namespace std;

int main()
{
	int f,ans=1;
	cout<<"Enter a number:";
	cin>>f;
	while (f>=1)
	{
		ans=ans*f;
		f-=1;
	}
	cout<<"Your factorial is....."<<ans;
	return 0;
}
