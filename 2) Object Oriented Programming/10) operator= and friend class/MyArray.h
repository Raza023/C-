#ifndef MYARRAY_H
#define MYARRAY_H

#pragma once

class MyArray
{
	int size;
	int index;
	int* arr;
public:
	MyArray(int s = 10);
	MyArray(const MyArray& myArr);
	~MyArray();
	void addElement(int val);
	int getElement(int i);
	void operator=(const MyArray& myArr);
};

#endif // !MYARRAY_H
