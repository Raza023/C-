#include<iostream>
#include<string>
using namespace std;

class Rectangle
{
	double length;
	double width;
public:
	Rectangle()
	{
		cout<<"Default constructor called."<<endl;
		length=10;
		width=10;
	}
	Rectangle(double len,double wid)
	{
		cout<<"Parametrized constructor called."<<endl;
		length=len;
		width=wid;
	}
	
	void setlength(double l);
	void setwidth(double w);
	double getlenght();
	double getwidth();
	double computearea();
	void draw();
};

void Rectangle::setlength(double l)
{
	length=l;
}

void Rectangle::setwidth(double w)
{
	width=w;
}

double Rectangle::getlenght()
{
	return length;
}

double Rectangle::getwidth()
{
	return width;
}

double Rectangle::computearea()
{
	return (length)*width;
}

void Rectangle::draw()
{
	for(int i=0;i<length;i++)
	{
		for(int j=0;j<width;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}

int main()
{
	Rectangle *rptr;    //deletion in main
	rptr=new Rectangle[3];
	
	for(i=0;i<3;i++)
	{
		cout << "Enter length for rectangle "<<i+1<<": ";
	    cin >> len;
	    cout << "Enter width for rectangle "<<i+1<<": ";
	    cin >> wid;
		rptr[i].setlength(len);
		rptr[i].setwidth(wid);
	}
	for(int i=0;i<3;i++)
	{
		cout << endl << "_______________________________" << endl;
	    cout << "Rectangle "<<i+1<<" has following characteristics:- " << endl;
	    cout << "Length: " << rptr[i].getlenght() << endl;
	    cout << "Width: " << rptr[i].getwidth() << endl;
	    cout << "Area: " << rptr[i].computearea() << endl;
	    rptr[i].draw();
	}
	
	
	delete []ptr;
	
	return 0;
}
