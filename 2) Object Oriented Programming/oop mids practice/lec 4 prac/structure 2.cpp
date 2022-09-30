#include<iostream>

using namespace std;

struct date //should write first
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
	int semester;
	date dob;
	int subjectCount;
	string *subject;
};

void print(const student &s)
{
	cout<<"Name of student : "<<s.name<<endl;
	cout<<"Roll No of student : "<<s.rollNo<<endl;
	cout<<"CGPA of student : "<<s.cgpa<<endl;
	cout<<"Semester of student : "<<s.semester<<endl;
	cout<<"DOB: "<<s.dob.dat<<"/"<<s.dob.mon<<"/"<<s.dob.year<<endl;
	for(int i=0;i<s.subjectCount;i++)
	{
		cout<<"Subject "<<i+1<<": "<<s.subject[i]<<endl;
	}
}

int main()
{
	student st;
	st.name="Hassan Raza";
	st.rollNo="Bitf19a023";
	st.cgpa=3.82;
	st.semester=3;
	st.dob.dat=12;
	st.dob.mon=12;
	st.dob.year=2000;
	st.subjectCount=3;
	st.subject=new string[st.subjectCount];
	for(int i=0;i<st.subjectCount;i++)
	{
		cout<<"Enter subject "<<i+1<<": ";
		cin>>st.subject[i];
	}
	
	print(st);
	
	delete []st.subject;
	
	student st2;
	student *stptr=&st2;
	
	(*stptr).name="Ali Raza";
	stptr->rollNo="Bitf19a001";
	stptr->cgpa=3.82;
	stptr->semester=3;
	stptr->dob.dat=12;
	stptr->dob.mon=12;
	stptr->dob.year=2000;
	stptr->subjectCount=3;
	stptr->subject=new string[stptr->subjectCount];
	
	for(int i=0;i<stptr->subjectCount;i++)
	{
		cout<<"Enter subject "<<i+1<<": ";
		cin>>stptr->subject[i];
	}
	
	print(st2);
	
	delete []stptr->subject;
	
	return 0;
}
