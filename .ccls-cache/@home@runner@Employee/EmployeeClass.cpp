#include "EmployeeClass.h"
#include <iostream>
using namespace std;

// Constructor to initialize employee details
EmployeeClass::EmployeeClass(string empName, int empNumber, string empHireDate) {
    name = empName;
    EmployeeNumber = empNumber;
    hireDate = empHireDate;
}

// Accessor functions
string EmployeeClass::getName() const {
    return name;
}

int EmployeeClass::getEmployeeNumber() const {
    return EmployeeNumber;
}

string EmployeeClass::getHireDate() const {
    return hireDate;
}

// Mutator functions
void EmployeeClass::setName(string empName) {
    name = empName;
}

void EmployeeClass::setEmployeeNumber(int empNumber) {
    EmployeeNumber = empNumber;
}

void EmployeeClass::setHireDate(string empHireDate) {
    hireDate = empHireDate;
}

// Print function to display employee details
void EmployeeClass::print() const {
    cout << "Employee Name: " << name << endl;
    cout << "Employee ID: " << EmployeeNumber << endl;
    cout << "Hire Date: " << hireDate << endl;
}