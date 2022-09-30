#include "BST.h"
template<typename T>
Node<T>* BST<T>::Root = NULL;
template<typename T>
Node<T>* BST<T>::getRoot()
{
	return Root;
}

template<typename T>
Node<T>* BST<T>::findParent(Node<T>* r, Node<T>* p, T data)
{
	if (data < r->getData())
	{
		p = r;
		findParent(r->left, p, data);
	}
	else if (data > r->getData())
	{
		p = r;
		findParent(r->right, p, data);
	}
	else
	{
		if (Root->getData() == data)
		{
			return NULL;
		}
		return p;
	}
}


template<typename T>
bool BST<T>::deleteData(T data)
{
	Node<T>* s = searchData(Root, data);
	if (s)
	{
		Node<T>* p = findParent(Root, Root, data);
		if (s->left == NULL && s->right == NULL)
		{
			if (p->left && p->left->getData() == data)
			{
				delete s;
				p->left = NULL;
			}
			else
			{
				delete s;
				p->right = NULL;
			}
		}
		else if ((s->left != NULL && s->right == NULL) || (s->left == NULL && s->right != NULL))
		{
			if (s->left && (p->left && p->left->getData() == data))
			{
				p->left = s->left;
				delete s;
			}
			else if (s->right && (p->left && p->left->getData() == data))
			{
				p->left = s->right;
				delete s;
			}
			else if (s->left && (p->right && p->right->getData() == data))
			{
				p->right = s->left;
				delete s;
			}
			else if (s->right && (p->right && p->right->getData() == data))
			{
				p->right = s->right;
				delete s;
			}
		}
		else if (s->left && s->right)
		{
			Node<T>* inSuc = s->right;
			if (inSuc)
			{
				while (inSuc->left)
				{
					inSuc = inSuc->left;
				}
			}
			int deleted = inSuc->getData();
			deleteData(deleted);
			s->setData(deleted);
		}
		return true;
	}
	else {
		return false;
	}
}

template<typename T>
Node<T>* BST<T>::searchData(Node<T>* r, T data)
{
	if (r == NULL || r->getData() == data) {
		return r;
	}
	else {
		if (data <= r->getData())
			searchData(r->left, data);
		else
			searchData(r->right, data);
	}
}

template<typename T>
void BST<T>::inOrderTraversal(Node<T>* r)
{
	if (r == NULL) {
		return;
	}
	else {
		inOrderTraversal(r->left);
		cout << r->getData() << endl;
		inOrderTraversal(r->right);
	}
}

template<typename T>
void BST<T>::preOrderTraversal(Node<T>* r)
{
	if (r == NULL) {
		return;
	}
	else {
		cout << r->getData() << endl;
		preOrderTraversal(r->left);
		preOrderTraversal(r->right);
	}
}

template<typename T>
void BST<T>::postOrderTraversal(Node<T>* r)
{
	if (r == NULL) {
		return;
	}
	else {

		postOrderTraversal(r->left);
		postOrderTraversal(r->right);
		cout << r->getData() << endl;
	}
}

template<typename T>
void BST<T>::levelOrderTraversal(Node<T>* r)
{
	if (r != NULL)
	{
		Queue<Node<T>*> q;
		q.enQueue(r);
		while (!q.isEmpty())
		{
			Node<T>* n = q.deQueue();
			if (n->left != NULL)
			{
				q.enQueue(n->left);
			}
			if (n->right != NULL)
			{
				q.enQueue(n->right);
			}
			cout << n->getData() << endl;
		}
	}
}

template<typename T>
void BST<T>::insertData(T data, Node<T>*& r)
{
	if (r == NULL)
	{
		Node<T>* n = new Node<T>(data);
		r = n;
	}
	else {
		if (data <= r->getData())
		{
			insertData(data, r->left);
		}
		else
		{
			insertData(data, r->right);
		}
	}
}
template<typename T>
void BST<T>::cuttOut(Node<T>* r)
{
	if (r == NULL) 
	{
		return;
	}
	else 
	{
		cuttOut(r->left);
		cuttOut(r->right);
		delete r;
	}
}

template<typename T>
BST<T>::~BST()
{
	cuttOut(Root);
}
