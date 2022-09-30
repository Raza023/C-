#include<iostream>
using namespace std;

void showStat();

int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		showStat();
	}
	return 0;
}

void showStat()
{
	static int x=3;          //static int x;    (by default x=0 like global)
	cout<<x<<endl;
	x++;	
}
