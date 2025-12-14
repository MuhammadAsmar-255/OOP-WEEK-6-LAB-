//L1F24BSCS0069-MUHAMMAD ASMAR NAEEM
#include<iostream>
using namespace std;

class Course {
private:
    char* courseCode;
    char* instructorName;
    int enrolledStudents;
    static int totalCourses;    // Shared among all courses

public:
    Course(char*, char*, int);  // Constructor
    void setInstructorName(char*);  // Setter for instructor name
    void displayCourseInfo() const; // Constant function to display info
    static void showTotalCourses();  // Static function
    ~Course();                      // Destructor
};
