#include "priorityQueue.h"
#include<iostream>

using namespace std;

template <class T>
priorityQueue<T>::priorityQueue()
{
    rear=front=-1;
}

template <class T>
bool priorityQueue<T>::isFull()
{
    return (rear==SIZE-1);
}

template <class T>
bool priorityQueue<T>::isEmpty()
{
    return (front==-1 || front>rear);
}

template <class T>
void priorityQueue<T>::insert(T x,int p)   //enqueue
{
    if(rear==-1)
	{   // first item is being inserted
        front=rear=0;
        data[rear]=x;
        pv[rear]=p;
    }
    else
	{
        if (isFull())
        {
        	cout<<"Queue is full, can't add "<<x<<"."<<endl;
		}
        else
        {
        	if(p<=pv[front])
        	{
        		int end=rear+1;
        		int s=end;
        		for(int i=0;i<end;i++)
        		{
        			data[s]=data[rear];
        			pv[s]=pv[rear];
        			s--;
        			rear--;
				}
				data[0]=x;
        		pv[0]=p;
				rear=end;
			}
			else if(p>=pv[rear])
			{
				rear++;
				data[rear]=x;
				pv[rear]=p;
			}
			else
			{
				int need=rear;
				int st=front;
				int count=0;
				bool check=true;
				while(check)
				{
					if(p>=pv[st])
					{
						count++;
						st++;
					}
					else
					{
						check=false;
					}
				}
				int end=rear-count+1;
				int last=rear+1;
				for(int i=0;i<end;i++)
				{
					data[last]=data[rear];
        			pv[last]=pv[rear];
        			last--;
        			rear--;
				}
				data[count]=x;
        		pv[count]=p;
				rear=need+1;
			}
		}
    }
}

template <class T>
T priorityQueue<T>::dequeue()
{
    if (!isEmpty())
	{
		int st=front;
		T delval=data[front];
		int pval=pv[front];
		front++;
		int end=rear;
		for(int i=0;i<end;i++)
		{
			data[st]=data[front];
			pv[st]=pv[front];
			st++;
			front++;
		}
		front=0;
		rear=end-1;
		return delval;
    	//cout<<"Deleted: "<<delval<<"-"<<pval<<endl;
    }
    else
    {
        cout<<"Can't dequeue, queue is empty "<<endl;
        return -999;
    }
}

template <class T>
void priorityQueue<T>::show()
{
    T store;
    if (!isEmpty())
	{
        store = front;
        while (store <= rear)
        {
        	cout<<data[store]<<"-"<<pv[store]<<"\n";
        	store++;
		}
        cout<<"\n";
    }
    else
	{
        cout << "No data in queue";
    }
}
