#include <iostream>
#include <thread>
#include <unistd.h>
class Object;

typedef void (Object::*SayHi)();

class Object
{
  public:
    SayHi sayHi;
};

class Hello : public Object
{
  public:
    Hello()
    {
        sayHi = (SayHi)(&Hello::HelloSayHi);
        (this->*sayHi)();
    }

    void HelloSayHi()
    {
        printf("Hello CPP\n");
    }
};

int main(int argc, const char *argv[])
{
    Hello *h = new Hello();

    delete h;
    return 0;
}