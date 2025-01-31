#include "person.h"

Person::Person(std::string name, int age)
{
  this->name = name;
  this->age = age;
}

int Person::getAge()
{
  return age;
}

std::string Person::getName()
{
  return name;
}

void Person::setAge(int age)
{
  this->age = age;
}

void Person::setName(std::string name)
{
  this->name = name;
}
