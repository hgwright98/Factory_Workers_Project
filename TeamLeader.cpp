#include "TeamLeader.h"
#include <iostream>

// This is the constructor to initialize TeamLeader 
TeamLeader::TeamLeader(string empName, int empNumber, string empHireDate, int empShift, double empHourlyPayRate,
                       double empMonthlyBonus, int empRequiredTrainingHours, int empAttendedTrainingHours)
    : ProductionWorker(empName, empNumber, empHireDate, empShift, empHourlyPayRate) {  // Call the base class constructor
    monthlyBonus = empMonthlyBonus;
    requiredTrainingHours = empRequiredTrainingHours;
    attendedTrainingHours = empAttendedTrainingHours;
}

double TeamLeader::getMonthlyBonus() const {
    return monthlyBonus;
}

int TeamLeader::getRequiredTrainingHours() const {
    return requiredTrainingHours;
}

int TeamLeader::getAttendedTrainingHours() const {
    return attendedTrainingHours;
}

void TeamLeader::setMonthlyBonus(double empMonthlyBonus) {
    monthlyBonus = empMonthlyBonus;
}

void TeamLeader::setRequiredTrainingHours(int empRequiredTrainingHours) {
    requiredTrainingHours = empRequiredTrainingHours;
}

void TeamLeader::setAttendedTrainingHours(int empAttendedTrainingHours) {
    attendedTrainingHours = empAttendedTrainingHours;
}

void TeamLeader::print() const {
    ProductionWorker::print();
    cout << "Monthly Bonus: $" << monthlyBonus << endl;
    cout << "Required Training Hours: " << requiredTrainingHours << endl;
    cout << "Attended Training Hours: " << attendedTrainingHours << endl;
}
