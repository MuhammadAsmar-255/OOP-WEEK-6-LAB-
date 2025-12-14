//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include "Student.h"

// Default constructor
Student::Student() {
    name = new char[8];
    name[0] = 'U';
    name[1] = 'n';
    name[2] = 'k';
    name[3] = 'n';
    name[4] = 'o';
    name[5] = 'w';
    name[6] = 'n';
    name[7] = '\0';
    marks = 0;
}

// Parameterized constructor
Student::Student(char* n, float m) {
    int len = 0;
    while (n[len] != '\0') {
        len++;
    }
    name = new char[len + 1];
    for (int i = 0; i < len; i++) {
        name[i] = n[i];
    }
    name[len] = '\0';
    marks = m;
}

// Setter for name
void Student::setName(char* n) {
    int len = 0;
    while (n[len] != '\0') {
        len++;
    }
    delete[] name;
    name = new char[len + 1];
    for (int i = 0; i < len; i++) {
        name[i] = n[i];
    }
    name[len] = '\0';
}

// Setter for marks
void Student::setMarks(float m) {
    marks = m;
}

// Getter for name
char* Student::getName() {
    return name;
}

// Getter for marks
float Student::getMarks() {
    return marks;
}

// Display function
void Student::display() {
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
}

// Destructor
Student::~Student() {
    delete[] name;
}
