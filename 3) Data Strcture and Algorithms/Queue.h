#pragma once
#include"qNode.h"
#include"qNode.cpp"
template<typename T>
class Queue
{
	qNode<T>* head;
public:
	Queue();
	void enQueue(T data);
	T deQueue();
	bool isEmpty();
	~Queue();
};
