#include "Node.h"
template<typename T>
Node<T>::Node(T Data)
{
	data = Data;
	left = NULL;
	right = NULL;
}

template<typename T>
void Node<T>::setData(T d)
{
	data = d;
}

template<typename T>
T Node<T>::getData()
{
	return data;
}

template<typename T>
Node<T>::~Node()
{

}