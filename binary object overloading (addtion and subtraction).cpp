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
		
		complexNumber operator - (complexNumber obj){
			complexNumber temp;
			temp.real = real - obj.real;
			temp.img = img - obj.img;
			return temp;
		}
		
		void display(){
			//cout<<"The addition of the 2 complex numbers is: ";
			cout<<endl<<real<<" + "<<img<<"i"<<endl;
		}
		void display1(){
			cout<<endl<<"The addition of the 2 complex numbers is: ";
			cout<<endl<<real<<" + "<<img<<"i"<<endl;
		}
		void display2(){
			cout<<endl<<"The subtraction of the 2 complex numbers is: ";
			cout<<endl<<real<<" + "<<img<<"i"<<endl;
		}
};

int main(){
	complexNumber n1;
	n1.input();
	cout<<"complex number is: ";
	n1.display();
	complexNumber n2;
	n2.input();
	cout<<"complex number is: ";
	n2.display();
	complexNumber ans1 = n1 + n2;
	ans1.display1();
	complexNumber ans2 = n1 - n2;
	ans2.display2();
	return 0;
}
