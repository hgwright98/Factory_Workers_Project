#ifndef EMPLOYEECLASS_H 
#define EMPLOYEECLASS_H

#include <string>
using namespace std;

class EmployeeClass{
  private:
    string name;
    int EmployeeNumber;
    string hireDate;

  public:
    EmployeeClass(string empName, int empNumber, string empHireDate);

    // Precondition: None
    string getName() const;
    // Postcondition: This returns the employee's name

    // Precondition: None
    int getEmployeeNumber() const;
    // Postcondition: This returns the employee's ID number

    // Precondition: None
    string getHireDate() const;
    // Postcondition: This returns the employee's hire date

    // Precondition: None
    void setName(string empName);
    // Postcondition: This updates the employee's name

    // Precondition: None
    void setEmployeeNumber(int empNumber);
    // Postcondition: This updates the employee's number

    // Precondition: None
    void setHireDate(string empHireDate);
    // Postcondition: This updates the employee's hire date

    // Precondition: None
    void print() const;
    // Postcondition: This displays the employee's name, ID, and hire date
};


#endif // EMPLOYEECLASS_H