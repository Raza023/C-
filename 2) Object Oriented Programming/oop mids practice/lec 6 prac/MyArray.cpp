#include<iostream>

using namespace std;

class MyArray
{
private:
	int size;
	int index;
	int *arr;
public:
	MyArray();
	MyArray(int s);
	void deleteArray();
	void addelement(int value);
	int getelement(int i);
};

MyArray::MyArray()
{
	size=1;
	index=0;
	arr=new int[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=0;
	}
}

MyArray::MyArray(int s)
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
		cout<<"Invalid size."<<endl;
	}
}

void MyArray::deleteArray()
{
	delete []arr;
	arr=NULL;
}

void MyArray::addelement(int value)
{
	if(index<size)
	{
		arr[index]=value;
		index++;
	}
	else
	{
		cout<<"Array is full."<<endl;
	}
}

int MyArray::getelement(int i)
{
	if(i>=0&&i<size)
	{
		return arr[i];
	}
	else
	{
		cout<<"Invalid Index."<<endl;
		return -1;
	}
}

int main()
{
	MyArray array(5);
	int a;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>a;
		array.addelement(a);
	}
	for(int i=0;i<5;i++)
	{
		cout<<"Value "<<i+1<<": "<<array.getelement(i)<<endl;
	}
	array.deleteArray();
	return 0;
}
