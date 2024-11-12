#include <iostream>
#include "EmployeeClass.h"

int main() {
    // Create an EmployeeClass object
    EmployeeClass emp1("John Doe", 12345, "March 15, 2015");

    // Display employee details using the print function
    cout << "Employee Information:" << endl;
    emp1.print();

    // Modify employee details using mutators
    emp1.setName("Jane Smith");
    emp1.setEmployeeNumber(67890);
    emp1.setHireDate("January 20, 2018");

    cout << "\nUpdated Employee Information:" << endl;
    emp1.print();

    return 0;
}
