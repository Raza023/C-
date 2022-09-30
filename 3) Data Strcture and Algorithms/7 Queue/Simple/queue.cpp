#include "queue.h"
#include<iostream>

using namespace std;

template <class T>
queue<T>::queue()
{
    rear=front=-1;
}
template <class T>
bool queue<T>::isFull()
{
    return (rear==SIZE-1);
}
template <class T>
bool queue<T>::isEmpty()
{
    return (front==-1 || front>rear);
}
template <class T>
void queue<T>::insert(T x)   //enqueue
{
    if (rear==-1)
	{   // first item is being inserted
        front=rear=0;
        data[rear]=x;
    }
    else
	{
        if (isFull())
        {
        	cout<<"Queue is full, can't enter "<<x<<"."<<endl;
		}
        else
        {
			data[++rear]=x;
		}
    }
}
template <class T>
T queue<T>::dequeue()
{
    if (!isEmpty())
	{
    	int st=front;
		T del=data[front++];
		int end=rear;
		for(int i=0;i<end;i++)
		{
			data[st]=data[front];
			st++;
			front++;
		}
		front=0;
		rear=end-1;
    	return del;
    }
    else
    {
        cout<<"Queue is empty ";
        return -999;
    }
}
template <class T>
void queue<T>::show()
{
    T store;
    if (!isEmpty())
	{
        store = front;
        while (store <= rear)
        {
        	cout<< data[store++] << " ";
		}
        cout<<"\n";
    }
    else
	{
        cout << "No data in queue";
    }
}
