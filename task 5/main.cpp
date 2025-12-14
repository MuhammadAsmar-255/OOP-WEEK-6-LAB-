//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include "Vehicle.h"

int main() {
    char name1[20] = "Asmar";
    char name2[20] = "Ali";
    char name3[20] = "Ahmed";

    // Creating multiple vehicle objects
    Vehicle v1(101, name1, 1300.0);
    Vehicle v2(102, name2, 1500.0);

    cout << "Vehicle 1 Info:" << endl;
    v1.displayInfo();
    cout << endl;

    cout << "Vehicle 2 Info:" << endl;
    v2.displayInfo();
    cout << endl;

    // Updating owner name for v2
    char newOwner[20] = "Bilal";
    v2.setOwnerName(newOwner);

    cout << "After updating owner name for Vehicle 2:" << endl;
    v2.displayInfo();
    cout << endl;

    // Creating a constant object
    const Vehicle v3(103, name3, 1000.0);
    cout << "Constant Object (Vehicle 3) Info:" << endl;
    v3.displayInfo(); // Only const functions can be called
    cout << endl;

    // Display total vehicles (static function called without object)
    cout << "Total Registered Vehicles: " << Vehicle::getTotalVehicles() << endl;

    return 0;
}
