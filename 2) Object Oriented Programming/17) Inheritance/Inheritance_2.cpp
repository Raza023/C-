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
	void printPerson()
	{
		cout<<"Name: "<<name<<endl;       //now can write name as well
		cout<<"Age: "<<age<<endl;              //now can write age as well
		cout<<"Gender: "<<getGender()<<endl;   //now can write gender as well
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
		printPerson();
		cout<<"Roll Number: "<<rollNo<<endl;
		cout<<"CGPA: "<<cgpa<<endl;	
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
