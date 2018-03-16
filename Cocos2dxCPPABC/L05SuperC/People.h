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
  void sayHello();
  int getAge();
  int getSex();
};

#endif