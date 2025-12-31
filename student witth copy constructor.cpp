#include <iostream>
using namespace std;

class student {
public:
    int rollNo;
    
    // Parameterized constructor
    student(int r)
    {
    	rollNo=r;
	}
    
    // Copy constructor
    student(const student &s)
    {
    	rollNo=(s.rollNo);
	}
     
    int display() {
        cout << rollNo << endl;
        return 0;
    }
};

int main() {
    student s1(85);   
    student s2(67);   
    student s3 = s1; 
    s1.display();     
    s2.display(); 
	s3.display();    
    return 0;
}

