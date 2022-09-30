#include<iostream>
using namespace std;


int main()
{
	int x=25;
	int *ptr;                             //int *ptr=&x;
	ptr=&x;
	for(int y=1;y<=25;y++)
	{
		cout<<ptr<<endl;
		ptr++;
	}
	return 0;
}
