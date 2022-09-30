#include<iostream>
#include<string>

using namespace std;

//Relationship chair
//lion animal, sparrow bird, aunt insect.
//composition "has a" or "part-whole" relationship(one thing consists of(has a) several other things.) like car 
//has a,compsed of(composition),consists of,containment(contained of), part-whole
//strong(body,brain)(part-whole) or weak(car,engine)(has a)
//in strong association(composition) course<\>-book
//in weak association(aggregation) course<>-book

/*
a course has a text book

class book
{
	string name;
	string subject;
	int class;
};

class course
{
	string name
	int code
	book textbook
};

*/

/*
class engine
{
	string model;
	int power;	
};

class car
{
	string color;
	int seats;
	engine engin;	
};
*/



class Book
{
	string name;
	string author;
	string publisher;
	int edition;
public:
	Book():name(" "), author(" "), publisher(" "), edition(0)
	{
		//cout<<"Book constructor......"<<endl;
	}
	Book(string na,string au,string pub,int ed):name(na),author(au),publisher(pub),edition(ed)
	{
		//cout<<"Book constructor......"<<endl;
	}
	~Book()
	{
		//cout<<"Book Destroyed!"<<endl;
	}
	void setBook(string na,string au,string pub,int ed)
	{
		name=na;
		author=au;
		publisher=pub;
		if(ed<1)
		{
			ed=1;
		}
		edition=ed;
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

class Course  //strong composition when course destroy book destroy.
{
	string courseName;
	string courseCode;
	Book textBook;
public:
	Course():courseName(" "),courseCode(" "),textBook() //default in default
	{
		//cout<<"course constructed....."<<endl;
	}
	Course(string name,string code,string bname,string bauthor,string bpub,int bed)
	{
		//cout<<"course constructed....."<<endl;
		courseName=name;
		courseCode=code; 
		textBook.setBook(bname, bauthor, bpub, bed);
	}
	~Course()
	{
		//cout<<"course destroyed....."<<endl;
	}
	void print()
	{
		cout<<"Course Name: "<<courseName<<endl;
		cout<<"Course code: "<<courseCode<<endl;
		cout<<"Text book:- "<<endl;
		cout<<textBook.getName()<<" by "<<textBook.getAuthor()<<endl;
		cout<<"Publisher: "<<textBook.getPublisher()<<endl;
		cout<<"Edition: "<<textBook.getEdition()<<"th"<<endl;
	}
};



int main()
{
	Course oop;//("Object Oriented Programming","CMP-142","Starting out with c++","Tonny Gaddis","Springer",7);
	oop.print();
	
	cout<<endl;
	
	Course pf("Programming Fundamentals","CMP-141","Starting out with c++","Tonny Gaddis","Springer",7);
	pf.print();
	return 0;
}
