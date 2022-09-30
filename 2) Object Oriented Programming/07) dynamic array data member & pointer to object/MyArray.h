#ifndef MYARRAY_H
#define MYARRAY_H

class MyArray   //class declaration.
{
private:
	int size;
	int index;
	int *arr;
public:
	MyArray(int s=10);
	~MyArray();
	void addElement(int val);
	int getElement(int i);
};

#endif //!MYARRAY_H
#pragma once
