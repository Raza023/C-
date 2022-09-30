#ifndef NODE_H
#define NODE_H

#pragma once

#include<iostream>
#include<string>

template <class T>
class node
{
	T x;
public:
	bool check;
	node *next;
	node();
	node(T v);
	T getX();
	void setX(T v);
};

#endif //!NODE_H
