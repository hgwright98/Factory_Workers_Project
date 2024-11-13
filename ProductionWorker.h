#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "EmployeeClass.h"

class ProductionWorker : public EmployeeClass {
private:
    int shift;        
    double hourlyPayRate; 

public:
    // Precondition: None
    ProductionWorker(string empName, int empNumber, string empHireDate, int empShift, double empHourlyPayRate);
    // Postcondition: ProductionWorker object created with specified name, number, hire date, shift, and hourly pay rate

    // Precondition: None
    int getShift() const;
    // Postcondition: Returns the worker's shift

    // Precondition: None
    double getHourlyPayRate() const;
    // Postcondition: Returns the worker's hourly pay rate

    // Precondition: None
    void setShift(int empShift);
    // Postcondition: Worker’s shift is updated

    // Precondition: None
    void setHourlyPayRate(double empHourlyPayRate);
    // Postcondition: Worker’s hourly pay rate is updated

    // Precondition: None
    void print() const;
    // Postcondition: Prints both employee and production worker details
};

#endif
