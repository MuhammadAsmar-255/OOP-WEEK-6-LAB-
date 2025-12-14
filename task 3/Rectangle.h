//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(float, float);    // Constructor
    float getArea() const;      // Constant member function
    void display() const;       // Display rectangle details
};
