#include<iostream>
using namespace std;
//base class
class animal
{
	public:
		string color;
	
	int display()
	{
		cout<<"color of this animal is "<<color<<endl;
	}
};
//inherited class
class carni : public animal
{
	public:
		string food;
		
	int display2()
	{
		cout<<"this animal eats "<<food<<endl;
	}
};
//inherited class
class herbi : public animal
{
	public:
		string predetors;
		
	int display2()
	{
		cout<<"this animal is eaten by "<<predetors<<endl;
	}
};


int main()
{
	carni c1;
	herbi h1;
	c1.color = ("yellow");
	h1.color = ("brown");
	//color is property inherited by derived classes 'carni' and 'herbi' from parent class 'animal'
	c1.food = ("dears, monkeys, rabits");
	h1.predetors = ("tigers, leopards");
	//food is only in class 'carni', predetors is only in class 'herbi'
	c1.display();
	c1.display2();
	//display funtion is inherited from class 'animal'
	h1.display();
	h1.display2();
	//display2 functions are defined in class herbi and carni
	
}
