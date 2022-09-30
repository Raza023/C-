#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
	map<int,string> student;
	student.insert(pair<int,string>(1,"Ali"));
	student.insert(pair<int,string>(2,"Hassan"));
	student.insert(pair<int,string>(3,"Raza"));
	student.insert(pair<int,string>(4,"Jawad"));
	student.insert(pair<int,string>(5,"Hussain"));
	student.insert(pair<int,string>(6,"Qasim"));
	
	cout<<"Map size is: "<<student.size()<<endl;
	
	cout<<endl;
	
	for(map<int ,string>::iterator i=student.begin();i!=student.end();i++ )
	{
		cout<<"Key "<<i->first<<" has the name "<<i->second<<"."<<endl;
	}
	
	student[1]="Huzaifa";       //changing
	
	cout<<endl;
	cout<<"Changing: "<<endl;
	for(map<int ,string>::iterator i=student.begin();i!=student.end();i++ )
	{
		cout<<"Key "<<i->first<<" has the name "<<i->second<<"."<<endl;
	}
	
	map<int,string>::iterator it = student.find(1);
	student.erase(it);             //erasing
	
	cout<<endl;
	cout<<"Erasing:"<<endl;
	for(map<int ,string>::iterator i=student.begin();i!=student.end();i++ )
	{
		cout<<"Key "<<i->first<<" has the name "<<i->second<<"."<<endl;
	}
	
	return 0;
}
