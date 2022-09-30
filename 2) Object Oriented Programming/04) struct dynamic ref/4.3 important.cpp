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
	int subjectCount;
	string *subjects;       //we will deal it dynamically.
};

void print(const student &s)  //const  means values won't change & saves time and execution time.
{
	cout<<"Name: "<<s.name<<endl;
	cout<<"Roll number: "<<s.rollNo<<endl;
	cout<<"CGPA: "<<s.cgpa<<endl;
	cout<<"Date of Birth: "<<s.dob.dat<<"-"<<s.dob.mon<<"-"<<s.dob.year<<endl;
	cout<<"No of subjects: "<<s.subjectCount<<endl;
	cout<<"Subjects:- "<<endl;
	for(int i=0;i<s.subjectCount;i++)
	{
		cout<<s.subjects[i]<<endl;
	}
}

int main()
{
	student st;
	st.name="Hassan Raza";
	//string *ptr;  //wo can do that.
	//ptr=&st.name;
	st.rollNo="BITF19A023";
	st.cgpa=3.82;
	st.dob.dat=12;
	st.dob.mon=12;
	st.dob.year=2000;
	st.subjectCount=5;
	st.subjects =new string[st.subjectCount];
	
//	int x;
//	cin>>x;
//	cin.ignore(20,'\n');
	
	for(int i=0;i<st.subjectCount;i++)
	{
		cout<<"Enter subject "<<i+1<<": ";
		getline(cin,st.subjects[i]);
	}
	
	print(st);
	
	delete []st.subjects;
	
	cout<<endl;
	
	student st2;
	student *stptr=&st2;
	//pointer to structure dereferencing.
	(*stptr).name="Hassan Raza";      //same as following
	(*stptr).rollNo="BITF19A023";  //precedence of dot operator is high so we use parenthesis to dereference.
	stptr->cgpa=3.82;
	stptr->dob.dat=12;
	stptr->dob.mon=12;
	stptr->dob.year=2000;
	stptr->subjectCount=3;
	stptr->subjects=new string[stptr->subjectCount];
	
	for(int i=0;i<stptr->subjectCount;i++)
	{
		cout<<"Enter subject "<<i+1<<": ";
		getline(cin,stptr->subjects[i]);
	}
	
	print(st2);
	
	delete []stptr->subjects;
	
	return 0;
}
