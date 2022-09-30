#pragma once
#include<iostream>
#include<string>
using namespace std;
template<typename T>
class Graph
{
	T* vertices;
	int** edges;
	int noOfvertices;
public:
	Graph(int n);
	Graph();
	void nameVertices();
	bool addNewVertex(T);  //
	bool deleteVertex(T);
	int searchVertex(T);  //
	void displayallvertices();  //
	bool createConnection(T, T);
	bool deleteConnection(T, T);
	bool showAdjecentVertex(T);
	void pathBetween2Vertex(T, T);
	~Graph();
};

void InsertVertex(Course) // 2-marks 
	void InsertPair(Course,Course) // 2-marks 
	bool SearchVertex(Course) // 2-marks 
	void inorderTreversal() // 3-marks 
	void BSF(Course) // will also print the pre requisite Course of the Passed Course 
	void DSF(Course) // will also print the pre requisite Course of the Passed Course 
