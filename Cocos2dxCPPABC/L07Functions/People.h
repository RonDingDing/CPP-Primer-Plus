#ifndef __L01OOP__People__
#define __L01OOP__People__
#include <iostream>

class People
{
private:
  int age;
  int sex;

public:
  People();
  People(int age, int sex);
  virtual void sayHello();
  virtual void eat() = 0;
  int getAge();
  int getSex();
};

#endif