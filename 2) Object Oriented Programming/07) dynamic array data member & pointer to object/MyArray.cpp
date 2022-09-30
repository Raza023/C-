#include <iostream>
#include <string>

using namespace std;

MyArray::MyArray(int s)
{
	if(s>0)
	{
		size=s;
		index=0;
		arr=new int[size];
		for(int i=0;i<size;i++)  //initializing
		{
			arr[i]=0;
		}
	}
	else
	{
		cout<<"Invalid array size"<<endl;
	}
}

MyArray::~MyArray()
{
	delete []arr;
	arr = NULL;
	cout<<"Destructor is calling..."<<endl;
	cout<<"Object is dying...."<<endl;
}

void MyArray::addElement(int val)
{
	if(index<size)
	{
		arr[index]=val;
		index++;
	}
	else
	{
		cout<<"Array is full"<<endl;
	}
}

int MyArray::getElement(int i)
{
	if(i>=0&&i<size)
	{
		return arr[i];
	}
	else
	{
		cout<<"Invalid Index."<<endl;
		return -99999;
	}
}

