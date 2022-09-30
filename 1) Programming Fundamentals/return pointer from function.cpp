#include<iostream>
using namespace std;

int *createArray();

int main()
{
	int *arr=createArray();
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<endl;
	}
	delete []arr;
	return 0;
}


int *createArray()
{
	int *arr =new int[10];
	for(int i=0;i<10;i++)
	{
		arr[i]=i+1;
	}
	return arr;
}
