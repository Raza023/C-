#ifndef STACK_H
#define STACK_H

#pragma once

#include<iostream>
#include<string>

template <class T>
class stack
{
	int top;
	node<T> *first;
public:
	stack();
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
};

#endif //!STACK_H
