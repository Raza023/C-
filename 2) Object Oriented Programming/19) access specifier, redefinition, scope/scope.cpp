#include<iostream>
#include<string>

using namespace std;

int var=10;

int main()
{
	{
		int var=20;
		cout<<::var<<endl;
	}
	return 0;
}
