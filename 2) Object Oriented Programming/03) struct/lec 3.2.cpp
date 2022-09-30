#include<iostream>
#include<string>
using namespace std;


struct student      //ADT's
{
	string name;
	string rollNo;
	double cgpa;
	int semester;
};

bool isEqual(const student &s1,const student &s2)  //can call by reference as well.
{
	if(s1.name==s2.name&&s1.rollNo==s2.rollNo&&s1.cgpa==s2.cgpa&&s1.semester==s2.semester)
	{
		return true;
	}
	else
	{
		return false;
	}
}


	
int main()
{
	/*Two types of data types:
	1) primitive data types  (previusly)
		like int,char,bool,short,long,double,float.
	2) Abstract data types  (topic)
		Abstract data types are user defined data types.
		we will learn it in details.
	*/
	
	student std = {"Hassan Raza","BITF19A023",3.82,3};      //declaring and initializing a variable with abstract datatypes.
	
	student anotherstd;
	anotherstd=std;
	
	//int a=12;
	//int b;
	//b=a;
	
	if(isEqual(std,anotherstd))
	{
		cout<<"This data is about same student."<<endl;
	}
	else
	{
		cout<<"This data is about two different student."<<endl;
	}
	
	return 0;
}
