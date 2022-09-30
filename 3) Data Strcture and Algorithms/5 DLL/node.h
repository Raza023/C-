#ifndef NODE_H

#define NODE_H

#pragma once

class node
{
    int data;
public:
    node *next, *prev;
    int getData();
    node();
    node (int x);
};

#endif
