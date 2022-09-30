#ifndef QUEUE_H
#define QUEUE_H

#pragma once

#include<iostream>
#include<string>

class queue
{
    int front,rear;
    Time data[SIZE];
public:
	queue();
	bool isFull();
	bool isEmpty();
	void insert(Time x);
	Time dequeue();
};

#endif //!QUEUE_H
