#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//class Fraction
//{
//	int numerator;
//	int denominator;
//	Fraction()
//	{
//		if(d>0)
//		{
//			deominator=d;
//		}
///		else if(d==0)
//		{
//			cout<<"Denomintor can't be zero."<<endl;
//			denomenator=1;
//		}
//	}
//};

class Rectangle
{
    // data members
private: //marzi ha likh lo
    double width;
    double length;

    // member functions 
public: 
	//constructor: are functions for initializing.
	//1) no return_type.
	//2) function name same as class name.
	//3) compiler is responsible for its calling.
	//4) When we not write compiler makes its own constructor.
	
	//Rectangle()
	//{
	//	cout<<"Default Constructor called!"<<endl;
	//	length=width=10;
	//}
	
	Rectangle(int l=10,int w=20)  //becomes default with default arguments
	{
		cout<<"Parametrized Constructor called!"<<endl;
		if(l<0)
		{
			l=0;
		}
		length=l;
		if(w=0)
		{
			w=0;
		}
		width=w;
	}
	
	~Rectangle()
	{
		cout<<"Object is destroying"<<endl;
	}
	
    void setLength(double len);     // setters 
    void setWidth(double wid);      // setter
    double getLength();     // getter 
    double getWidth()
    {
        return width;
    }// getter 
    double computeArea();
    void draw();
};

int main()
{
	double len, wid; 
    cout << "Enter length for rectangle: ";
    cin >> len;
    cout << "Enter width for rectangle: ";
    cin >> wid;
    Rectangle rect; //default constructor called.     we cant initialize here
	//Rectangle rect(len,wid); //parametrizrd constructor called.
	rect.setLength(len);
	rect.setWidth(wid);
	cout << endl << "_______________________________" << endl;
    cout << "This Rectangle has following characteristics:- " << endl;
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Area: " << rect.computeArea() << endl;
    rect.draw();
    
	Rectangle *rectptr;  //pointer to object
	rectptr=&rect;
	cout<<"Length: "<<rectptr->getLength()<<endl;
	cout<<"Width: "<<rectptr->getWidth()<<endl;
	cout<<"Area: "<<rectptr->computeArea()<<endl;
	rectptr->draw();
	
	return 0;
}

double Rectangle::computeArea()
{
    return length * width;
}

void Rectangle::draw()
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

double Rectangle::getLength()
{
    return length;
}
void Rectangle::setWidth(double wid)
{
	if(wid<0)
	{
		wid=0;
	}
    width = wid;
}

void Rectangle::setLength(double len)
{
	if(len<0)
	{
		len=0;
	}
    length = len;
}
