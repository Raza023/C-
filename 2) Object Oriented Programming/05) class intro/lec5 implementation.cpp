#include<iostream>
#include<string>

using namespace std;

class rectangle
{
	//Characteristics / data members
private:                                      //if not write private then it means private but should write public.
	double length;
	double width;
	
	//Access specifier  by writing public and private.
	
	//functionality/member functions
public:                                      //should write public.
	void setwidth(double wid); //setters
	//{
		//width=wid;
	//}
	void setlength(double len);  //setters
	//{
		//legth=len;
	//}
	double getlength();  //getter
	//{
		//return length;
	//}
	double getwidth();   //getter
	//{
		//return width;
	//}
	double computeArea();     
	//{
		//return length*width;
	//}
	void draw();
	//{
		//draw rectangle
		//for(int i=0;i<length;i++)
		//{
			//for(int j=0;j<width;j++)
			//{
				//cout<<"*\t";
			//}
			//cout<<endl;
		//}
	//}
};

double rectangle::computeArea()   //can write after main without protypes.
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

double rectangle::getlength()
{
	return length;
}

double rectangle::getwidth()
{
	return width;
}

int main()
{
	string str; //built in already in string header file.
	//str.length();
	//str.append("ABC");
	rectangle rect;
	double len, wid;
	cout<<"Enter length of rectangle: ";
	cin>>len;
	cout<<"Enter width of rectangle: ";
	cin>>wid;
	rect.setwidth(wid);   //setter
	rect.setlength(len);  //setter
	cout<<endl<<"_____________________________"<<endl;
	cout<<"This rectangle has following characteristics:- "<<endl;
	cout<<"Length: "<<rect.getlength()<<endl;
	cout<<"Width: "<<rect.getwidth()<<endl;
	cout<<"Area: "<<rect.computeArea()<<endl;
	rect.draw();
	return 0;
}

void rectangle::setwidth(double wid)
{
	if(wid<0)
	{
		wid=0;
	}
	width=wid;
}

void rectangle::setlength(double len)
{
	if(len<0)
	{
		len=0;
	}
	length=len;
}
