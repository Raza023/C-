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
    const int PARAMETER;

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
	
	Rectangle(int a=10,int b=20):PI(3.1482),PARAMETER(8) //,length(a), width(b) const data member must be intialized here.
	//becomes default with default arguments
	{
		cout<<"Parametrized Constructor called!......"<<endl;
		length=a;  //we can write them in header.
		width=b;
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
};

int main()
{
	double len, wid; 
    //Rectangle *rectptr;  //pointer to object array
	//rectptr=new Rectangle[3];  //not deletion in destructor.
	Rectangle rect[3];  //local distructor automatically called.
	for(int i=0;i<3;i++)
    {
    	cout << "Enter length for rectangle "<<i+1<<": ";
	    cin >> len;
	    cout << "Enter width for rectangle "<<i+1<<": ";
	    cin >> wid;
	    rect[i].setLength(len);
    	rect[i].setWidth(wid);
	}
	
	for(int i=0;i<3;i++)
    {
        cout << endl << "_______________________________" << endl;
	    cout << "Rectangle "<<i+1<<" has following characteristics:- " << endl;
	    cout << "Length: " << rect[i].getLength() << endl;
	    cout << "Width: " << rect[i].getWidth() << endl;
	    cout << "Area: " << rect[i].computeArea() << endl;
	    rect[i].draw();
	}
	//delete []rect;
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
void Rectangle::setWidth(double wid)  //can't make const
{
    width = wid;
}

void Rectangle::setLength(double len)
{
    length = len;
}
