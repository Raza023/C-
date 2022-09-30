#include<iostream>
#include<string>
using namespace std;

struct date//should write first
{
	int dat;
	int mon;
	int year;
};

struct student
{
	string name;
	string rollNo;
	double cgpa;
	date dob;
};

void print(const student &s)  //const  means values won't change & saves time and execution time.
{
	cout<<"Name: "<<s.name<<endl;
	cout<<"Roll number: "<<s.rollNo<<endl;
	cout<<"CGPA: "<<s.cgpa<<endl;
	cout<<"Date of Birth: "<<s.dob.dat<<"-"<<s.dob.mon<<"-"<<s.dob.year<<endl;
}

int main()
{
	student std;
	std.name="Hassan Raza";
	//string *ptr;  wo can do that.  it's primitive
	//ptr=&st.name;
	std.rollNo="BITF19A023";
	std.cgpa=3.82;
	std.dob.dat=12;
	std.dob.mon=12;
	std.dob.year=2000;
	
	print(std);
	
	cout<<endl;
	
	student st2;
	student *stptr=&st2;
	//pointer to structure dereferencing.
	stptr->name="Ali Raza";
	stptr->rollNo="BITF19A013";
	(*stptr).cgpa=3.82;           //precedence of dot operator is high so we use parenthesis to dereference. same as following
	stptr->dob.dat=12;
	stptr->dob.mon=12;
	stptr->dob.year=2000;
	
	print(st2);
	
	return 0;
}
