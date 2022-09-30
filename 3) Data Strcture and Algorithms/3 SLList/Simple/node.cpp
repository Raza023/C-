#include "node.h"
#include<iostream>

using namespace std;

template <class T>
node<T>::node()
{
	next=NULL;
}

template <class T>
node<T>::node(T v)
{
	x=v;
	next=NULL;
}

template <class T>
T node<T>::getX()
{
	return x;
}

template <class T>
void node<T>::setX(T v)
{
	x=v;
}
