#include <iostream>
using namespace std;
int display();

class student

{



	public:
		int rollNo;
			


int display()
{
	cout<<rollNo;
	return 0;
}
};


int main()
{
	
	
	student s1;
	s1.rollNo = 85;
	s1.display();  
}





