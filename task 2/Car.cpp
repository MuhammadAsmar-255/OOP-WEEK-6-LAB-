//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include "Car.h"

// Initialize static member
int Car::totalCars = 0;

// Default constructor
Car::Car() {
    brandName = new char[8];
    brandName[0] = 'U';
    brandName[1] = 'n';
    brandName[2] = 'k';
    brandName[3] = 'n';
    brandName[4] = 'o';
    brandName[5] = 'w';
    brandName[6] = 'n';
    brandName[7] = '\0';
    price = 0;
    totalCars++;
}

// Setter for brand name
void Car::setBrandName(char* name) {
    int len = 0;
    while (name[len] != '\0') {
        len++;
    }
    delete[] brandName;
    brandName = new char[len + 1];
    for (int i = 0; i < len; i++) {
        brandName[i] = name[i];
    }
    brandName[len] = '\0';
}

// Setter for price
void Car::setPrice(float p) {
    price = p;
}

// Getter for brand name
char* Car::getBrandName() {
    return brandName;
}

// Getter for price
float Car::getPrice() {
    return price;
}

// Static function to display total cars
void Car::displayTotalCars() {
    cout << "Total Cars Created: " << totalCars << endl;
}

// Constant member function to display details
void Car::displayDetails() const {
    cout << "Brand Name: " << brandName << endl;
    cout << "Price: " << price << endl;
}

// Destructor
Car::~Car() {
    delete[] brandName;
}
