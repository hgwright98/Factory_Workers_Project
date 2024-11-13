#include "EmployeeClass.h"
#include <iostream>
using namespace std;

// This is the constructor that initializes employee details
EmployeeClass::EmployeeClass(string empName, int empNumber, string empHireDate) {
    name = empName;
    EmployeeNumber = empNumber;
    hireDate = empHireDate;
}

string EmployeeClass::getName() const {
    return name;
}

int EmployeeClass::getEmployeeNumber() const {
    return EmployeeNumber;
}

string EmployeeClass::getHireDate() const {
    return hireDate;
}

void EmployeeClass::setName(string empName) {
    name = empName;
}

void EmployeeClass::setEmployeeNumber(int empNumber) {
    EmployeeNumber = empNumber;
}

void EmployeeClass::setHireDate(string empHireDate) {
    hireDate = empHireDate;
}

// Thisis a print function to display employee details
void EmployeeClass::print() const {
    cout << "Employee Name: " << name << endl;
    cout << "Employee ID: " << EmployeeNumber << endl;
    cout << "Hire Date: " << hireDate << endl;
}