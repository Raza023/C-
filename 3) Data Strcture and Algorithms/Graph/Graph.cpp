#include "Graph.h"
template<typename T>
Graph<T>::Graph(int n)
{
	if (n > 0)
	{
		noOfvertices = n;
		vertices = new T[noOfvertices];
		edges = new int * [noOfvertices];
		for (int i = 0; i < noOfvertices; i++)
		{
			edges[i] = new int[noOfvertices];
		}
		for (int i = 0; i < noOfvertices; i++)
		{
			vertices[i] = "";
			for (int j = 0; j < noOfvertices; j++)
			{
				edges[i][j] = 0;
			}
		}
	}
}

template<typename T>
Graph<T>::Graph()
{
	noOfvertices = 0;
	edges = NULL;
	vertices = NULL;
}

template<typename T>
void Graph<T>::nameVertices()
{
	string n;
	for (int i = 0; i < noOfvertices; i++)
	{
		cout << "Vertex " << i + 1 << " :";
		cin >> n;
		while (searchVertex(n) != -1)
		{
			cout << "That vertex is already in the Garph... Chose another name for it: ";
			cin >> n;
		}
		vertices[i] = n;
	}
}

template<typename T>
bool Graph<T>::addNewVertex(T v)
{
	if (searchVertex(v)==-1)
	{
		if (noOfvertices == 0)
		{
			noOfvertices++;
			vertices = new T[noOfvertices];
			vertices[noOfvertices - 1] = v;
			edges = new int * [noOfvertices];
			for (int i = 0; i < noOfvertices; i++)
			{
				edges[i] = new int[noOfvertices];
			}
			edges[0][0] = 0;
		}
		else
		{
			T* vrts = new T[noOfvertices + 1];
			int** nE = new int * [noOfvertices + 1];
			for (int i = 0; i < noOfvertices+1; i++)
			{
				nE[i] = new int[noOfvertices+1];
			}
			for (int i = 0; i < noOfvertices; i++)
			{
				vrts[i] = vertices[i];
			}
			vrts[noOfvertices] = v;
			for (int i = 0; i <= noOfvertices; i++)
			{
				for (int j = 0; j <= noOfvertices; j++)
				{
					nE[i][j] = 0;
				}
			}
			for (int i = 0; i < noOfvertices; i++)
			{
				for (int j = 0; j < noOfvertices; j++)
				{
					nE[i][j] = edges[i][j];
				}
			}
			for (int i = 0; i < noOfvertices; i++)
			{
				delete edges[i];
			}
			noOfvertices++;
			delete[] edges;
			edges = nE;
			delete[] vertices;
			vertices = vrts;
			
		}
		return true;
	}
	else {
		return false;
	}
}

template<typename T>
bool Graph<T>::deleteVertex(T)
{
	return false;
}

template<typename T>
int Graph<T>::searchVertex(T v)
{
	for (int i = 0; i < noOfvertices; i++)
	{
		if (vertices[i] == v)
		{
			return i;
		}
	}
	return -1;
}

template<typename T>
void Graph<T>::displayallvertices()
{
	for (int i = 0; i < noOfvertices; i++)
	{
		cout << vertices[i] << endl;
	}
}

template<typename T>
bool Graph<T>::createConnection(T v1, T v2)
{
	int i = searchVertex(v1);
	int j = searchVertex(v2);
	if (i != -1 && j != -1)
	{
		edges[i][j] = 1;
		return true;
	}
	else {
		return false;
	}
}
template<typename T>
bool Graph<T>::deleteConnection(T, T)
{
	return false;
}

template<typename T>
bool Graph<T>::showAdjecentVertex(T v)
{
	int i = searchVertex(v);
	if (i != -1)
	{
		for (int j = 0; j < noOfvertices; j++)
		{
			if (edges[i][j] != 0)
			{
				cout << vertices[j] << " ";
			}
		}
		cout << endl;
		return true;
	}
	return false;
}

template<typename T>
void Graph<T>::pathBetween2Vertex(T, T)
{
}

template<typename T>
Graph<T>::~Graph()
{
	if (edges)
	{
		for (int i = 0; i < noOfvertices; i++)
		{
			delete edges[i];
		}
		delete[] edges;
		delete[] vertices;
	}
}