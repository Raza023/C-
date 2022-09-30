#include <iostream>
#include "node.h"
using namespace std;

int node::getData()
{
    return data;
}
node::node()
{
    data=0;
    prev=next=NULL;
}
node::node (int x){
    data =x;
    prev=next=NULL;
}
