#include "./depend/dep.cpp"

class Person
{
public:
    Person(){};
    Person(std::string Name, int age);
    std::string getName();
    int getAge();
    void setName(std::string name) {};
    void setAge(int age) {};

private:
    std::string name;
    int age;
};