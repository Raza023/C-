#ifndef QUEUE_H
#define QUEUE_H

#pragma once

#include<iostream>
#include<string>
#define SIZE 5

using namespace std;

template <class T>
class queue
{
    T front,rear;
    T data[SIZE];
public:
	queue();
	bool isFull();
	bool isEmpty();
	void insert(T x);   //enqueue
	T dequeue();
	void show();
};

#endif //!QUEUE_H
