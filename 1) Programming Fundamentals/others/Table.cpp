#include <iostream>
using namespace std;

int main()
{
	int table,num=1;
	cout<<"Enter a number: ";
	cin>>table;
	while(num<=10)
	{
		cout<<table<<" * "<<num<<" = "<<table*num<<endl;
		num++;
	}
	return 0;
}
