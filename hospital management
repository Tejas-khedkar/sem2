// HospitalManagement.cpp
// Small Hospital Management System using multilevel inheritance

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showPerson() {
        cout << "
Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Patient : public Person {
public:
    int patientID;
    string disease;

    void getPatient() {
        cout << "Enter patient ID: ";
        cin >> patientID;
        cout << "Enter disease: ";
        cin >> disease;
    }

    void showPatient() {
        cout << "Patient ID: " << patientID << endl;
        cout << "Disease: " << disease << endl;
    }
};

class InPatient : public Patient {
public:
    int roomNo, days, chargePerDay, bill, extend;

    void getInPatient() {
        cout << "Enter room number: ";
        cin >> roomNo;
        cout << "Enter number of days: ";
        cin >> days;
        cout << "Enter charge per day: ";
        cin >> chargePerDay;
    }

    void showInPatient() {
        cout << "
----- PATIENT DETAILS -----" << endl;
        cout << "Room No.\tDays\tCharge per day" << endl;
        cout << roomNo << "\t\t" << days << "\t" << chargePerDay << endl;
    }

    void calculateBill() {
        bill = chargePerDay * days;
        cout << "Total bill: " << bill << endl;
    }

    void extendStay() {
        char ch;
        cout << "Is the stay extended? (y/n): ";
        cin >> ch;

        if (ch == 'y' || ch == 'Y') {
            cout << "Enter number of additional days: ";
            cin >> extend;
            bill = chargePerDay * (days + extend);
            cout << "Extended stay. Final bill: " << bill << endl;
        } else {
            cout << "No extended stay." << endl;
            cout << "Final bill: " << bill << endl;
        }
    }

    void discharge() {
        cout << "
----- DISCHARGE SUMMARY -----" << endl;
        showPerson();
        showPatient();
        cout << "Room No.: " << roomNo << endl;
        cout << "Days stayed: " << (days + extend) << endl;
        cout << "Final bill: " << bill << endl;
        cout << "Patient discharged successfully." << endl;
    }
};

int main() {
    InPatient ip;

    // Enter all details
    ip.getPerson();
    ip.getPatient();
    ip.getInPatient();

    // Display all information
    ip.showPerson();
    ip.showPatient();
    ip.showInPatient();

    // Calculate initial bill
    ip.calculateBill();

    // Extend stay and recalculate
    ip.extendStay();

    // Discharge patient
    ip.discharge();

    return 0;
}
