//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include "Course.h"

// Initialize static data member
int Course::totalCourses = 0;

// Constructor to initialize all attributes
Course::Course(char* code, char* instructor, int students) {
    int len1 = 0;
    while (code[len1] != '\0') {
        len1++;
    }
    courseCode = new char[len1 + 1];
    for (int i = 0; i < len1; i++) {
        courseCode[i] = code[i];
    }
    courseCode[len1] = '\0';

    int len2 = 0;
    while (instructor[len2] != '\0') {
        len2++;
    }
    instructorName = new char[len2 + 1];
    for (int i = 0; i < len2; i++) {
        instructorName[i] = instructor[i];
    }
    instructorName[len2] = '\0';

    enrolledStudents = students;
    totalCourses++;
}

// Setter function to modify instructor name
void Course::setInstructorName(char* newName) {
    int len = 0;
    while (newName[len] != '\0') {
        len++;
    }
    delete[] instructorName;
    instructorName = new char[len + 1];
    for (int i = 0; i < len; i++) {
        instructorName[i] = newName[i];
    }
    instructorName[len] = '\0';
}

// Constant member function to display course info
void Course::displayCourseInfo() const {
    cout << "Course Code: " << courseCode << endl;
    cout << "Instructor Name: " << instructorName << endl;
    cout << "Enrolled Students: " << enrolledStudents << endl;
}

// Static function to display total number of courses
void Course::showTotalCourses() {
    cout << "Total Courses Offered: " << totalCourses << endl;
}

// Destructor
Course::~Course() {
    delete[] courseCode;
    delete[] instructorName;
}
