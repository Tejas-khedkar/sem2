#include<iostream>
using namespace std;

class Student
{
private:
    int marks[5];   
protected:
    int studentID;
    string studentName;
public:
    void input()
    {
        cout<<"Enter Student ID: ";
        cin>>studentID;

        cout<<"Enter Student Name: ";
        cin>>studentName;
        cout<<"Enter marks of 5 subjects:\n";
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    void display()
    {
        cout<<"\nStudent ID: "<<studentID<<endl;
        cout<<"Student Name: "<<studentName<<endl;

        cout<<"Marks: ";
        for(int i=0;i<5;i++)
        {
            cout<<marks[i]<<" ";
        }
        cout<<endl;
    }
    int getMark(int i)
    {
        return marks[i];
    }

    int operator+(Student A)
    {
        int total = 0;

        for(int i=0;i<5;i++)
        {
            total += marks[i] + A.marks[i];
        }

        return total;
    }
    int totalMarks()
    {
        int total = 0;
        for(int i=0;i<5;i++)
        {
            total += marks[i];
        }
        return total;
    }
};
class Undergraduate : public Student
{
public:

    void result()
    {
        int total = totalMarks();
        float percentage = total/5.0;

        cout<<"Total Marks: "<<total<<endl;
        cout<<"Percentage: "<<percentage<<"%"<<endl;

        if(percentage>=75)
            cout<<"Grade: A"<<endl;
        else if(percentage>=60)
            cout<<"Grade: B"<<endl;
        else if(percentage>=40)
            cout<<"Grade: C"<<endl;
        else
            cout<<"Grade: Fail"<<endl;
    }
};

class Postgraduate : public Student
{
public:

    void result()
    {
        int total = totalMarks();
        float percentage = total/5.0;

        cout<<"Total Marks: "<<total<<endl;
        cout<<"Percentage: "<<percentage<<"%"<<endl;

        if(percentage>=75)
            cout<<"Grade: A"<<endl;
        else if(percentage>=60)
            cout<<"Grade: B"<<endl;
        else if(percentage>=40)
            cout<<"Grade: C"<<endl;
        else
            cout<<"Grade: Fail"<<endl;
    }
};




int main()
{
int n;
int n2;
cout << "Enter number of Undergraduate students: ";
cin >> n;

Undergraduate ug[n];

for (int i = 0; i < n; i++)
{
cout << "\nEnter details for Undergraduate Student " << i + 1 << endl;
ug[i].input();
}

cout << "\nUndergraduate Results \n";
for (int i = 0; i < n; i++)
{
ug[i].display();
ug[i].result();
}

//

cout << "Enter number of Postgraduate students: ";
cin >> n;

Postgraduate pg[n];

for (int i = 0; i < n; i++)
{
cout << "\nEnter details for Postgraduate Student " << i + 1 << endl;
pg[i].input();
}

cout << "\nPostgraduate Results \n";
for (int i = 0; i < n; i++)
{
pg[i].display();
pg[i].result();
}
return 0;
}

