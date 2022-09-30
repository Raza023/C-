#pragma once
#include<iostream>
#include<string>
#include<stdlib.h>
#include<ctime>
using namespace std;
template<typename T>
class Node
{
private:
	T data;
public:
	Node<T>* left, * right;
	Node(T Data);
	void setData(T);
	T getData();
	~Node();
};