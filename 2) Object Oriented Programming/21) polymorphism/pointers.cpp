#include<iostream>
#include<string>

using namespace std;

//private koi na la
//protected mara ilawa koi na la     concept only in inheritence
//public sab la

class Person        //base class
{
protected:
	string name;
	int age;
private:
	char gender;
public:
	Person()
	{
		name="Hassan Raza";
		age=20;
		gender='M';
		//cout<<"Default Person is created....."<<endl;
	}
	Person(string n,int a, char g)
	{
		name=n;
		age=a;
		gender=g;
		//cout<<"Parametrized Person is created....."<<endl;
	}
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
	void printPerson()
	{
		cout<<"Name: "<<getName()<<endl;       //now can write name as well
		cout<<"Age: "<<age<<endl;              //now can write age as well
		cout<<"Gender: "<<getGender()<<endl;   //now can write gender as well
	}
	virtual void whoiam()
	{
		cout<<"I am a person."<<endl;
	}
	~Person()
	{
		//cout<<"Person dies...."<<endl;
	}
	friend void hello(Person &p);
};

void hello(Person &p)
{
	cout<<"Name: "<<p.name<<endl;
	cout<<"Age: "<<p.age<<endl;
	cout<<"Gender: "<<p.gender<<endl;
	//cout<<"Roll Number: "<<p.rollNo<<endl; so parent's friend can't be a child's friend
	//cout<<"CGPA: "<<p.cgpa<<endl;
}


class Student: public Person // public Person //now inherited         //derived class
{
	string rollNo;
	double cgpa;
public:
	Student():Person()
	{
		rollNo="BITF19A023";
		cgpa=3.82;
		//cout<<"Default student is created....."<<endl;
	}
	Student(string n,int a,double g,string roll,double gpa): Person(n,a,g) //now parametized is called
	{
		rollNo=roll;
		cgpa=gpa;
		//cout<<"Parametrized student is created....."<<endl;
	}
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
		//printPerson();
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Gender: "<<getGender()<<endl;  //because it's private
		cout<<"Roll Number: "<<rollNo<<endl;
		cout<<"CGPA: "<<cgpa<<endl;	
	}
	void whoiam()
	{
		//Person::whoiam();     //function overriding
		cout<<"I am a student."<<endl;
	}
	~Student()
	{
		//cout<<"Student dies...."<<endl;
	}
	friend void hello(Student &st);
};

void hello(Student &st)
{
	cout<<"Name: "<<st.name<<endl;        //because child's friend is a parent's friend
	cout<<"Age: "<<st.age<<endl;
	cout<<"Gender: "<<st.getGender()<<endl;
	cout<<"Roll Number: "<<st.rollNo<<endl;
	cout<<"CGPA: "<<st.cgpa<<endl;
}

class Teacher: public Person
{
	int salary;
	string designation;
public:
	Teacher()
	{
		//cout<<"Teacher Constructed."<<endl;
	}
	void whoiam()
	{
		cout<<"I am a teacher."<<endl;
	}
	~Teacher()
	{
		//cout<<"Teacher Destructed."<<endl;
	}
};

int main()
{
	Person p;
	p.whoiam();
	
	Person* ptrP;
	ptrP=&p;
	ptrP->whoiam();
	
	Person &refP=p; //lazmi at the time of declaration 
	//p=&refP;  // no opertor= function overloading
	refP.whoiam();
	
	Student std;
	std.whoiam();
	
	Student* ptrS=new Student[5];
	for(int i=0;i<5;i++)
	{
		ptrS[i].whoiam();   //use . here
	}
	delete []ptrS;
	
	/*
	Student* ptrS;
	ptrS=&std;
	ptrS->whoiam();
	ptrS->setName("Hassan Raza");
	cout<<ptrS->getName()<<endl;
	*/
	Student &refS=std;
	refS.whoiam();
	refS.setName("Hassan Raza");
	cout<<refS.getName()<<endl;
	refS.print();
	
	Person* ptrPr;
	ptrPr=&std;  //porson can also point to teacher and student
	ptrPr->whoiam();
	
	Person &refPr=std;
	refPr.whoiam();   //now only of person
	refPr.printPerson();// cant print student members
	
	Teacher t;
	t.whoiam();
	
	Teacher* ptrT;
	ptrT=&t;
	ptrT->whoiam();
	
	Teacher &refT=t;
	refT.whoiam();
	
	return 0;
}
