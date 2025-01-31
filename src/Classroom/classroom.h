#include "../depend/dep.cpp"
#include "./student/student.h"
#include "./subject/subject.h"
class Classroom{

    public :
        Classroom(){};

 //no methods in UML for project🤔

private:
int room_number;
int capacity;
vector<Student> students;
vector<Subject>subs;


};