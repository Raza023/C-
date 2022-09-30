#include "MinHeap.h"
MinHeap::MinHeap():size(50){
	tree = new Student[size];
	top = -1;
}

bool MinHeap::Insert(Student a) {
	tree[++top] = a;
	int top2 = top;
	int parent = (top2 - 1) / 2;
	Student temp;
	if (top > 0) {
		while (tree[top2] < tree[parent]) {
			temp = tree[parent];
			tree[parent] = tree[top2];
			tree[top2] = temp;
			top2 = parent;
			parent = (top2 - 1) / 2;
		}
	}
	return true;
}

Student* MinHeap::getHeapArray()const {
	if (tree != NULL)return tree;
	else return NULL;
}
void MinHeap::displayHeap() {
	for (int i = 0; i <= top; i++) {
		cout << tree[i] << endl;
	}
}

bool MinHeap::Remove() {
	if (top == 0) {
		top--;
		return true;
	}
	tree[0] = tree[top];
	top--;
	int i = 0;
	int leftChild = (2 * i + 1);
	int rightChild = (2 * i + 2);
	Student left;
	Student right;
	Student temp;
	int count = 0;
	while (count <= top){
		left = tree[leftChild];
		right = tree[rightChild];
		if (left.getStudentID() == "\0") {
			left = tree[i];
			break;
		}
		if (right.getStudentID() == "\0") {
			right = tree[i];
			break;
		}
		if (left > right) {
			temp = tree[rightChild];
			tree[rightChild] = tree[i];
			tree[i] = temp;
			i = rightChild;
			leftChild = (2 * i + 1);
			rightChild = (2 * i + 2);
		}
		else if (left < right) {
			temp = tree[leftChild];
			tree[leftChild] = tree[i];
			tree[i] = temp;
			i = leftChild;
			leftChild = (2 * i + 1);
			rightChild = (2 * i + 2);
		}
		count++;
	}
	return true;
}
bool MinHeap::Replace(Student old_std, Student new_std) {
	for (int i = 0; i <= top; i++) {
		if (tree[i] == old_std) {
			tree[i] = tree[top];
			top--;
			int leftChild = (2 * i + 1);
			int rightChild = (2 * i + 2);
			Student left;
			Student right;
			Student temp;
			int count = i;
			while (count <= top) {
				left = tree[leftChild];
				right = tree[rightChild];
				if (left.getStudentID() == "\0") {
					left = tree[i];
					break;
				}
				if (right.getStudentID() == "\0") {
					right = tree[i];
					break;
				}
				if (left > right) {
					temp = tree[rightChild];
					tree[rightChild] = tree[i];
					tree[i] = temp;
					i = rightChild;
					leftChild = (2 * i + 1);
					rightChild = (2 * i + 2);
				}
				else if (left < right) {
					temp = tree[leftChild];
					tree[leftChild] = tree[i];
					tree[i] = temp;
					i = leftChild;
					leftChild = (2 * i + 1);
					rightChild = (2 * i + 2);
				}
				count++;
			}
			this->Insert(new_std);
			return true;
		}
	}
	return false;
}
MinHeap::~MinHeap() {
	delete []tree;
	if (tree != NULL)tree == NULL;
}