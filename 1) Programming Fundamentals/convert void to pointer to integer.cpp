#include<iostream>
using namespace std;


int main()
{
	int x=5;
	void *vptr=&x;
	int *iptr=static_cast<int *>(vptr);
	cout<<vptr<<endl;
	cout<<*iptr<<endl;	
	return 0;
}

