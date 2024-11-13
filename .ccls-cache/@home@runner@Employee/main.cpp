#include <iostream>
#include "ProductionWorker.h"
#include "TeamLeader.h"

int main() {
    // This creates ProductionWorker objects
    ProductionWorker worker1("Paul Jones", 12345, "10/28/2024", 1, 20.25);
    ProductionWorker worker2("Harriet Smith", 54321, "6/15/2024", 2, 25.50);

    // This creates a TeamLeader object 
    TeamLeader teamLeader("Mike Rogers", 64327, "2/7/2024", 2, 25.50, 150.00, 20, 10);

    // This displays information for both workers and the team leader
    cout << "Production Worker 1 Information:" << endl;
    worker1.print();

    cout << "\nProduction Worker 2 Information:" << endl;
    worker2.print();

    cout << "\nTeam Leader Information:" << endl;
    teamLeader.print();

    return 0;
}
