#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"

int main() {
    // Create ProductionWorker objects for Paul Jones and Harriet Smith
    ProductionWorker worker1("Paul Jones", 12345, "10/28/2024", 1, 20.25);
    ProductionWorker worker2("Harriet Smith", 54321, "6/15/2024", 2, 25.50);

    // Create a ShiftSupervisor object for Elmer Velasquez
    ShiftSupervisor supervisor("Elmer Velasquez", 100325, "1/17/2024", 70000.00, 1000.00);

    // Display information for both workers and the supervisor
    cout << "Production Worker 1 Information:" << endl;
    worker1.print();

    cout << "\nProduction Worker 2 Information:" << endl;
    worker2.print();

    cout << "\nShift Supervisor Information:" << endl;
    supervisor.print();

    return 0;
}
