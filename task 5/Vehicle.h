//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;

class Vehicle {
private:
    int registrationNumber;
    char* ownerName;
    float engineCapacity;
    static int totalVehicles;     // Shared among all vehicles

public:
    Vehicle(int, char*, float);   // Parameterized constructor
    void setOwnerName(char*);     // Setter for owner name
    static int getTotalVehicles(); // Static function to get total count
    void displayInfo() const;     // Constant member function
    ~Vehicle();                   // Destructor
};
