#include <iostream>
#include <string>
using namespace std;

class complexNumber {
	public:
		int real;
		int img;
		void input(){
			cout<<endl<<"input real and imaginary part of the complex number: "<< endl;
			cin>>real;
			cin>>img;
		}
		
		complexNumber operator + (complexNumber obj){
			complexNumber temp;
			temp.real = real + obj.real;
			temp.img = img + obj.img;
			return temp;
		}
		
		void display(){
			cout<<"The addition of the 2 complex numbers is: ";
			cout<<endl<<real<<" + "<<img<<"i"<<endl;
		}
};

int main(){
	complexNumber n1;
	n1.input();
	complexNumber n2;
	n2.input();
	complexNumber ans = n1 + n2;
	ans.display();
	return 0;
}
