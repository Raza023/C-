#include<iostream>
#include<fstream>

using namespace std;

//ios	Description
//ios::out	Open a file to write output
//ios::in	Open a file to read input
//ios::app	Open a file to append at the end
//ios::trunc	Truncate the existing file (default)
//ios::ate	Open a file without truncating, and allow data to be written anywhere in the file.

int main()
{
	ofstream fout;
	
	fout.open("rollno.txt", ios::app);
	
	fout<<"Hassan Raza"<<endl;
	fout<<"Ali Raza"<<endl;
	fout<<"Hussain Raza"<<endl;
	
	fout.close();
	
	ifstream fin;
	fin.open("rollno.txt",ios::in);
	
	if(fin)
	{
		char ch;
		while(!fin.eof())
		{
			ch=fin.get();
			cout<<ch;
		}
		fin.close();
	}
	else
	{
		cout<<"File not found."<<endl;
	}
	
	return 0;
}
