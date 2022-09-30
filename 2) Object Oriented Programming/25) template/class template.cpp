#include<iostream>
#include<string>
#include<vector>

using namespace std;

template <class T>
class MyArray
{
private:
	int size;
	int index;
	T *arr;
public:
	MyArray(const MyArray &right);
	MyArray();
	MyArray(int s);
	~MyArray();
	void addelement(T value);
	T getelement(int i);
	MyArray operator=(const MyArray &right);
	T& operator[](const int &i);
};

template <class T>
T& MyArray<T>::operator[](const int &i)
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

template <class T>
MyArray<T> MyArray<T>::operator=(const MyArray &right)
{
	if(arr!=NULL)
	{
		delete []arr;
		arr=NULL;
	}
	size=right.size;
	index=right.index;
	arr=new T[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=right.arr[i];
	}
	return *this;
}

template <class T>
MyArray<T>::MyArray(const MyArray &right)
{
	size=right.size;
	index=right.index;
	arr=new T[size];  
	for(int i=0;i<size;i++)
	{
		arr[i]=right.arr[i];
	}
}

template <class T>
MyArray<T>::MyArray()
{
	size=1;
	index=0;
	arr=new T[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=0;
	}
}

template <class T>
MyArray<T>::MyArray(int s)
{
	if(s>0)
	{
		size=s;
		index=0;
		arr=new T[size];
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

template <class T>
MyArray<T>::~MyArray()
{
	delete []arr;
	arr=NULL;
}

template <class T>
void MyArray<T>::addelement(T value)
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

template <class T>
T MyArray<T>::getelement(int i)
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
	vector<char> vec;
	vec.push_back('a');  //insert
	
	MyArray<char> array(5);
	MyArray<char> arr;
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
