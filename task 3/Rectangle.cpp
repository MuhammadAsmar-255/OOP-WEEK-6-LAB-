//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include "Rectangle.h"

// Constructor
Rectangle::Rectangle(float l, float w) {
    length = l;
    width = w;
}

// Constant member function to calculate area
float Rectangle::getArea() const {
    // The following line would cause a compilation error if uncommented:
    // length = 10; // Not allowed because getArea() is const
    return length * width;
}

// Constant function to display rectangle details
void Rectangle::display() const {
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << getArea() << endl;
}
