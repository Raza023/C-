#include<iostream>
#include<fstream>
using namespace std;

int main()                                   
{    
	const int N=5;
	string name[N];
	ifstream filein;
	filein.open("file.txt");
	cout<<"Reading data from file....."<<endl;
	for(int i=0;i<N;i++)
	{
		filein>>name[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<name[i]<<endl;
	}
	filein.close();
	return 0;
}

