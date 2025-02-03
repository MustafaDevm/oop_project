#include <iostream>
#include "student/Student.h"
#include "professor/Professor.h"
#include "subject/Subject.h"

void displayMenu()
{ 
    std::cout << "School Management System\n";
    std::cout << "1. Add a new Student\n";
    std::cout << "2. Assign a Subject to a Student\n";
    std::cout << "3. View all Professors\n";
    std::cout << "4. Mark Attendance\n";
    std::cout << "5. View Grades\n";
    std::cout << "6. Exit\n";
    std::cout << "Enter your choice: ";

}
