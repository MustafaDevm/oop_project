#include "professor.h"

Professor::Professor(int id, vector<Subject> &subs)
{
    this->id = id;
    this->subs = subs;
}
void Professor::setID(int id) { this->id = id; }
int Professor::getID() { return id; }
vector<Subject> Professor::getSubjects() { return subs; }
void Professor::setSubjects(vector<Subject> &subs) { this->subs = subs; }
