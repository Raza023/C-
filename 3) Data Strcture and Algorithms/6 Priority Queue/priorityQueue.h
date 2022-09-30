#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#pragma once

#include<iostream>
#include<string>
#define SIZE 10

using namespace std;

template <class T>
class priorityQueue
{
    int front,rear;
    T pv[SIZE];
    T data[SIZE];
public:
	priorityQueue();
	bool isFull();
	bool isEmpty();
	void insert(T x,int p);   //enqueue
	T dequeue();
	void show();
};

#endif //!PRIORITYQUEUE_H
