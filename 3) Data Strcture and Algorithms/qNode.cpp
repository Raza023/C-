#include "qNode.h"
template<class T>
qNode<T>::qNode() { next = NULL; }
template<class T>
qNode<T>::qNode(T z) { data = z; next = NULL; }
template<class T>
T qNode<T>::getdata() { return data; }