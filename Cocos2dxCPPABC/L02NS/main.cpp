#include <iostream>
#include "People.h"

using namespace jikexueyuan;
int main(int argc, const char *argv[])
{
    jikexueyuan::People *p = new jikexueyuan::People();
    People *p = new People();
    p->sayHello();
    delete p;
    return 0;
}