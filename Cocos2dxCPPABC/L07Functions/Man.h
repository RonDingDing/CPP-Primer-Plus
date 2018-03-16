#ifndef __L03Classes__Man__
#define __L03Classes__Man__

#include <iostream>
#include "People.h"

class Man : public People
{
public:
  Man(int age);
  virtual void sayHello();
  virtual void eat()
  {
    printf("Man eats.\n");
  }
};

#endif