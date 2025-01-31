#include "./depend/dep.cpp"
#include "./subject/subject.h"

class Student
{
public:
Student() {}
  Student(int age, double GPA, vector<Subject> &subs) {}
  int getID() {}
  void setID(double id) {}
  double getGPA() {}
  void setAge(int age) {}

private:
  int id;
  int age;
  double GPA;
  vector<Subject> subs;
};