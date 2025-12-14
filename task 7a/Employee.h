//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;

class Employee {
private:
    int empID;
    char* empName;
    float salary;
    static int totalEmployees;  // Shared among all Employee objects

public:
    Employee(int, char*, float);    // Parameterized constructor
    void setSalary(float);          // Setter to modify salary
    void showDetails() const;       // Constant function
    static void getTotalEmployees(); // Static function
    ~Employee();                    // Destructor
};
