#include "ShiftSupervisor.h"
#include <iostream>

// This is the constructor to initialize ShiftSupervisor
ShiftSupervisor::ShiftSupervisor(string empName, int empNumber, string empHireDate, double empAnnualSalary, double empAnnualBonus)
    : EmployeeClass(empName, empNumber, empHireDate) { 
    annualSalary = empAnnualSalary;
    annualBonus = empAnnualBonus;
}

double ShiftSupervisor::getAnnualSalary() const {
    return annualSalary;
}

double ShiftSupervisor::getAnnualBonus() const {
    return annualBonus;
}

void ShiftSupervisor::setAnnualSalary(double empAnnualSalary) {
    annualSalary = empAnnualSalary;
}

void ShiftSupervisor::setAnnualBonus(double empAnnualBonus) {
    annualBonus = empAnnualBonus;
}

void ShiftSupervisor::print() const {
    EmployeeClass::print();
    cout << "Annual Salary: $" << annualSalary << endl;
    cout << "Annual Bonus: $" << annualBonus << endl;
}
