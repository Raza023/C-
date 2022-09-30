#pragma once
#include<iostream>
using namespace std;
template<class T>
class qNode
{
	T data;
public:
	qNode<T>* next;
	qNode();
	qNode(T z);
	T getdata();
};