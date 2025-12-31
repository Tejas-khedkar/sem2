#include <iostream>
using namespace std;
int display();

class student
{
	public:
		int rollNo;
					
int display() //display fucntion
{
	cout<<rollNo<<endl;
	return 0;
}

student(int a) //constructor
{
	rollNo = a;
	
}
};

//dont touch this \/
int main()
{
	student s1(85);
	student s2(67);
	s1.display();
	s2.display();
}
