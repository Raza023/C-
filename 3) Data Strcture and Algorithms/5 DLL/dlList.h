#ifndef DLL_H

#define DLL_H

#pragma once

class dlList
{
    node *first,*last;
public:
    dlList();
    //bool insert(int x);
    void insertAtStart(int var);
	void insertAtEnd(int var);
    node *searchNode(int x);
    bool insertBefore(int d, int x);
    bool insertAfter(int d, int x);
    bool deleteNode(int x);
    void show();
    void showReverse();
};

#endif
