#include<iostream>
using namespace std;


int main()
{
	int x;
	float y;
	void *ptr;
	ptr=&x;
	ptr=&y;	
	//cout<<*ptr<<endl;     wrong
	return 0;
}

