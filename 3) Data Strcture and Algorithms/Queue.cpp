#include "Queue.h"
template <typename T>
Queue<T>::Queue()
{
	head = NULL;
}
template <typename T>
void Queue<T>::enQueue(T data)
{
	qNode<T>* node = new qNode<T>(data);
	if (isEmpty())
	{
		head = node;
	}
	else {
		qNode<T>* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = node;
	}
}

template <typename T>
T Queue<T>::deQueue()
{
	if (!isEmpty())
	{
		T data = head->getdata();
		qNode<T>* temp = head;
		head = head->next;
		delete temp;
		return data;
	}
}
template <typename T>
bool Queue<T>::isEmpty()
{
	if (head == NULL) {
		return true;
	}
	else {
		return false;
	}
}
template <typename T>
Queue<T>::~Queue()
{
	qNode<T>* temp = head;
	if (temp != NULL)
	{
		do {
			head = temp->next;
			delete temp;
			temp = head;
		} while (temp != NULL);
	}
}