#ifndef CDLL_H

#define CDLL_H

#pragma once

class cdlList
{
    node *first,*last;
public:
    cdlList();
    void append(int x);
    void show();
    bool insertBefore(int d, int x);
    node *searchNode(int x);
};

#endif
