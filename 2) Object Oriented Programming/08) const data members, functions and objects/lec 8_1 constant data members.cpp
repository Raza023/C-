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
	
	Rectangle(int a=10,int b=20):PI(3.1482) //,length(a), width(b) const data member must be intialized here.
	//becomes default with default arguments
	{
		cout<<"Parametrized Constructor called!...."<<endl;
		if(a<0)
		{
			a=0;
		}
		length=a;  //we can write them in header.
		if(b<0)
		{
			b=0;
		}
		width=b;
	}
	
	~Rectangle()  //destroy object and destroy dynamic memory
	{
		cout<<"Object is destroying....."<<endl;
	}
	
    void setLength(double len);     // setters 
    void setWidth(double wid);      // setter
    double getLength();     // getter 
    double getWidth()
    {
        return width;
    }// getter
    double getPI()
    {
        return PI;
    }// getter
    double computeArea();
    void draw();
};

int main()
{
	double len, wid; 
    //Rectangle *rectptr;  //pointer to object array
	//rectptr=new Rectangle[3];  //not deletion in destructor.
	Rectangle rect[3];  //local distructor automatically called.
	for(int i=0;i<3;i++)
    {
    	cout << "\nEnter length for rectangle "<<i+1<<": ";
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
	    cout << "PI: " << rect[i].getPI() << endl;
	    cout << "Area: " << rect[i].computeArea() << endl;
	    rect[i].draw();
	}
	//delete []rect;
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
    width = wid;
}

void Rectangle::setLength(double len)
{
    length = len;
}
