#include<iostream>
#include<string>
using namespace std; 

class Person
{
protected:
	string name;
	int age;
private: 
	char gender; 
public: 
	Person(): name("ALI"), age(20), gender('M')
	{
	//	cout << "Person is created!" << endl;
	}
/*	Person(string na, int a, char g) :name(na), age(a), gender(g)
	{
		cout << "Person is created by parametrized cons.!" << endl;
	}*/
	void setName(string name)
	{
		this->name = name;
	}
	void setAge(int a_age)
	{
		this->age = a_age;
	}
	void setGender(char a_gender)
	{
		this->gender = a_gender;
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
	virtual void print()
	{
		cout << "Name: " << getName() << endl;
		cout << "Age: " << getAge() << endl;
	}
	void whoiam()
	{
		cout << "I am Person" << endl;
	}
	virtual void inputData() = 0;
	virtual bool isOutstanding() = 0;
public: 
	virtual ~Person()
	{
	//	cout << "Person dies . . . " << endl;
	}
};

class Student : public Person 
{
	string rollNumber; 
	double cgpa;
public: 
	Student(): rollNumber("ABC123"), cgpa(3.3)
	{
//		cout << "Student is created!" << endl;
	}
/*	Student(string name, int age, char gender, string roll, double gpa) :Person(name, age, gender), rollNumber(roll), cgpa(gpa)
	{
		cout << "Student is created by parametrized const.!" << endl;
	}*/
	void inputData()
	{
		string name;
		cout << "Enter Name: "; 
		getline(cin,name); 
		setName(name);
		cout << "Enter rollNumber: ";
		getline(cin,rollNumber);
		cout << "cgpa: ";
		cin >> cgpa;
	}

	void setRollNo(string roll)
	{
		rollNumber = roll;
	}
	void setcgpa(double gpa)
	{
		cgpa = gpa;
	}
	void print()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Gender: " << getGender() << endl;
		cout << "Roll Number: " << rollNumber << endl;
		cout << "CGPA: " << cgpa << endl;
	}
	void whoiam()
	{
		cout << "I am Student" << endl;
	}
	~Student()
	{
		cout << "Student dies . . . " << endl;
	}
	virtual bool isOutstanding()
	{
		if (cgpa > 3.5)
			return true; 
		return false;
	}
};

class Teacher:public Person 
{
	int salary; 
	string designation;
	int publications; 
public:
	void inputData()
	{
		string name;
		cout << "Enter Name: ";
		getline(cin,name);
		setName(name);
		cout << "Enter designation:"; 
		getline(cin,designation); 
		cout << "Enter publications: "; 
		cin >> publications; 
	}
	
	void print()
	{
		cout << "designation: " << designation << endl;
		cout << "publications: " << publications << endl;
	}
 	void whoiam()
	{
		cout << "I am Teacher" << endl;
	}
	Teacher():salary(20000), designation("Teacher"), publications(0)
	{
	//	cout << "Teacher constructed." << endl;
	}
	~Teacher()
	{
		cout << "Teacher died." << endl;
	}
	virtual bool isOutstanding()
	{
		if (publications > 20)
			return true; 
		return false;
	}
};

void hello(Person& per)
{
	per.whoiam();
	cout << "Name: " << per.getName() << endl;
	cout <<"Gender: "<< per.getGender() << endl;
	cout <<"Age: "<< per.getAge() << endl;
}

int main()
{
	Person* ptrPerson[4];
	
	char choice; 
	for (int i = 0; i < 4; i++)
	{
		cout << "Do you want to create a teacher or a student? (t/s): ";
		cin >> choice;
		while(choice!='T'&&choice!='t'&&choice!='S'&&choice!='s')
		{
			cout<<"Invalid choice."<<endl;
			cout<<"Do you want to create a teacher or a student? (t/s): ";
			cin>>choice;
		}
		switch(choice)
		{
		case 's':
		case 'S': 
			ptrPerson[i] = new Student;
			break;
		case 't':
		case 'T':
			ptrPerson[i] = new Teacher;
			break;
		default:
			cout << "Invalid Input" << endl;
		}
		cin.ignore();
		ptrPerson[i]->inputData();
	}

	cout << endl << endl << "List of Students and Teachers: "<<endl;

	for(int i = 0; i < 4; i++)
	{
		ptrPerson[i]->print();
		if (ptrPerson[i]->isOutstanding())
		{
			cout << ptrPerson[i]->getName() << " is an outstanding Person." << endl;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		if (ptrPerson[i])                      //if(ptrPerson[i]!=NULL)
		{
			delete ptrPerson[i];
			ptrPerson[i] = NULL;
		}
	}
	return 0;
}
