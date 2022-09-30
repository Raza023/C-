#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

class MyArray
{
	int size;
	int index;
	int *arr;
public:
	MyArray(int s)
	{
		if(s>0)
		{
			size=s;
			index=0;
			arr=new int[size];
			for(int i=0;i<size;i++)
			{
				arr[i]=0;
			}
		}
		else
		{
			cout<<"Invalid array size."<<endl;
		}
	}
	
	~MyArray()
	{
		delete []arr;
		arr=NULL;
	}
	
	void addelement(int val)
	{
		if(index<size)
		{
			arr[index]=val;
			index++;
		}
		else
		{
			cout<<"Array is full."<<endl;
		}
	}
	
	int getelement(int i)
	{
		if(i>=0&&i<size)
		{
			return arr[i];
		}
		else
		{
			cout<<"Invalid index"<<endl;
			return -1;
		}
	}
};

int main()
{
	MyArray array(5);
	int a;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter number: ";
		cin>>a;
		array.addelement(a);
	}
	array.addelement(45);
	for(int i=0;i<10;i++)
	{
		cout<<array.getelement(i)<<endl;
	}
	
	return 0;
}
