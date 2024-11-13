#include "ProductionWorker.h"
#include <iostream>

// This is the constructor to initialize ProductionWorker details
ProductionWorker::ProductionWorker(string empName, int empNumber, string empHireDate, int empShift, double empHourlyPayRate)
    : EmployeeClass(empName, empNumber, empHireDate) {
    shift = empShift;
    hourlyPayRate = empHourlyPayRate;
}

int ProductionWorker::getShift() const {
    return shift;
}

double ProductionWorker::getHourlyPayRate() const {
    return hourlyPayRate;
}

void ProductionWorker::setShift(int empShift) {
    shift = empShift;
}

void ProductionWorker::setHourlyPayRate(double empHourlyPayRate) {
    hourlyPayRate = empHourlyPayRate;
}

void ProductionWorker::print() const {
    EmployeeClass::print();
    cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
    cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;
}