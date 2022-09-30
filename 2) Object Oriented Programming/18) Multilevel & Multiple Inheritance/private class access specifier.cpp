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
		name=" ";
		age=20;
		gender='M';
		cout<<"Default Person is created....."<<endl;
	}
	Person(string n,int a, char g)
	{
		name=n;
		age=a;
		gender=g;
		cout<<"Parametrized Person is created....."<<endl;
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
	~Person()
	{
		cout<<"Person dies...."<<endl;
	}
};

class Student: Person // public Person //now inherited         //derived class
{
	string rollNo;
	double cgpa;
public:
	Student():Person()
	{
		rollNo=1;
		cgpa=3.82;
		cout<<"Default student is created....."<<endl;
	}
	Student(string n,int a,double g,string roll,double gpa): Person(n,a,g) //now parametized is called
	{
		rollNo=roll;
		cgpa=gpa;
		cout<<"Parametrized student is created....."<<endl;
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
	~Student()
	{
		cout<<"Student dies...."<<endl;
	}
};

int main()
{
	Student st("Hassan Raza",20,'M',"BITF19A023",3.82);
	//st.setName("Hassan Raza");
	//st.setRollNo("BITF19A023");
	//st.setAge(20);
	//st.setGender('M');
	//st.setcgpa(3.82);
	st.print();
	return 0;
}
