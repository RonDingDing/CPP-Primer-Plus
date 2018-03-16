#include <iostream>
#include "Man.h"
 
int main(int argc, const char *argv[])
{
    Man *m = new Man(21);
    // m->sayHello();
    m->People::sayHello();
 
    return 0;
}