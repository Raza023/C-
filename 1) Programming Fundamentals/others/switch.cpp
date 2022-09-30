#include<iostream>
using namespace std;

int main()
{
	int selection;
	do
	{
		
		cout<<"Which formoula do you want to see?\n\n";
		cout<<"1. Area of circle.\n";
		cout<<"2. Area of rectangle\n";
		cout<<"3. Area of cylinder.\n";
		cout<<"4. None of them!\n";
		cin>>selection;
		switch (selection)
		{ 
			case 1:
				cout<<"Pi times radius square.\n";
				break;
			case 2:
				cout<<"length times width.\n";
				break;
			case 3:
				cout<<"Pi times radius squared times height.\n";
				break;
			case 4:
				cout<<"Well okay then, good bye!\n";
				break;
			default:
				cout<<"Not good with numbers, eh?\n";
		}
	}while(selection!=4);
	return 0;
}

