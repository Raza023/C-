#include<iostream>

using namespace std;

struct student
{
	string name;
	string rollNo;
	double cgpa;
	int semester;
};

struct date
{
	int dat;
	int mon;
	int year;
};

bool isEqual(student s,student st)
{
	if(s.name==st.name&&s.rollNo==st.rollNo&&s.cgpa==st.cgpa&&s.semester==st.semester)
	{
		return true;
	}
	else
	{
		return false;
	}
}

date getdate(date d)
{
	cout<<"Enter date of birth:- "<<endl;
	cout<<"Date: ";
	cin>>d.dat;
	cout<<"Month: ";
	cin>>d.mon;
	cout<<"Year: ";
	cin>>d.year;
	return d;
}

void print(const student &s)
{
	cout<<"Name of student : "<<s.name<<endl;
	cout<<"Roll No of student : "<<s.rollNo<<endl;
	cout<<"CGPA of student : "<<s.cgpa<<endl;
	cout<<"Semester of student : "<<s.semester<<endl;
}

int main()
{
	student st1={"Hassan Raza", "BITF19A023",3.82,3};
	
	student st2=st1;
	
	cout<<"Data of student 2:-"<<endl;
	print(st2);
	
	student st3;
	st3.name="Ali Raza";
	st3.rollNo="BITF19A023";
	st3.cgpa=3.82;
	st3.semester=3;
	
	if(isEqual(st1,st2))
	{
		cout<<"Students 1 and 2 are equal."<<endl;
	}
	else
	{
		cout<<"Students 1 and 2 are not equal."<<endl;
	}
	
	if(isEqual(st1,st3))
	{
		cout<<"Students 1 and 3 are equal."<<endl;
	}
	else
	{
		cout<<"Students 1 and 3 are not equal."<<endl;
	}
	
	cout<<"Name of student 1: "<<st1.name<<endl;
	cout<<"Roll No of student 1: "<<st1.rollNo<<endl;
	cout<<"CGPA of student 1: "<<st1.cgpa<<endl;
	cout<<"Semester of student 1: "<<st1.semester<<endl;
	
	student starr[3];
	
	for(int i=0;i<3;i++)
	{
		cout<<"Enter name of student "<<i+1<<": ";
		getline(cin,starr[i].name);
		cout<<"Enter Roll No of student "<<i+1<<": ";
		getline(cin,starr[i].rollNo);
		cout<<"Enter CGPA of student "<<i+1<<": ";
		cin>>starr[i].cgpa;
		cout<<"Enter Semester of student "<<i+1<<": ";
		cin>>starr[i].semester;
		cin.ignore(20,'\n');
	}
	
	for(int i=0;i<3;i++)
	{
		cout<<"Name of student "<<i+1<<": "<<starr[i].name<<endl;
		cout<<"Roll No of student "<<i+1<<": "<<starr[i].rollNo<<endl;
		cout<<"CGPA of student "<<i+1<<": "<<starr[i].cgpa<<endl;
		cout<<"Semester of student "<<i+1<<": "<<starr[i].semester<<endl;
	}
	
	int topidx=0;
	int top=starr[0].cgpa;
	for(int i=0;i<3;i++)
	{
		if(top<starr[i].cgpa)
		{
			top=starr[i].cgpa;
			topidx=i;
		}
	}
	
	cout<<starr[topidx].name<<" is topper of the class with "<<top<<" CGPA."<<endl;
	
	date birthday={0};
	
	birthday=getdate(birthday);
	
	cout<<birthday.dat<<"/"<<birthday.mon<<"/"<<birthday.year<<endl;
	
	return 0;
}
