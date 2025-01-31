#include "../depend/dep.cpp"

class Subject
{
public:
 Subject();
  Subject(int code, string name);
  int getCode() {};
  string getName() {};
  void setCode(int code) {};
  void setName(string name) {};

private:
  int code;
  string name;
};
