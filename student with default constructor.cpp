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

student()
{
	rollNo = 10;
	cout<<"default constructor initiated"<<endl;
}
};


//dont touch this \/
int main()
{
	student s2;
	s2.display();
}


