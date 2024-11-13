#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "EmployeeClass.h"

class ShiftSupervisor : public EmployeeClass {
private:
    double annualSalary;      
    double annualBonus;       

public:
    // Constructor to initialize ShiftSupervisor details
    // Precondition: None
    ShiftSupervisor(string empName, int empNumber, string empHireDate, double empAnnualSalary, double empAnnualBonus);
    // Postcondition: ShiftSupervisor object created with specified name, number, hire date, salary, and bonus

    // Precondition: None
    double getAnnualSalary() const;
    // Postcondition: Returns the shift supervisor's annual salary

    // Precondition: None
    double getAnnualBonus() const;
    // Postcondition: Returns the shift supervisor's annual bonus

    // Precondition: None
    void setAnnualSalary(double empAnnualSalary);
    // Postcondition: Shift supervisor's annual salary is updated

    // Precondition: None
    // Postcondition: Shift supervisor's annual bonus is updated
    void setAnnualBonus(double empAnnualBonus);

    // Precondition: None
    void print() const;
    // Postcondition: Prints both employee and shift supervisor details
};

#endif
