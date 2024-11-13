#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;        
    int requiredTrainingHours;   
    int attendedTrainingHours;  

public:
  
    // Precondition: None
    TeamLeader(string empName, int empNumber, string empHireDate, int empShift, double empHourlyPayRate, double empMonthlyBonus, int empRequiredTrainingHours, int empAttendedTrainingHours);
    // Postcondition: TeamLeader object created with specified name, number, hire date, shift, hourly rate, bonus, and training hours

    // Precondition: None
    double getMonthlyBonus() const;
    // Postcondition: Returns the team leader's monthly bonus

    // Precondition: None
    int getRequiredTrainingHours() const;
    // Postcondition: Returns the team leader's required training hours

    // Precondition: None
    int getAttendedTrainingHours() const;
    // Postcondition: Returns the team leader's attended training hours

    // Precondition: None
    void setMonthlyBonus(double empMonthlyBonus);
    // Postcondition: Team leader's monthly bonus is updated

    // Precondition: None
    void setRequiredTrainingHours(int empRequiredTrainingHours);
    // Postcondition: Team leader's required training hours are updated

    // Precondition: None
    void setAttendedTrainingHours(int empAttendedTrainingHours);
    // Postcondition: Team leader's attended training hours are updated

    // Precondition: None
    void print() const;
   // Postcondition: Prints both employee and team leader details
};

#endif
