#include<iostream>
using namespace std;
//square, rectangle, circle
class shape
{
	public:
		int n;
		int n2;
		double peri;
		double area;
	
	int square();
	int rec();
	int circle();
};

int shape::square()
{
	cout<<"Enter side"<<endl;
	cin>>n;
	peri = n*4;
	area = n*n;
	cout<<"Perimeter of square is "<<peri<<endl;
	cout<<"Area of square is"<<area<<endl;
	
}

int shape::rec()
{
	cout<<"Enter length"<<endl;
	cin>>n;
	cout<<"Enter width"<<endl;
	cin>>n2;
	peri = 2*n + 2*n2;
	area = n*n2;
	cout<<"Perimeter of rectangle is "<<peri<<endl;
	cout<<"Area of rectangle is "<<area<<endl;
}

int shape::circle()
{
	cout<<"Enter radius"<<endl;
	cin>>n;
	peri = 2*3.14159*n;
	area = 3.14159*n*n;
	cout<<"Circumference of circle is"<<peri<<endl;
	cout<<"Area of circle is "<<area<<endl;
}

int main()
{
	shape s1;
	int shapename;
	cout<<"Enter the shape you want"<<endl;
	cout<<"1. Square"<<endl;
	cout<<"2. Rectangle"<<endl;
	cout<<"3. Circle"<<endl;
	cin>>shapename;
	
	
	
	switch (shapename)
	{
		case 1:
			s1.square();
			break;
		case 2:
			s1.rec();
			break;
		case 3:
			s1.circle();
			break;
	}
	
	
}
