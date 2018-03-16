#include <iostream>
#include "Man.h"

int main(int argc, const char *argv[])
{
    People *p = new Man(20);
    p->sayHello();
    p->eat();
    return 0;
}