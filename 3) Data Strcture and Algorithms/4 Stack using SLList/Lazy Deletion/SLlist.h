#ifndef STACK_H
#define STACK_H

#pragma once

#include<iostream>
#include<string>

template <class T>
class SLlist
{
	//bool check;
	int top;
	node<T> *first;
public:
	SLlist();
	void push(T x);
	T pop();
	int empty();
	T topValue();
	void append(T var);
	void insertDes(T val);
	void deleteFirst(T val);
	void deleteLast(T val);
	void deleteAll(T val);
	void traverse();
	void deleteAt(int val);
	void getList(int arr[],int size);
	void lazyDelte(T val);
	~SLlist();
};

#endif //!STACK_H
