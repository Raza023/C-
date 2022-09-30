#include<iostream>
#include<string>

using namespace std;


class Engine
{
	int eng_num;
public:
	Engine();
	Engine(int en);
	void setEngNum(int en);
	int getEngNum();
	~Engine();
};

Engine::Engine()
{
	eng_num=0;
}
Engine::Engine(int en)
{
	if(en<1)
	{
		en=1;
	}
	eng_num=en;
}
void Engine::setEngNum(int en)
{
	if(en<1)
	{
		en=1;
	}
	eng_num=en;
}
int Engine::getEngNum()
{
	return eng_num;
}
Engine::~Engine()
{
	
}

class Passenger
{
	string psgr;
public:
	Passenger();
	Passenger(string p);
	void setPassenger(string p);
	string getPassenger();
	~Passenger();
};

Passenger::Passenger()
{
	psgr="Hussain Ahmed";
}
Passenger::Passenger(string p)
{
	psgr=p;
}
void Passenger::setPassenger(string p)
{
	psgr=p;
}
string Passenger::getPassenger()
{
	return psgr;
}
Passenger::~Passenger()
{
	
}


class Car
{
	string name;
	Engine engine;
	Passenger *psngr;
public:
	Car();
	Car(string n,int en,Passenger &p);
	void setName(string n)
	{
		name=n;
	}
	string getName()
	{
		return name;
	}
	void print();
	~Car();
};

Car::Car():engine(),psngr()
{
	name="";
}
Car::Car(string n, int en,Passenger &p)
{
	name=n;
	engine.setEngNum(en);
	psngr=&p;
}
void Car::print()
{
	cout<<"Car name: "<<name<<endl;
	cout<<"Engine Number: "<<engine.getEngNum()<<endl;
	cout<<"Passenger Name: "<<psngr->getPassenger()<<endl;
}
Car::~Car()
{
	
}

int main()
{
	Passenger p("Hussain Ahmed");
	Engine e(5678);
	Car taxy("Taxi",e.getEngNum(),p);
	taxy.print();
	return 0;
}
