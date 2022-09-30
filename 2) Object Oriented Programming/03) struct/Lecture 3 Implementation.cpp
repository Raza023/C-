#include<iostream>
#include<string>
using namespace std;

struct student 
{
	string name;
	int clas;
	int rollNo;
	double cgpa;
	int semester;
};

int main()
{
	student std={"Hassan Raza",13,23,3.82,3};
	
	student anotherstd;
	anotherstd.name="Ali Raza";
	anotherstd.clas=10;
	anotherstd.rollNo=24;
	anotherstd.cgpa=3.94;
	anotherstd.semester=4;
	
	student thirdstd[3];
	
	for(int i=0;i<3;i++)
	{
		cout<<"Enter Name: ";
		getline(cin,thirdstd[i].name);
		cout<<"Enter Class: ";
		cin>>thirdstd[i].clas;
		cout<<"Enter Roll #: ";
		cin>>thirdstd[i].rollNo;
		cout<<"Enter CGPA: ";
		cin>>thirdstd[i].cgpa;
		cout<<"Enter Semester: ";
		cin>>thirdstd[i].semester;
		cin.ignore();
	}
	
	cout<<"Name: "<<anotherstd.name<<endl;
	cout<<"Class: "<<anotherstd.clas<<endl;
	cout<<"Roll #: "<<anotherstd.rollNo<<endl;
	cout<<"CGPA: "<<anotherstd.cgpa<<endl;
	cout<<"Semester: "<<anotherstd.semester<<endl;	
	
	return 0;
}
