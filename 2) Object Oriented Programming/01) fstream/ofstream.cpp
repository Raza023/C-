#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("name.txt" , ios::app);
	fout<<"Hassan Raza"<<endl;
	fout<<"Ali Raza"<<endl;
	fout<<"Hussain Raza"<<endl;
	fout.close();
	return 0;
}
