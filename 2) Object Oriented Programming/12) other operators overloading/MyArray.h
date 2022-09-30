#ifndef MYARRAY_H
#define MYARRAY_H
//#include "MyClass.h"



class MyArray
{
	int size;
	int index;
	int* arr;
public:
	MyArray(int s = 5);
	MyArray(MyArray& myArr);
	~MyArray();
	void addElement(int val);
	int getElement(int i);
	void operator=(const MyArray& myArr);
	int& operator[](const int &i);  //optional& and const we need particular array index.
};

#endif // !MYARRAY_H
