#include<iostream>
using namespace std;

void showValue(int [] ,int);

int main()
{
	int arr[4]={1,2,3,4};
	showValue(arr,4);
	return 0;
}

void showValue(int array[] ,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<endl;
	}
}

