#include <iostream>
#include <string>

using namespace std;

class MyArray
{
	int size;
	int index;
	int* arr;
public:
	MyArray();
	MyArray(int s);  //initialize s=5 here
	MyArray(MyArray& myArr);
	~MyArray();
	void addElement(int val);
	int getElement(int i);
	void operator=(const MyArray& myArr);
	int& operator[](const int &i);  //optional& and const we need particular array index.
};

/*
MyArray::MyArray(MyArray &a)  //compiler constructor we should write our own for when dynamic.
{
	size=a.size;
	arr=a.arr;
}
*/

MyArray::MyArray(MyArray &myArr)
{
	cout << "*** Copy Constructor Called ****" << endl;
	size = myArr.size;
	index = myArr.index;
	arr = new int[size];
	for (int i = 0; i < size; i++)
		arr[i] = myArr.arr[i];
}

MyArray::MyArray()
{
	size=5;
	index=0;
	arr=new int[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=0;
	}
}


MyArray::MyArray(int s)
{
	cout << "*** Constructor Called ****" << endl;
	if (s > 0)
	{
		size = s;
		index = 0;
		arr = new int[size];
		for (int i = 0; i < size; i++)
			arr[i] = 0;
	}
	else
		cout << "Invalid array size" << endl;
}

MyArray::~MyArray()
{
	delete[]arr;
	arr = NULL;
	cout << "~~~ Destructor is Calling . . . ~~~" << endl;
}

void MyArray::addElement(int val)
{
	if (index < size)
	{
		arr[index] = val;
		index++;
	}
	else
		cout << "Array is full" << endl;
}

int MyArray::getElement(int i)
{
	if (i >= 0 && i < size)
		return arr[i];
	else
	{
		cout << "invalid index" << endl;
		return -1;
	}
}
void MyArray::operator=(const MyArray& myArr)
{
	cout << "*** assignment operaoter= called ****" << endl;
	if (arr != NULL)
	{
		delete[]arr;
		arr = NULL;
	}
	size = myArr.size;
	index = myArr.index;
	arr = new int[size];
	for (int i = 0; i < size; i++)
		arr[i] = myArr.arr[i];
}

int& MyArray::operator[](const int &i)
{
	if(i>=0 && i<size)
	{
		return arr[i];
	}
	else
	{
		cout<<"Error! Invalid index"<<endl;
		exit(0);
	}
}

int main()
{
	MyArray array(5);             //parametized size passed
	MyArray arr(5);               //assigning must use operator= for it.
	for (int i = 0; i < 5; i++)   //values stored but must be removed in operator=
	{
		cout<<"Enter values for arr: ";
		cin>>arr[i];
		//arr.addElement(i);
	}
		
	int a;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter values for array: "; 
		//cin >> a;
		//array.addElement(a); 
		cin>>array[i]; //yeah works
	}
	
	//MyArray arr=array;   //Initializing
	arr=array;		       //assigning must use operator= for it.

	
	cout << "After arr=array arr has following elements:- "<<endl; 
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;  //instead of arr.getElement(i);
	}
	cout<<arr[7];  //program will end with exit(0)
	//string str="Hello World";
	//str.at(2); same as
	//str[2];
	return 0;
}
