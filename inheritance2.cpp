#include<iostream>
using namespace std;
class vehical
{
	public:
		string name;
		int speed;
		
};

class car : public vehical
{
	public:
		
	int speedlimit()
	{
		if(speed>80)
		{
			cout<<"exeeding speedlimit for cars"<<endl;
		}
	}
};

class bike : public vehical
{
	public:
		if(speed>60)
		{
			cout<<"exeeding speedlimit for motorbikes"<<endl;
		}
		
};

class truck : public vehical
{
	public:
		if(speed>40)
		{
			cout<<"exeeding speedlimit for trucks"<<endl;
		}
};

int main()
{
	car c1;
	bike b1;
	truck t1;
	c1.speed = 81;	
	b1.speed = 60;
	t1.speed = 40;
	c1.speedlimit();
}
