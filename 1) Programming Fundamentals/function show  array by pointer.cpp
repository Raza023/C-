#include<iostream>
using namespace std;

void showArray(const int *, int );

int main()
{
	int arr[]={1,2,3,4,5};
	showArray(arr,5);
	return 0;
}

void showArray(const int *arrptr, int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<*(arrptr+i)<<endl;
	}
}

