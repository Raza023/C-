#include<iostream>
using namespace std;


int main()
{
	int x=5l;
	int y=4;
	
	int *const ptr=&x;       //ptr=&y   wrong;
	int *ptr2=&y;
	
	cout<<ptr<<endl;
	cout<<ptr2<<endl;
	
		
	return 0;
}

