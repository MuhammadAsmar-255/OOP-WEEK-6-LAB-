//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;

class Student {
private:
    char* name;
    float marks;

public:
    Student();               // Default constructor
    Student(char*, float);   // Parameterized constructor
    void setName(char*);     // Setter for name
    void setMarks(float);    // Setter for marks
    char* getName();         // Getter for name
    float getMarks();        // Getter for marks
    void display();          // Display details
    ~Student();              // Destructor
};
