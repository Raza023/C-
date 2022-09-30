#include<iostream>
#include<string>

using namespace std;

int main()
{
	int size,max,min;
	cout<<"Enter size of dynamic array: ";
	cin>>size;
	
	int *arr;
	arr=new int[size];
	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter value no. "<<i+1<<": ";
		cin>>arr[i];
	}
	
	max=arr[0];
	min=arr[0];
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	
	cout<<"Maximum is "<<max<<endl;
	cout<<"Minimum is "<<min<<endl;
	
	delete []arr;
	
	return 0;
}
