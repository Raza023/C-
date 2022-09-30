#include <iostream>
#include "node.h"
#include "dlList.h"
#include "cdlList.h"
#include "node.cpp"
#include "dlList.cpp"
#include "cdlList.cpp"

using namespace std;

int main()
{
    dlList l1;
    l1.insertAtEnd(100);
    l1.insertAtEnd(40);
    l1.insertAtEnd(76);
    l1.insertAtEnd(189);
    l1.insertAtEnd(13);
    l1.show();
    
    l1.insertBefore(40, 400);
    l1.show();
    l1.insertBefore(100, 0);
    l1.show();
    l1.insertBefore(13, 45);
    l1.show();
    
    l1.insertAfter(13, 565);
    l1.show();
    l1.insertAfter(0, 77);
    l1.show();
    l1.insertAfter(189, 898);
    l1.show();
    l1.showReverse();
    l1.deleteNode(100);
    l1.show();
    l1.deleteNode(565);
    l1.show();
    l1.deleteNode(0);
    l1.show();
    l1.deleteNode(40);
    l1.show();
    
    cout << "-------------------------------------------\n";
    cdlList l2;
    l2.append(340);
    l2.append(50);
    l2.append(366);
    l2.append(78);
    l2.show();
    cout << "-------------------------------------------\n";
    l2.insertBefore(78, 444);
    l2.show();
    l2.insertBefore(366, 65);
    l2.show();
    l2.insertBefore(50, 521);
    l2.show();
    return 0;
}
