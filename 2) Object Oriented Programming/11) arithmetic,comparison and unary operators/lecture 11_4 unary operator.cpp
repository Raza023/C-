/*
	binary opertors:  unary operator
	+  ==    &&           ! no parameter
	-  !=    ||           - no parameter
	*  >,>=  =            ++ no parameter
	/  <,<=               -- no parameter
	%                     ?:  can't over load
	                      :: can't over load
	                       . can't over load
						   -> can't overload   
	
*/   

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

class Rectangle
{
    // data members
private: //marzi ha likh lo
    double width;
    double length;
    const double PI; //must be initialized in constructer.

    // member functions 
public: 
	//constructor: are functions for initializing.
	//1) no return_type.
	//2) function name same as class name.
	//3) compiler is responsible for its calling.
	//4) When we not write compiler makes its own constructor.
	
	const double INTERST_RATE;
	
	Rectangle (const Rectangle &r):INTERST_RATE(0.016),PI(3.1482) //copy constructor never by value
	{
		cout<<"copy Constructor called!......"<<endl;
		length=r.length;
		width=r.width;
	}
	
	Rectangle():INTERST_RATE(0.016),PI(3.1482) //, length(a), width(b) const data member must be intialized here.
	{
		cout<<"Default Constructor called!......"<<endl;
		length=0;  //we can write them in header.
		width=0;
	}
	
	Rectangle(int a,int b):INTERST_RATE(0.016),PI(3.1482) //, length(a), width(b) const data member must be intialized here.
	//becomes default with default arguments
	{
		cout<<"Parametrized Constructor called!......"<<endl;
		length=a;  //we can write them in header.
		width=b;
	}
	
	~Rectangle()  //destroy object and destroy dynamic memory
	{
		cout<<"Object is destroying........"<<endl;
	}
	
    void setLength(double len);     // setters  can't be constant
    void setWidth(double wid);      // setter   can't be constant
    double getLength() const;       // getter can be constant used const after definition
    double getWidth() const
    {
        return width;
    }// getter can be constant used const after definition
    double computeArea() const;
    void draw() const;

    Rectangle operator=(const Rectangle &rect);  //optional to pass by value or by refernce  return *this;  for  r=r2=r3=r4;
    
	Rectangle operator+(const Rectangle &right); //optional to pass by value or by refernce  return result; as r=rect+recta;
    Rectangle operator-(const Rectangle &right); //optional to pass by value or by refernce  return result; as r=rect-recta;
    Rectangle operator*(const Rectangle &right); //optional to pass by value or by refernce  return result; as r=rect*recta;
    Rectangle operator/(const Rectangle &right); //optional to pass by value or by refernce	 return result; as r=rect/recta;
//  Rectangle operator%(const Rectangle &right); //optional to pass by value or by refernce	 should use int%int for it.   return result; as r=rect%recta;
	
	bool operator>=(const Rectangle &right);     //optional to pass by value or by refernce  return true or false;
    bool operator>(const Rectangle &right);      //optional to pass by value or by refernce  return true or false;
    bool operator<=(const Rectangle &right);     //optional to pass by value or by refernce  return true or false;
    bool operator<(const Rectangle &right);      //optional to pass by value or by refernce  return true or false;
    bool operator==(const Rectangle &right);     //optional to pass by value or by refernce  return true or false;
    bool operator!=(const Rectangle &right);     //optional to pass by value or by refernce  return true or false;
    
	Rectangle operator-();                       //no operand unary optional to pass by value or by refernce  return result;
    Rectangle operator++();    //pre-increment   //no operand unary optional to pass by value or by refernce  return *this
    Rectangle operator++(int); //post-increment we don't use int just for overloading //no operand unary optional to pass by value or by refernce Rectangle result(length,width) return result;
    Rectangle operator--();    //pre-decrement   //no operand unary optional to pass by value or by refernce  return *this
    Rectangle operator--(int); //post-decrement we don't use int just for overloading //no operand unary optional to pass by value or by refernce Rectangle result(length,width) return result;
};




bool Rectangle::operator>=(const Rectangle &right) //optional to pass by value or by refernce
{
	if(length>=right.length&&width>=right.width)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Rectangle::operator>(const Rectangle &right) //optional to pass by value or by refernce
{
	if(length>right.length&&width>right.width)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Rectangle::operator<(const Rectangle &right) //optional to pass by value or by refernce
{
	if(length<right.length&&width<right.width)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Rectangle::operator<=(const Rectangle &right) //optional to pass by value or by refernce
{
	if(length<=right.length&&width<=right.width)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Rectangle::operator==(const Rectangle &right) //optional to pass by value or by refernce
{
	if(length==right.length&&width==right.width)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Rectangle::operator!=(const Rectangle &right) //optional to pass by value or by refernce
{
	if(length!=right.length&&width!=right.width)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Rectangle Rectangle::operator=(const Rectangle &rect) //optional to pass by value or by refernce
{                                                     //if passed by value then extra copy will be called
	cout<<"operator= is called....."<<endl;
	length=rect.length;
	width=rect.width;
	//Rectangle r(length,with);
	//return r;
	return *this;   //this is data member contains address of object.
}

Rectangle Rectangle::operator+(const Rectangle &right) //optional to pass by value or by refernce
{
	cout<<"operator+ is called....."<<endl;
	Rectangle result;
	result.length=length+right.length;
	result.width=width+right.width;
	return result;
}

Rectangle Rectangle::operator-(const Rectangle &right) //optional to pass by value or by refernce
{
	cout<<"operator+ is called....."<<endl;
	Rectangle result;
	result.length=length-right.length;
	result.width=width-right.width;
	return result;
}

Rectangle Rectangle::operator*(const Rectangle &right) //optional to pass by value or by refernce
{
	cout<<"operator+ is called....."<<endl;
	Rectangle result;
	result.length=length*right.length;
	result.width=width*right.width;
	return result;
}

Rectangle Rectangle::operator/(const Rectangle &right) //optional to pass by value or by refernce
{
	cout<<"operator+ is called....."<<endl;
	Rectangle result;
	result.length=length/right.length;
	result.width=width/right.width;
	return result;
}
/*
Rectangle Rectangle::operator% (const Rectangle &right) //optional to pass by value or by refernce
{
	cout<<"operator+ is called....."<<endl;
	Rectangle result;
	result.length=length%right.length;
	result.width=width%right.width;
	return result;
}
*/

Rectangle Rectangle::operator-() //optional to pass by value or by refernce
{
	cout<<"operator- unary is called....."<<endl;
	Rectangle result;
	result.length=-1*length;
	result.width=-1*width;
	return result;
}

Rectangle Rectangle::operator++() //optional to pass by value or by refernce
{         //preinc pahla plus baad ma value
	cout<<"operator++ is called....."<<endl;
	length++;
	width++;
	return *this;  //current object
}

Rectangle Rectangle::operator++(int ) //optional to pass by value or by refernce
{         //postinc  pahla value bad ma plus
	cout<<"operator++ is called....."<<endl;
	Rectangle result(length,width);
	length++;
	width++;
	return result;  //current object
}

Rectangle Rectangle::operator--() //optional to pass by value or by refernce
{         //predec pahla plus baad ma value
	cout<<"operator-- is called....."<<endl;
	length--;
	width--;
	return *this;  //current object
}

Rectangle Rectangle::operator--(int a) //optional to pass by value or by refernce
{         //postdec  pahla value bad ma plus
	cout<<"operator++ is called....."<<endl;
	Rectangle result(length,width);
	length--;
	width--;
	return result;  //current object
}

void print(const Rectangle &r) //if by value then new memory created so should pass by reference and should make it const so value not change
{
	cout << "Length: " << r.getLength() << endl;
    cout << "Width: " << r.getWidth() << endl;	
	cout << "Area: " << r.computeArea() << endl; //must be const function
	r.draw();  //must be constant function has authority.
}

int main()
{	
	int len, wid;
	
	//int a=10;       |    int a=10;
	//int b=a;        |    int b=;
	// initializing   |    b=a;
	//                |    Assignment
	
	Rectangle rect(1,1);  //parametrized              
	//Rectangle ra;         //default
	//Rectangle rec=rect;   //copy by initializing                           int a=10;  
	Rectangle rec;      //default use as copy assignment not allowed     int b=a;
	Rectangle r(5,5);
	//imp=exp;            //pass rect explicitly  using operator=
	//Rectangle rac(rect);  //copy as passing object
	
/*	cout << "Enter length for rectangle 1: ";
    cin >> len;
    cout << "Enter width for rectangle 1: ";
    cin >> wid;
    rec.setLength(len);
	rec.setWidth(wid);
	
	cout << "Enter length for rectangle 2: ";
    cin >> len;
    cout << "Enter width for rectangle 2: ";
    cin >> wid;
    rect.setLength(len);
	rect.setWidth(wid);
	
	if(rec>rect)
		r=rec-rect;
	if(rec==rect)
		r=rec*rect;
	if(rec<rect)
		r=rec+rect;
*/
	//r=-r;	
	//++r;  //preincrement;
	//r++;  //postincrement;
	
	//rec=rect+r++;
	rec=rect+(++r);
	//rec=rect+(--r);
	
//	if(rec!=rect)
//		r=rec-rect;
//	if(rec>=rect)
//		r=rec+rect;		
//	if(rec<=rect)
//		r=rec+rect;

	//r=r2=rec=rect;           //for it we shoulduse *this or make return type rectangle and return it. 
	
	cout << endl << "_______________________________" << endl;
    cout << "rec Rectangle has following characteristics:- " << endl;
    print(rec); 
	cout << endl << "_______________________________" << endl;
	
	cout << endl << "_______________________________" << endl;
    cout << "r Rectangle has following characteristics:- " << endl;
    print(r); 
	cout << endl << "_______________________________" << endl;
}

double Rectangle::computeArea() const
{
    return length * width;
}

void Rectangle::draw() const
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

double Rectangle::getLength() const //can't change values of data members
{
    return length;
}
void Rectangle::setWidth(double wid)
{
    width = wid;
}

void Rectangle::setLength(double len)
{
    length = len;
}                    
