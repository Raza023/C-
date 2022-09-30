#include"BST.h"
#include"BST.cpp"
int main()
{
	BST<int> t;

	t.insertData(10);
	t.insertData(7);
	t.insertData(11);
	t.insertData(15);
	t.insertData(8);
	t.insertData(1);
	t.insertData(13);
	t.deleteData(1);
	t.inOrderTraversal(t.getRoot());
	//t.levelOrderTraversal(t.getRoot());
	//t.preOrderTraversal(t.getRoot());
}