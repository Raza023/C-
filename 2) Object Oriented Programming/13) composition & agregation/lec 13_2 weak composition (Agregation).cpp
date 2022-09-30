#include<iostream>
#include<string>

using namespace std;

//Relationship chair
//lion animal ,bird ,aunt insect, we humen.
//composition  "has a" or "part-whole" relationship (one thing consists of(has a) several other things.) like car 
//strong(body,brain)(part-whole) or weak(car,engine)(has q)

/*
a course has a text book

class course
{
	string name
	int code
	book textbook
};

class book
{
	string name;
	string subject;
	int class;
};
*/

/*
class car
{
	string color;
	int seats;
	engine engin;
}; 
*/

/*
class engine
{
	string model;
	int power;
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
	Book *textBook;                                //or by refence      //make it pointer for weak composition(Aggregation).
public:
	
	Course():courseName(" "),courseCode(" "), textBook()
	{
		//cout<<"course constructed....."<<endl;
	}
	Course(string name,string code,Book &book)
	{
		//cout<<"course constructed....."<<endl;
		courseName=name;
		courseCode=code;
		textBook=&book;
	}
	~Course()
	{
		//cout<<"course destroyed....."<<endl;
	}
	void print()
	{
		cout << "Course Name: " << courseName << endl;
		cout << "Course code: " << courseCode << endl;
		cout << "Text book:- " << endl;
		if (textBook != NULL) 
		{
			cout << textBook->getName() << " by " << textBook->getAuthor() << endl;
			cout << "Publisher: " << textBook->getPublisher() << endl;
			cout << "Edition: " << textBook->getEdition() << "th" << endl;
		}
	}
	/*void print()
	{
		cout<<"Course Name: "<<courseName<<endl;
		cout<<"Course code: "<<courseCode<<endl;
		cout<<"Text book:- "<<endl;
		cout<<textBook->getName()<<" by "<<textBook->getAuthor()<<endl;
		cout<<"Publisher: "<<textBook->getPublisher()<<endl;
		cout<<"Edition: "<<textBook->getEdition()<<"th"<<endl;	
	}*/
};



int main()
{
	Book textBook("Starting out with c++","Tonny Gaddis","Springer",7);

	Course oop;//("Object Oriented Programming","CMP-142",textBook);
	oop.print();
	
	Course pf("Pragramming Fundamentals","CMP-141",textBook);
	pf.print();
	
	return 0;
}
