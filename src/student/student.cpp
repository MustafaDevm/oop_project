#include "student.h"

Student::Student(int age, double GPA, vector<Subject> &subs)
{
    this->age = age;
    this->GPA = GPA;
    this->subs = subs;
}
double Student::getGPA() { return GPA; }

int Student::getID() {return id;}
void Student::setID(double id) { this->id=id;}
double Student:: getGPA() {return GPA;}
void Student::setAge(int age) {this->age=age;}