#include<iostream>
#include<fstream>
using namespace std;



int main()                                   
{                    
	string name;                         
	ofstream fileout;                          
	fileout.open("E:\Chapter 4 PDF/file.txt");
	for(int i=0;i<10;i++)
	{
		cout<<"Enter name in file."<<endl;
		getline(cin,name);
		fileout<<name<<endl;
		cin.ignore();
	}
	fileout.close();
	return 0;
}

