//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;

class Car {
private:
    char* brandName;
    float price;
    static int totalCars;      // static data member

public:
    Car();                     // Default constructor
    void setBrandName(char*);  // Setter for brand name
    void setPrice(float);      // Setter for price
    char* getBrandName();      // Getter for brand name
    float getPrice();          // Getter for price
    static void displayTotalCars();  // Static function
    void displayDetails() const;     // Constant member function
    ~Car();                    // Destructor
};
