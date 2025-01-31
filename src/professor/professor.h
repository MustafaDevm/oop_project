#include "../depend/dep.cpp"
#include "./subject/subject.h"
class Professor
{
public:
  Professor() {};
  Professor(int id, vector<Subject> &subs) {};
  void setID(int id) {};
  int getID() {};
  vector<Subject> getSubjects() {};
  void setSubjects(vector<Subject> &subs) {};

private:
  int id;
  vector<Subject> subs;
};

// fill the rest of the interface here