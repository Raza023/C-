//is a relationship (Inheritance)(wirasat)
//c++(specifications)->c(generalization)
//parrot(specification)(specific insitance)(specific class)(derive class or child class) is a -> bird(base class or parent class)(general class)(generalization)
//specific -> general asa show (data members and functions of general inherited and accessable in specific but not vice versa)
//one way relationship child(with additional members and functions as well)->parrent


//we studied that
/*
class Book()
{
	[-]string name
	[-]string author
	[-]int edition
	[+]void print()
	[+]string getname()
};
*/

/*
class Course()
{
	[-]string courseName
	[-]string courseCode
	[-]Book textbook
	[+]void print()
	[+]string getCourseName()
};
*/

//(UML)Unified Modeling Language(we will represent objects graphically) 
//in UML (is a) relationship 
//triangle->shape is a(arrow is either filled or hollow)
//right triangle->triangle->shape (shape datamembers are accessable in right triangle as well)
//Rectangle->Quadriletral->shape (shape datamembers are accessable in rectangle as well)

/*
class shape          //base class
{

};
class triangle       //derived class
{

};
*/

/*
Implementation
class person       //base class
{
	[-]string name;
	[-]int age;
	[-]char gender;
};
e.g.,class student,doctor,employee      //derived classes

*/



#include<iostream>
#include<string>

using namespace std;


class person        //base class
{
	string name;
	int age;
	char gender;
public:
	void setName(string name)
	{
		this->name=name;
	}
	void setAge(int a_age)   //a for argument avriable
	{
		this->age=a_age;
	}
	void setGender(char a_gender)
	{
		this->gender=a_gender;
	}
	string getName()
	{
		return name;
	}
	int getAge()   
	{
		return age;
	}
	char getGender()
	{
		return gender;
	}
};

class student: public person //now inherited         //derived class
{
	string rollNo;
	double cgpa;
public:
	void setRollNo(string roll)
	{
		this->rollNo=roll;
	}
	void setcgpa(double gpa)
	{
		this->cgpa=gpa;
	}
	void print()
	{
		//printPerson(); if not getName() use here.
		cout<<"Name: "<<getName()<<endl;       //if public so cant write name
		cout<<"Roll Number: "<<rollNo<<endl;
		cout<<"CGPA: "<<cgpa<<endl;
		cout<<"Age: "<<getAge()<<endl;
		cout<<"Gender: "<<getGender()<<endl;
	}
};

int main()
{
	student st;
	st.setName("Hassan Raza");
	st.setRollNo("BITF19A023");
	st.setAge(20);
	st.setGender('M');
	st.setcgpa(3.82);
	st.print();
	return 0;
}
