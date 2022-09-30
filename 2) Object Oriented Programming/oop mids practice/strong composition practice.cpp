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
	Course():courseName(" "), courseCode(" "),textbook()
	{
		
	}
	Course(string cn,string cc,string n,string a,string p,int e)               //:courseName(" "), courseCode(" "),textbook();
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
		cout<<"Course Name: "<<courseName<<endl;
		cout<<"Course Code: "<<courseCode<<endl;
		cout<<"Textbook:-"<<endl;
		cout<<textbook.getName()<<" of "<<textbook.getEdition()<<"th edition written by "<<textbook.getAuthor()<<" published by "<<textbook.getPublisher()<<"."<<endl;
	}
};


int main()
{
	Course oop("Object Oriented Programing","CMP-142","Starting out with C++","Tonny Gaddis","Springer",7);
	oop.print();
	return 0;
}
