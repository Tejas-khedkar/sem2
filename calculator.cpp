//calculator

#include<iostream>
using namespace std;

class calc
{
	public:
		int no1, no2;
		int a = 0;
		add()
		{
			a=no1+no2;
			cout<<a<<endl;
			
		}
		
		sub()
		{
			a = no1-no2;
			cout<<a<<endl;
		}
		
		mul()
		{
			a = no1*no2;
			cout<<a<<endl;
		}
		
		div()
		{
			a = no1/no2;
			cout<<a<<endl;
		}
	
		
		
};

int main()
{
	calc c1;
	cout<<"Enter 2 numbers"<<endl;
	cin>>c1.no1;
	cin>>c1.no2;
	// created object and took input 
	int action = 0;
	// created action variable for switch case
	cout<<"Enter the operation you want to perform"<<endl;
	cout<<"1. addition"<<endl;
	cout<<"2. substraction"<<endl;
	cout<<"3. multiplication"<<endl;
	cout<<"4. division"<<endl;
	cin>>action;
	cout<<"answer is"<<endl;
	//switch case
	switch (action)
	{
		case 1:
			c1.add();
			break;
		case 2:
			c1.sub();
			break;
		case 3:
			c1.mul();
			break;
		case 4:
			c1.div();
			break;
	}
}
