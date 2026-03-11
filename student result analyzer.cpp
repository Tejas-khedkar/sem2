#include <iostream>
using namespace std;

class student{
	protected:
		int studentID;
		string name;
		
	private:
		int marks[5];
		
	public:
		int i;
		void input(){
			cout<<"Enter student ID"<<endl;
			cin>>studentID;
			cout<<endl<<"Enter student name"<<endl;
			cin>>name;
			cout<<endl<<"Enter student's marks of 5 subjects: ";
			for(i=0; i<5; i++){
				cin>>marks[i];
			}
			
		}
	friend class undergraduate;
		
};

class undergraduate:public student{
	public:
		int i;
		undergraduate operator + (undergraduate obj){
			int temp;
			for(i=0; i<5; i++){
				temp = temp+marks[i];
			}
			i = temp;	
		}
	
};

int main(){
	student s1;
	s1.input();
	undergraduate u1;
	
	
}
