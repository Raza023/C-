#include <iostream>
#include<string>
#include<iomanip>
#include<cmath>

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
	//4) When we not write compiler makes it own constructor.
	
	Rectangle():PI(3.1482)
	{
		cout<<"Default Constructor called!"<<endl;
		length=5;
		width=5;
	}
	
	Rectangle(int a,int b):PI(3.1482) //,length(a), width(b) const data member must be intialized here.
	//becomes default with default arguments
	{
		cout<<"Parametrized Constructor called!......"<<endl;
		length=a;  //we can write them in header.
		width=b;
	}
	
	Rectangle(const Rectangle &right):PI(3.1482)
	{
		length=right.length;
		width=right.width;
	}
	
	~Rectangle()  //destroy object and destroy dynamic memory
	{
		cout<<"Object is destroying......"<<endl;
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
    Rectangle operator=(const Rectangle &right);  //return *this;
    friend Rectangle operator+(const Rectangle &left,const Rectangle &right);   //return result;
    //Rectangle operator+(const Rectangle &right);//return result;
    Rectangle operator-(const Rectangle &right);  //return result;
    Rectangle operator*(const Rectangle &right);  //return result;
    Rectangle operator/(const Rectangle &right);  //return result;
    bool operator==(const Rectangle &right);      //return true; or return false;
    bool operator!=(const Rectangle &right);      //return true; or return false;
    bool operator>=(const Rectangle &right);      //return true; or return false;
    bool operator>(const Rectangle &right);       //return true; or return false;
    bool operator<=(const Rectangle &right);      //return true; or return false;
    bool operator<(const Rectangle &right);       //return true; or return false;
    Rectangle operator-();                        //return result;
    Rectangle operator--();                       //return *this; 
    Rectangle operator--(int);                    //return current; of current(length,width)
    Rectangle operator++();                       //return *this;
    Rectangle operator++(int);                    //return current; of current(length,width)
    friend ostream& operator<<(ostream& out,const Rectangle &rect); //return out;
	friend istream& operator>>(istream& in,Rectangle &rect);        //return in;
	Rectangle* operator->();                                        //return this
	operator int();                                                 //return integer
	operator string();                                              //return string
	//int& operator[](const int &i);                                  //return arr[i]; else exit(0);
};

/*
int& Rectangle::operator[](const int &i)  // kasa karain
{
	if(i>=0&&i<3)
	{
		return arr[i];
	}
	else
	{
		cout<<"Invalid index."<<endl;
		exit(0);
	}
}
*/

Rectangle::operator string()
{
	return "Yeah overloading done!";
}

Rectangle::operator int()
{
	return length*width;
}

Rectangle* Rectangle::operator->()
{
	return this;
}

ostream& operator<<(ostream& out,const Rectangle &rect)
{
	out << endl << "_______________________________" << endl;
    out << "Rectangle has following characteristics:- " << endl;
    out << "Length: " << rect.getLength() << endl;
    out << "Width: " << rect.getWidth() << endl;
    out << "Area: " << rect.computeArea() << endl;
    rect.draw();
    return out;
}

istream& operator>>(istream& in,Rectangle &rect)
{
	cout << "Enter length for rectangle: ";
    in >> rect.length;
    cout << "Enter width for rectangle: ";
    in >> rect.width;
	return in;
}

Rectangle Rectangle::operator-()
{
	Rectangle result;
	result.length=-1*length;
	result.width=-1*width;
	return result;
}

Rectangle Rectangle::operator--()
{
	length--;
	width--;
	return *this;
}

Rectangle Rectangle::operator++()
{
	length++;
	width++;
	return *this;
}

Rectangle Rectangle::operator++(int)
{
	Rectangle current(length,width);
	length++;
	width++;
	return current;
}

Rectangle Rectangle::operator--(int)
{
	Rectangle current(length,width);
	length--;
	width--;
	return current;
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

/*Rectangle Rectangle::operator+(const Rectangle &right)
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

Rectangle Rectangle::operator=(const Rectangle &right)
{
	length=right.length;
	width=right.width;
	return *this;
}

/*
int sum(int a,int b)
{
	return a+b;
}
double sum(double a,double b)
{
	return a+b;
}
string sum(string a,string b)
{
	return a+b;
}
Rectangle sum(Rectangle a, Rectangle b)
{
	return a+b;
}
*/

template <class T>
T sum(T a,T b)
{
	return a+b;
}

template <class S>
void Swap(S &a,S &b)
{
	S temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int v1=2,v2=3;
	cout<<"Power: "<<pow(v1,v2)<<endl;
	char ch1= 'H';
	char ch2= 'R';
	cout<<"Before swaping."<<endl;
	cout<<"Ch1: "<<ch1<<endl;
	cout<<"Ch2: "<<ch2<<endl;
	Swap(ch1,ch2);
	cout<<"After swaping."<<endl;
	cout<<"Ch1: "<<ch1<<endl;
	cout<<"Ch2: "<<ch2<<endl;
	
	cout<<endl;
	
	string a="Hassan ";
	string b="Raza ";
	cout<<"Before swaping."<<endl;
	cout<<"Sum: "<<sum(a,b)<<endl;
	Swap(a,b);
	cout<<"After swaping."<<endl;
	cout<<"Sum: "<<sum(a,b)<<endl;
	
	cout<<endl;
	
	
	Rectangle rect;
	Rectangle rec(10,10);
	Rectangle r(5,5);
	cout<<"Before swaping."<<endl;
	cout<<"rec: "<<rec<<endl;
	cout<<"r: "<<r<<endl;
	Swap(rec,r);
	cout<<"After swaping."<<endl;
	cout<<"rec: "<<rec<<endl;
	cout<<"r: "<<r<<endl;
	cout<<"Sum: "<<sum(rec,r)<<endl;
	
	/*
	double len, wid; 
    Rectangle rect(5,5);
    Rectangle rec(3,3);
    Rectangle r;
    cout<<"Enter data for rectangle 1:-"<<endl;
    cin>>rec;
    cout<<"Enter data for rectangle 2:-"<<endl;
    cin>>rect;
    cout<<"Rectangle 1:-"<<endl;
    cout<<rec;
    cout<<"Rectangle 2:-"<<endl;
    cout<<rect;
    cout<<"Length of rectangle 1: "<<rec->getLength()<<endl;
    string str=rec;
    cout<<str<<endl;
    int intg=rect;
    cout<<intg<<endl;
    
	
	Rectangle recta[3];
	for(int i=0;i<3;i++)
    {
    	cin>>recta[i];
	}
	
	for(int i=0;i<3;i++)
	{
		cout<<recta[i];
	}
    */
	//Rectangle rec,r;
    //r=--rec;
    
    //if(r<rect)
    //{
    //	rec=r+rect;
	//}
	//else
	//{
	//	rec=r*rect;
	//}
    //rec=r+rect;
    //rec=r-rect;
    //rec=r*rect;
	//rec=r/rect;
    /*
    cout << endl << "_______________________________" << endl;
    cout << "Rectangle has following characteristics:- " << endl;
    cout << "Length: " << rec.getLength() << endl;
    cout << "Width: " << rec.getWidth() << endl;
    cout << "Area: " << rec.computeArea() << endl;
    rec.draw();
    
	cout << "Enter length for rectangle: ";
    cin >> len;
    cout << "Enter width for rectangle: ";
    cin >> wid;
    rect.setLength(len);
	rect.setWidth(wid);
	
    cout << endl << "_______________________________" << endl;
    cout << "Rectangle has following characteristics:- " << endl;
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Area: " << rect.computeArea() << endl;
    rect.draw();
    */
    return 0;
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
            cout << "* ";
        }
        cout << endl;
    }
}

double Rectangle::getLength() const //can't change values of data members
{
    return length;
}
void Rectangle::setWidth(double wid)  //can't make const
{
    width = wid;
}

void Rectangle::setLength(double len)
{
    length = len;
}
