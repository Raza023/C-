#pragma once
#ifndef MaxHeap_H
#define MaxHeap_H
#include "Student.h"
class MinHeap
{
private:
	Student* tree;
	const int size;
	int top;
public:
	MinHeap();
	bool Insert(Student);
	Student* getHeapArray()const;
	bool Remove();
	void displayHeap();
	bool Replace(Student old_std, Student new_std);
	~MinHeap();
};
#endif // !MaxHeap_H


