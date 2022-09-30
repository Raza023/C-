#include<iostream>

using namespace std;

int main()
{
	int size;
	cout<<"Enter size: ";
	cin>>size;
	
	int *arr=new int[size];
	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>arr[i];
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
	
	delete []arr;
	
	return 0;
}
