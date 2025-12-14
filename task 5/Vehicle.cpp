//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include "Vehicle.h"

// Initialize static member
int Vehicle::totalVehicles = 0;

// Parameterized constructor
Vehicle::Vehicle(int regNo, char* name, float cap) {
    registrationNumber = regNo;
    engineCapacity = cap;

    int len = 0;
    while (name[len] != '\0') {
        len++;
    }

    ownerName = new char[len + 1];
    for (int i = 0; i < len; i++) {
        ownerName[i] = name[i];
    }
    ownerName[len] = '\0';

    totalVehicles++;
}

// Setter for owner name
void Vehicle::setOwnerName(char* newName) {
    int len = 0;
    while (newName[len] != '\0') {
        len++;
    }

    delete[] ownerName;
    ownerName = new char[len + 1];
    for (int i = 0; i < len; i++) {
        ownerName[i] = newName[i];
    }
    ownerName[len] = '\0';
}

// Static function to get total number of vehicles
int Vehicle::getTotalVehicles() {
    return totalVehicles;
}

// Constant function to display vehicle info
void Vehicle::displayInfo() const {
    cout << "Registration Number: " << registrationNumber << endl;
    cout << "Owner Name: " << ownerName << endl;
    cout << "Engine Capacity: " << engineCapacity << " CC" << endl;
}

// Destructor
Vehicle::~Vehicle() {
    delete[] ownerName;
}
