//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include "Employee.h"

int main() {
    // Creating Employee objects
    char name1[20] = "Ali";
    char name2[20] = "Bilal";
    char name3[20] = "Asmar";

    Employee e1(101, name1, 55000);
    Employee e2(102, name2, 60000);
    Employee e3(103, name3, 65000);

    cout << "Employee 1 Details:" << endl;
    e1.showDetails();
    cout << endl;

    cout << "Employee 2 Details:" << endl;
    e2.showDetails();
    cout << endl;

    // Modifying salary for employee 1
    cout << "Updating salary for Employee 1..." << endl;
    e1.setSalary(58000);
    e1.showDetails();
    cout << endl;

    // Creating a constant employee object
    const Employee e4(104, (char*)"Zain", 70000);
    cout << "Constant Employee Details (only const functions allowed):" << endl;
    e4.showDetails();
    cout << endl;

    // Display total employees using class name
    cout << "Accessing static function using class name:" << endl;
    Employee::getTotalEmployees();
    cout << endl;

    // Display total employees using object
    cout << "Accessing static function using an object:" << endl;
    e1.getTotalEmployees();

    return 0;
}
