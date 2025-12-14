//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include "Employee.h"

// Initialize static data member
int Employee::totalEmployees = 0;

// Parameterized constructor
Employee::Employee(int id, char* name, float s) {
    empID = id;
    salary = s;

    int len = 0;
    while (name[len] != '\0') {
        len++;
    }

    empName = new char[len + 1];
    for (int i = 0; i < len; i++) {
        empName[i] = name[i];
    }
    empName[len] = '\0';

    totalEmployees++;
}

// Setter to modify salary
void Employee::setSalary(float newSalary) {
    salary = newSalary;
}

// Constant member function to display employee details
void Employee::showDetails() const {
    cout << "Employee ID: " << empID << endl;
    cout << "Employee Name: " << empName << endl;
    cout << "Salary: " << salary << endl;
}

// Static function to display total number of employees
void Employee::getTotalEmployees() {
    cout << "Total Employees: " << totalEmployees << endl;
}

// Destructor
Employee::~Employee() {
    delete[] empName;
}
