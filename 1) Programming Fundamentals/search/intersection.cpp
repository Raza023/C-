#include<iostream>

using namespace std;

int main()
{
	int s1;
	cout<<"Enter size of first array: ";
	cin>>s1;
	int s2;
	cout<<"Enter size of second array: ";
	cin>>s2;
	
	int arr[s1];
	int arr2[s2];
	
	for(int i=0;i<s1;i++)
	{
		cout<<"Enter value "<<i+1<<" af arr 1: ";
		cin>>arr[i];
	}
	
	for(int i=0;i<s2;i++)
	{
		cout<<"Enter value "<<i+1<<" af arr 2: ";
		cin>>arr2[i];
	}
	
	int size=0;
	for(int i=0;i<s1;i++)
	{
		for(int j=0;j<s2;j++)
		{
			if(arr[i]==arr2[j])
			{
				size++;
			}
		}
	}
	
	int intr[size];
	int k=0;
	for(int i=0;i<s1;i++)
	{
		for(int j=0;j<s2;j++)
		{
			if(arr[i]==arr2[j])
			{
				intr[k]=arr[i];
				k++;
			}
		}
	}
	cout<<"Intersection: ";
	
	for(int i=0;i<size;i++)
	{
		cout<<intr[i]<<",";
	}
	
	return 0;
}
