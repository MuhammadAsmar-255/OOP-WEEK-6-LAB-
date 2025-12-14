//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include "Course.h"

int main() {
    char c1[10] = "CS101";
    char c2[10] = "CS102";
    char c3[10] = "CS103";

    char inst1[20] = "Dr. Ahmed";
    char inst2[20] = "Prof. Bilal";
    char inst3[20] = "Sir Asmar";

    // Creating three course objects
    Course course1(c1, inst1, 40);
    Course course2(c2, inst2, 55);
    Course course3(c3, inst3, 35);

    cout << "Course 1 Information:" << endl;
    course1.displayCourseInfo();
    cout << endl;

    cout << "Course 2 Information:" << endl;
    course2.displayCourseInfo();
    cout << endl;

    cout << "Course 3 Information:" << endl;
    course3.displayCourseInfo();
    cout << endl;

    // Updating instructor name for course2
    char newInstructor[20] = "Dr. Ali";
    course2.setInstructorName(newInstructor);
    cout << "After updating instructor for Course 2:" << endl;
    course2.displayCourseInfo();
    cout << endl;

    // Creating a constant Course object
    const Course constCourse((char*)"CS104", (char*)"Dr. Khan", 25);
    cout << "Constant Course Object Information:" << endl;
    constCourse.displayCourseInfo(); // Only const functions are allowed
    cout << endl;

    // Display total number of courses using static function (no object)
    Course::showTotalCourses();

    return 0;
}
