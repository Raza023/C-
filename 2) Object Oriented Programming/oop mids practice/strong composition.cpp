#include<iostream>
#include<string>

using namespace std;

class Book
{
	string name;
	string author;
	string publisher;
	int edition;
public:
	Book():name(" "),author(" "),publisher(" "),edition(0)
	{
		
	}
	Book(string n,string a,string p,int e):name(n),author(a),publisher(p),edition(e)
	{
		
	}
	~Book()
	{
		
	}
	void setBook(string n,string a,string p,int e)
	{
		name=n;
		author=a;
		publisher=p;
		edition=e;
	}
	string getName()
	{
		return name;
	}
	string getAuthor()
	{
		return author;
	}
	string getPublisher()
	{
		return publisher;
	}
	int getEdition()
	{
		return edition;
	}
};

class Course
{
	string courseName;
	string courseCode;
	Book textbook;
public:
	Course():courseName(" "),courseCode(" "),textbook()
	{
		
	}
	Course(string cn,string cc,string n,string a,string p,int e)
	{
		courseName=cn;
		courseCode=cc;
		textbook.setBook(n,a,p,e);
	}
	~Course()
	{
		
	}
	void print()
	{
		cout<<"Course name: "<<courseName<<endl;
		cout<<"Course Code: "<<courseCode<<endl;
		cout<<"Course details:-"<<endl;
		cout<<textbook.getName()<<" of edition "<<textbook.getEdition()<<" is the book written by "<<textbook.getAuthor()<<" and published by "<<textbook.getPublisher()<<endl;
	}
};

int main()
{
	Course OOP("Object Oriented Programming","CMP-142","Starting out with c++","Tonny Gaddis","Springer",7);
	OOP.print();
	return 0;
}
