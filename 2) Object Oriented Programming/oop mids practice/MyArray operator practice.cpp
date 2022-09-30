#include<iostream>

using namespace std;

class MyArray
{
private:
	int size;
	int index;
	int *arr;
public:
	MyArray(const MyArray &right);
	MyArray();
	MyArray(int s);
	~MyArray();
	void addelement(int value);
	int getelement(int i);
	MyArray operator=(const MyArray &right);
	int& operator[](const int &i);
};

int& MyArray::operator[](const int &i)
{
	if(i>=0&&i<size)
	{
		return arr[i]; 
	}
	else
	{
		cout<<"Error! Invalid index."<<endl;
		exit(0);
	}
}

MyArray MyArray::operator=(const MyArray &right)
{
	if (arr != NULL)
	{
		delete[]arr;
		arr = NULL;
	}
	size=right.size;
	index=right.index;
	arr=new int[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=right.arr[i];
	}
	return *this;
}

MyArray::MyArray(const MyArray &right)
{
	size=right.size;
	index=right.index;
	arr=new int[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=right.arr[i];
	}
}

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

MyArray::~MyArray()
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
	}
}

int main()
{
	MyArray array(5);
	MyArray arr;
	arr=array;
	int a;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		//cin>>a;
		//arr.addelement(a);
		cin>>arr[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<"Value "<<i+1<<": "<<arr[i]<<endl;                       //arr.getelement(i)<<endl;
	}
	
	return 0;
}
