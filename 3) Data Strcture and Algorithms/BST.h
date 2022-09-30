#pragma once
#include"Node.h"
#include"Node.cpp"
#include"Queue.h"
#include"Queue.cpp"
template<typename T>
class BST
{
private:
	static Node<T>* Root;
public:
	Node<T>* getRoot();
	Node<T>* findParent(Node<T>* r, Node<T>* parent, T data);
	void insertData(T data, Node<T>*& = Root);
	bool deleteData(T data);
	void cuttOut(Node<T>* r);
	Node<T>* searchData(Node<T>* r, T data);
	void inOrderTraversal(Node<T>* r);
	void preOrderTraversal(Node<T>* r);
	void postOrderTraversal(Node<T>* r);
	void levelOrderTraversal(Node<T>* r);
	~BST();
};
