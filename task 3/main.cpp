//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include "Rectangle.h"

int main() {
    Rectangle r1(5.5, 3.2);
    cout << "Rectangle Details:" << endl;
    r1.display();

    // Demonstration of constant function restriction:
    // If we try to modify a member inside getArea(), the compiler will give an error.

    return 0;
}
