#include<iostream>
using namespace std;


void showValue(int x)
{
	cout<<x<<endl;
}


int main()
{
	int arr[4]={1,2,3,4};
	for(int i=0;i<4;i++)
	{
		showValue(arr[i]);
	}
	return 0;
}
