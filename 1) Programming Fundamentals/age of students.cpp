#include<iostream>
using namespace std;

int displayAge(int n)
{
    int age;
    cout<<"Enter your age "<<endl;
    cin>>age;
    return age;
}

int main()
{
    int age,num;
    cout<<"Enter number of students: ";
    cin>>num;
	
	for(int i=1;i<=num;i++)
    {
        age=displayAge(num);
        cout<<"Age of student "<<i<<" is "<<age<<endl;
    }
	return 0;
}
