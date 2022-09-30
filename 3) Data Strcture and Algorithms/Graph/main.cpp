#include<iostream>
#include"Graph.h"
#include"Graph.cpp"
using namespace std;
int main()
{
	Graph<string> G1;

	G1.addNewVertex("A");
	G1.addNewVertex("B");
	G1.addNewVertex("C");
	G1.addNewVertex("D");
	G1.addNewVertex("E");
	G1.addNewVertex("F");
	G1.addNewVertex("G");
	G1.addNewVertex("H");

	G1.createConnection("A", "B");
	G1.createConnection("A", "C");
	G1.createConnection("A", "D");
	G1.createConnection("B", "A");
	G1.createConnection("B", "E");
	G1.createConnection("B", "F");
	G1.createConnection("C", "A");
	G1.createConnection("C", "G");
	G1.createConnection("D", "A");
	G1.createConnection("D", "H");
	G1.createConnection("E", "B");
	G1.createConnection("E", "H");
	G1.createConnection("F", "B");
	G1.createConnection("F", "H");
	G1.createConnection("G", "C");
	G1.createConnection("G", "H");
	G1.createConnection("H", "G");
	G1.createConnection("H", "D");
	G1.createConnection("H", "E");
	G1.createConnection("H", "F");

	G1.showAdjecentVertex("H");
	G1.displayallvertices();
	Graph<string> G2(10);
	G2.nameVertices();
	G2.displayallvertices();
}
