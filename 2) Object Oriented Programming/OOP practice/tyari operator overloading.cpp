/*
	binary opertors:  unary operator             non member overloading
	+  ==    &&           ! no parameter             []
	-  !=    ||           - no parameter             ->
	*  >,>=  =            ++ no parameter            <<
	/  <,<=               -- no parameter            >>
	%                     ?:  cant overload         ?: cant overload
	                      :: cant overload          .  cant overload
	                       . cant overload          :: cant overload
						   ->			             :  cant overload initialization in header of constructor
	                                            sizeof() cant over load
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
	
	Rectangle(const Rectangle &r):INTERST_RATE(0.016),PI(3.1482)
	{
		length=r.length;
		width=r.width;
	}
	
	Rectangle(int a=10,int b=10):INTERST_RATE(0.016),PI(3.1482) //, length(a), width(b) const data member must be intialized here.
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
    double getLength() const;     // getter can be constant used const after definition
    double getWidth() const
    {
        return width;
    }// getter can be constant used const after definition
    double computeArea() const;
    void draw() const;
    Rectangle operator=(const Rectangle &right);
//  Rectangle operator+(const Rectangle &right);
    friend Rectangle operator+(const Rectangle &left,const Rectangle &right);
    Rectangle operator-(const Rectangle &right);
    Rectangle operator*(const Rectangle &right);
    Rectangle operator/(const Rectangle &right);
//  Rectangle operator%(const Rectangle &right);    should be int%int
	bool operator==(const Rectangle &right);
	bool operator>=(const Rectangle &right);
	bool operator<=(const Rectangle &right);
	bool operator!=(const Rectangle &right);
	bool operator>(const Rectangle &right);
	bool operator<(const Rectangle &right);
	Rectangle operator-();
	Rectangle operator++();
	Rectangle operator++(int);
	Rectangle operator--();
	Rectangle operator--(int);
	friend ostream& operator<<(ostream &out,const Rectangle &r);
	friend istream& operator>>(istream &in,Rectangle &r);
};

Rectangle Rectangle::operator=(const Rectangle &right)
{
	length=right.length;
	width=right.width;
	return *this;
}

/*
Rectangle Rectangle::operator+(const Rectangle &right)
{
	Rectangle result;
	result.length=length+right.length;
	result.width=width+right.width;
	return result;
}*/

Rectangle operator+(const Rectangle &left,const Rectangle &right)
{
	Rectangle result;
	result.length=left.length+right.length;
	result.width=left.width+right.width;
	return result;
}

Rectangle Rectangle::operator-(const Rectangle &right)
{
	Rectangle result;
	result.length=length-right.length;
	result.width=width-right.width;
	return result;
}

Rectangle Rectangle::operator*(const Rectangle &right)
{
	Rectangle result;
	result.length=length*right.length;
	result.width=width*right.width;
	return result;
}

Rectangle Rectangle::operator/(const Rectangle &right)
{
	Rectangle result;
	result.length=length/right.length;
	result.width=width/right.width;
	return result;
}

/*
Rectangle Rectangle::operator%(const Rectangle &right)  //must be int%int 
{
	Rectangle result;
	result.length=length%right.length;
	result.width=width%right.width;
	return result;
}*/

bool Rectangle::operator<(const Rectangle &right)
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

bool Rectangle::operator>(const Rectangle &right)
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

bool Rectangle::operator==(const Rectangle &right)
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

bool Rectangle::operator!=(const Rectangle &right)
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

bool Rectangle::operator<=(const Rectangle &right)
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

bool Rectangle::operator>=(const Rectangle &right)
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

Rectangle Rectangle::operator-()
{
	Rectangle result;
	result.length=-1*length;
	result.width=-1*width;
	return result;
}

Rectangle Rectangle::operator++()
{
	length++;
	width++;
	return *this;
}

Rectangle Rectangle::operator++(int)
{
	Rectangle result(length,width);
	length++;
	width++;
	return result;
}

Rectangle Rectangle::operator--()
{
	length--;
	width--;
	return *this;
}

Rectangle Rectangle::operator--(int)
{
	Rectangle result(length,width);
	length--;
	width--;
	return result;
}

ostream& operator<<(ostream &out,const Rectangle &r)
{
	out << "Length: " << r.length << endl;
    out << "Width: " << r.width << endl;	
	out << "Area: " << r.computeArea() << endl; //must be const function
	r.draw();  //must be constant function has authority.
	return out;
}

istream& operator>>(istream &in,Rectangle &r)
{
	cout << "Enter length for rectangle : ";
    in >> r.length;
    cout << "Enter width for rectangle : ";
    in >> r.width;
    return in;
}



/*void print(const Rectangle &r) //if by value then new memory created so should pass by reference and should make it const so value not change
{
	cout << "Length: " << r.getLength() << endl;
    cout << "Width: " << r.getWidth() << endl;	
	cout << "Area: " << r.computeArea() << endl; //must be const function
	r.draw();  //must be constant function has authority.
}*/

int main()
{	
	int len, wid;
	
	Rectangle rect(10,10);  
	Rectangle recta;      
	Rectangle r,r2;
	
	/*cout << "Enter length for rectangle : ";
    cin >> len;
    cout << "Enter width for rectangle : ";
    cin >> wid;
    recta.setLength(len);
	recta.setWidth(wid);*/
	
	cin>>recta;
	
	//recta=-recta;
	
	
	if(rect<recta)
	{
		r=rect+(recta++);
	}
	else if(rect>recta)
	{
		r=rect+(++recta);
	}
	
	cout << endl << "_______________________________" << endl;
    cout << "Rectangle has following characteristics:- " << endl;
    cout<<r<<endl; 
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
