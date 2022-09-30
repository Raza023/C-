#include <iostream>
#include<string>
#include<iomanip>
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
	
	//Rectangle()
	//{
	//	cout<<"Default Constructor called!"<<endl;
	//	length=width=10;
	//}
	
	Rectangle(int a=10,int b=20):PI(3.1482) //, length(a), width(b) const data member must be intialized here.
	//becomes default with default arguments
	{
		cout<<"Parametrized Constructor called!......"<<endl;
		length=a;  //we can write them in header.
		width=b;
	}
	
	~Rectangle()  //destroy object and destroy dynamic memory
	{
		cout<<"Object is destroying....."<<endl;
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
};

void print(const Rectangle &r) //if by value then new memory created so should pass by reference and should make it const so value not change
{
	cout << "Length: " << r.getLength() << endl;
    cout << "Width: " << r.getWidth() << endl;	
	cout << "Area: " << r.computeArea() << endl; //must be const function
	r.draw();  //must be constant function has authority.
}

int main()
{
	int len;
	int wid;
	//const Rectangle rect; without initializing 
	const Rectangle rect(10,10); //initializing lazmi in constructor.
/*	cout << "Enter length for rectangle: ";
	cin >> len;
	cout << "Enter width for rectangle: ";
	cin >> wid;
	rect.setLength(len);
    rect.setWidth(wid); //we can not do that because it is const object*/ 
	print(rect);
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
