#include<iostream>
using namespace std;

void doublValue(int *pt)
{
	*pt=*pt*2;
}

int main()
{
	int x=5;
	int *ptr=&x;
	doublValue(&x);
	cout<<"double value = "<<x<<endl;
	return 0;
}

