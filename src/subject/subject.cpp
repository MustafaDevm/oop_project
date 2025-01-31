#include "subject.h"

Subject::Subject(int code, string name)
{

    this->code = code;
    this->name = name;
};
int Subject::getCode()
{
    return code;
}
string Subject::getName()
{
    return name;
}
void Subject ::setCode(int code)
{
    this->code = code;
}
void Subject::setName(string name)
{
    this->name = name;
}