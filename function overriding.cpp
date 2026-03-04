#include<iostream> 
#include<string> 
using namespace std; 
class Employee 
{ 
public: 
string name; 
int basesalary; 
void getdata() 
{ 
cout<<"Enter Employee Name: "; 
cin>>name; 
cout<<"Enter Basic Salary: "; 
cin>>basesalary; 
} 
void showdata() 
{
cout<<"Employee Name: "<<name<<endl; 
cout<<"Base Salary: "<<basesalary<<endl; 
} 
virtual int calculatesalary(int basesalary) 
{ 
return basesalary; 
} 
}; 
class Manager:public Employee 
{ 
public: 
int calculatesalary(int basesalary) override 
{ 
return basesalary+((30*basesalary)/100)+((20*basesalary)/100); } 
}; 
class Developer:public Employee 
{ 
public: 
int calculatesalary(int basesalary) override 
{ 
return basesalary+((20*basesalary)/100)+((10*basesalary)/100); } 
}; 
class Intern:public Employee 
{ 
public: 
int calculatesalary(int basesalary) override 
{
return 5000; 
} 
}; 
int main() 
{ 
Employee *e; 
Manager m; 
Developer d; 
Intern i; 
int choice; 
cout << "===== Employee Salary System =====\n"; 
 cout << "1. Manager\n2. Developer\n3. Intern\n"; 
 cout << "Enter employee type: "; 
cin>>choice; 
switch(choice) 
{ 
case 1: 
e = &m; 
e->getdata(); 
cout<<"FINAL PAYSLIP"<<endl; 
e->showdata(); 
cout<<"Designation: Manager"<<endl; 
cout<<"Final Salary: "<<e->calculatesalary(e->basesalary)<<endl; break; 
case 2: 
e = &d; 
e->getdata();
cout<<"FINAL PAYSLIP"<<endl; 
e->showdata(); 
cout<<"Designation: Developer"<<endl; 
cout<<"Final Salary: "<<e->calculatesalary(e->basesalary)<<endl; break; 
case 3: 
e = &i; 
e->getdata(); 
cout<<"FINAL PAYSLIP"<<endl; 
e->showdata(); 
cout<<"Designation: Intern"<<endl; 
cout<<"Final Salary: "<<e->calculatesalary(e->basesalary)<<endl; break; 
default: 
cout<<"Invalid choice"<<endl; 
break; 
} 
return 0; 
}

