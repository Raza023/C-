#include<iostream>
using namespace std; 

int main()
{
	int num1, num2;
	char op; 
	char choice;
	
	do
	{
		cout << "Enter a number: "; 
		cin >> num1; 
		
		cout << "Enter another number: "; 
		cin >> num2;
		
		cout << "Enter operator (+, -, *, /, %): "<< endl;
		cin.ignore(); 
		op = cin.get();   
		
		switch(op)
		{
			case '+':
				cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
				break;
				
			case '-':
				cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
				break;
			case '*': 
				cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
				break;	
			case '/': 
				if (num2 != 0)
						cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
				else
						cout << "ERROR! Divided by ZERO . . ." << endl; 
				break;
			case '%':
				if (num2 != 0)
						cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
				else
						cout << "ERROR! Divided by ZERO . . ." << endl; 
				break;
			default: 
				cout << "ERROR: Invalid Input!" << endl; 
		}
		cout<<"Do you want to do more calculation (Y/N)?";
		cin>>choice;
		while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
		{
			cout<<"Please! Enter (Y/N) for more calculation.";
			cin>>choice;
		}
	}while(choice=='Y'||choice=='y');
	
	return 0; 
}



