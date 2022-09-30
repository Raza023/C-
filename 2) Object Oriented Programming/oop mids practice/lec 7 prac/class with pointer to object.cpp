#include<iostream>

using namespace std;

class rectangle
{
private:
	double length;
	double width;
public:
	rectangle();
	rectangle(double l, double w);
	void setLength(double len);
	void setWidth(double wid);
	double getLength();
	double getWidth();
	double computeArea();
	void draw();
};

void rectangle::setLength(double len)
{
	if(len<0)
	{
		len=0;
	}
	length=len;
}

void rectangle::setWidth(double wid)
{
	if(wid<0)
	{
		wid=0;
	}
	width=wid;
}

double rectangle::getLength()
{
	return length;
}

double rectangle::getWidth()
{
	return width;
}

double rectangle::computeArea()
{
	return length*width;
}

void rectangle::draw()
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

rectangle::rectangle()
{
	length=0;
	width=0;
}

rectangle::rectangle(double l,double w)
{
	if(l<0)
	{
		l=0;
	}
	length=l;
	if(w<0)
	{
		w=0;
	}
	width=w;
}


int main()
{
	double len,wid;
	rectangle rec(3,2);
	cout<<"Length: "<<rec.getLength()<<endl;
	cout<<"Width: "<<rec.getWidth()<<endl;
	cout<<"Area: "<<rec.computeArea()<<endl;
	cout<<"Rectangle:-"<<endl;
	rec.draw();
	
	cout<<"Enter length: ";
	cin>>len;
	cout<<"Enter width: ";
	cin>>wid;
	rec.setLength(len);
	rec.setWidth(wid);
	cout<<"Length: "<<rec.getLength()<<endl;
	cout<<"Width: "<<rec.getWidth()<<endl;
	cout<<"Area: "<<rec.computeArea()<<endl;
	cout<<"Rectangle:-"<<endl;
	rec.draw();
	
	rectangle rect;
	rectangle *rectptr=&rect;  
	cout<<"Enter length: ";
	cin>>len;
	cout<<"Enter width: ";
	cin>>wid;
	rectptr->setLength(len);
	rectptr->setWidth(wid);
	cout<<"Length: "<<rectptr->getLength()<<endl;
	cout<<"Width: "<<rectptr->getWidth()<<endl;
	cout<<"Area: "<<rectptr->computeArea()<<endl;
	cout<<"Rectangle:-"<<endl;
	rectptr->draw();
	
	return 0;
}
