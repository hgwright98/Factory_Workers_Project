#include <iostream>
#include "ProductionWorker.h"

int main() {
    // This creates ProductionWorker objects
    ProductionWorker worker1("Paul Jones", 12345, "10/28/2024", 1, 20.25);
    ProductionWorker worker2("Harriet Smith", 54321, "6/15/2024", 2, 25.50);

    // This displays information for both workers
    cout << "Production Worker 1 Information:" << endl;
    worker1.print();

    cout << "\nProduction Worker 2 Information:" << endl;
    worker2.print();

    return 0;
}
