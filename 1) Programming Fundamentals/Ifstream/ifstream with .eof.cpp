#include<iostream>
#include<fstream>
using namespace std;

int main()                                   
{    
	string name;
	ifstream filein;
	filein.open("file.txt");
	cout<<"Reading data from file....."<<endl;
	while(!filein.eof())
	{
		filein>>name;
		cout<<name<<endl;
	}
	filein.close();
	return 0;
}

