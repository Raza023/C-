#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("name");
	char ch;
	while(!fin.eof())
	{
		ch=fin.get();
		cout<<ch;
	}
	fin.close();
	return 0;
}
