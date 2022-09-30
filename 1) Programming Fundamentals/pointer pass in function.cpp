#include<iostream>
using namespace std;

void inMemory(int *p1,int *p2)
{
	if(p1<p2)
	{
		cout<<*p1<<" exist before "<<*p2<<endl;
	}
	else
	{
		cout<<*p2<<" exist before "<<*p1<<endl;
	}
}

int main()
{
	int x=5,y=6;
	int *ptr1=&x;
	int *ptr2=&y;
	inMemory(&x,&y);
	return 0;
}

