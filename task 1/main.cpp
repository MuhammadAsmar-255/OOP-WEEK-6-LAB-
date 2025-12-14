//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include "Student.h"

int main() {
    // Object using default constructor
    Student s1;
    cout << "Default Constructor:" << endl;
    s1.display();
    cout << endl;

    // Object using parameterized constructor
    char n1[20] = "Ali";
    Student s2(n1, 88.5);
    cout << "Parameterized Constructor:" << endl;
    s2.display();
    cout << endl;

    // Modifying using setters
    char n2[20] = "Asmar";
    s1.setName(n2);
    s1.setMarks(95.0);
    cout << "After using setters:" << endl;
    s1.display();

    return 0;
}
