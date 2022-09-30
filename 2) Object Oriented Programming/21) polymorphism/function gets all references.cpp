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
	//friend void hello(Person &p);
};

class Student: public Person // public Person //now inherited //derived class
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
};

class Teacher: public Person
{
	int salary;
	string designation;
public:
	Teacher(): Person()
	{
		salary=10000;
		designation="Lahore";
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

void hello(Person &refp)
{
	refp.whoiam();
	cout<<"Name: "<<refp.getName()<<endl;
	cout<<"Age: "<<refp.getAge()<<endl;
	cout<<"Gender: "<<refp.getGender()<<endl;
}

int main()
{
	Person p;
	Student s;
	Teacher t;
	
	Person per[3]={p,s,t};
	for(int i=0;i<3;i++)
	{
		per[i].whoiam();  //but will show only person solution is virtual functions.
	}
	
	Person *parr[3]={&p,&s,&t};
	for(int i=0;i<3;i++)
	{
		parr[i]->whoiam();
	}
	
	hello(p);
	hello(s);
	hello(t);
	return 0;
}
