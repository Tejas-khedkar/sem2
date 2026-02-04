#include <iostream>
using namespace std;
//generatePayslip is friend class of Employee 
class Employee{
	private:
		int ID;
		string Name;
		double BasicSalary;
		string EmpoyeeType;
	public:
		void getEmployee(){
			cout <<"Enter employee ID: "<< endl;
			cin >> ID ;
			cout <<"Enter employee name: "<< endl;
			cin >> Name;
			cout <<"Enter employee's basic salary': "<< endl;
			cin >> BasicSalary;
		}
	friend class generatePayslip;
};


class generatePayslip{
	private:
		double bonus;
		double totalsal;
		double BasicSalary;
	public:
		void calcBonus(Employee e){
			bonus = e.BasicSalary*0.05;
			totalsal = e.BasicSalary + bonus;
			cout <<endl<<"Total salary (including 5% bonus): "<<totalsal;
		}
};

int main()
{
	Employee e1;
	e1.getEmployee();
	generatePayslip p1;
	p1.calcBonus(e1);
	return 0;
}
