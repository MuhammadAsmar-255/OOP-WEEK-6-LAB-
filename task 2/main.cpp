//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include "Car.h"

int main() {
    cout << "Creating Car Objects..." << endl;

    // Object 1 using default constructor
    Car c1;
    c1.displayDetails();
    cout << endl;

    // Object 2 using setters
    Car c2;
    char brand1[20] = "Toyota";
    c2.setBrandName(brand1);
    c2.setPrice(35000.50);
    c2.displayDetails();
    cout << endl;

    // Object 3 using setters
    Car c3;
    char brand2[20] = "Honda";
    c3.setBrandName(brand2);
    c3.setPrice(28000.75);
    c3.displayDetails();
    cout << endl;

    // Display total cars created
    Car::displayTotalCars();

    return 0;
}
