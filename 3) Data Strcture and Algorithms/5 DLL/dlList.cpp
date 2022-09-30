#include <iostream>
#include "node.h"
#include "dlList.h"

using namespace std;

dlList::dlList()
{
    first=last=NULL;
}
void dlList::insertAtStart(int var)
{
	node *temp=new node(var);
	if(first==NULL)
	{
		first=temp;
		last=temp;
	}
	else
	{
		temp->next=first;
		first->prev=temp;
		first=temp;
	}
}
void dlList::insertAtEnd(int var)     //append
{
	node *temp=new node(var);
	if(last==NULL)
	{
		first=temp;
		last=temp;
	}
	else
	{
		last->next=temp;
		temp->prev=last;
		last=temp;
	}
}
/*
bool dlList::insert(int x)
{
    node *temp=new node(x);
    if (temp==NULL)
	{
        return false;
    }
    if (first==NULL){  // Is it first node of the list
        first=last=temp;
        return true;
    }
    else{   // append
        last->next=temp;
        temp->prev=last;
        last=temp;
        return true;
    }
    
}*/
node *dlList::searchNode(int x)
{
    node *temp;
    temp=first;
    while (temp!=NULL && temp->getData()!=x)
    {
    	temp = temp->next;
	}
    return temp;
}
bool dlList::insertBefore(int d, int x)
{
    node *sn, *t;
    sn = searchNode(d);
    if (sn==NULL)
    {
    	return false;
	}
    t=new node(x);
    if (sn==first)
	{
        t->next = first;
        first->prev = t;
        first = t;
    }
    else{
        t->prev = sn->prev;
        t->next = sn;
        sn->prev->next = t;
        sn->prev = t;
    }

    return true;
}
bool dlList::insertAfter(int d, int x)
{
    node *sn, *t;
    sn = searchNode(d);
    if (sn==NULL)
    {
    	return false;
	}
    t=new node(x);
    if (sn==last)
	{
        t->prev = last;
        last->next = t;
        last = t;
    }
    else
	{
        t->next=sn->next;
        t->prev=sn;
        sn->next->prev = t;
        sn->next = t;
    }
    return true;
}
bool dlList::deleteNode(int x)
{// delete first occurrence
    node *sn;
    sn = searchNode(x);
    if (sn!=NULL)
    {
        if (first==last)
        {
            first=last=NULL;
        }
        else if (sn==first)
        {
            first=first->next;
            first->prev = NULL;
        }
        else if (sn==last)
        {
            last = last->prev;
            last->next=NULL;
        }
        else
        {
            sn->prev->next = sn->next;
            sn->next->prev = sn->prev;
        }
        delete sn;
        return true;
    }
    return false;
}
void dlList::show()
{
    node *temp;
    temp=first;
    while (temp!=NULL)
	{
        cout << temp->getData()<<" - ";
        temp = temp->next;
    }
    cout<< "\n";
}
void dlList::showReverse()
{
    node *temp;
    temp=last;
    while (temp!=NULL)
	{
        cout << temp->getData()<<" - ";
        temp = temp->prev;
    }
    cout<< "\n";
}

