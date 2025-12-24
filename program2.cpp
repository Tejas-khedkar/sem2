#include <iostream>
using namespace std;
int display();

class student

{
	public:
		int rollNo;
		string name;
		string department;
			
int display()
{
	cout<<rollNo<<endl;
	cout<<name<<endl;
	cout<<department<<endl;
	return 0;
}
};


//dont touch this \/
int main()
{
	student s1;
	s1.rollNo = 85;
	s1.name = "tejas";
	s1.department = "CSE";
	s1.display();
	
	student s2;
	cout<<"Enter your roll no"<<endl;
	cin>>s2.rollNo;
	cout<<"Enter your name"<<endl;
	cin>>s2.name;
	cout<<"Enter your department"<<endl;
	cin>>s2.department;
	
	s2.display();
}
