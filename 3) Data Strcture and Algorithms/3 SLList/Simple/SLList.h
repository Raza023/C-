#ifndef SLLIST_H
#define SLLIST_H

#pragma once

#include<iostream>
#include<string>

template <class T>
class SLList
{
    node<T> *first;
public:
    SLList();
    void append(int value);
    void insertDes(int val);
	void deleteFirst(int val);
	void deleteLast(int val);
	void deleteAll(int val);       // delete all occurrences of val
	int middle();
	double median();
	void show();
	~SLList();
};

#endif //!SLLIST_H
