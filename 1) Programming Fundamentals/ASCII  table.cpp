#include<iostream>
using namespace std;

int main()
{
	int i;
	for(i=0;i<=255;i++)
	{
		cout<<i<<"\t"<<static_cast<char>(i)<<endl;
	}
	return 0;
}
