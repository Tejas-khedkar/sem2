#include <iostream>
using namespace std;
int display();

class student

{
	public:
		int rollNo;
		string name;
		string department;


int getdata();
		
int display();
	
};

int student::display()
{
	cout<<rollNo<<endl;
	cout<<name<<endl;
	cout<<department<<endl;
	return 0;
}

int student::getdata()
{
	cout<<"Enter your roll no"<<endl;
	cin>>rollNo;
	cout<<"Enter your name"<<endl;
	cin>>name;
	cout<<"Enter your department"<<endl;
	cin>>department;
}

//dont touch this \/
int main()
{
	student s2;
	s2.getdata();
	s2.display();
}
