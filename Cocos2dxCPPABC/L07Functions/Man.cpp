#include "Man.h"

Man::Man(int age) : People(age, 1)
{
    //People::sayHello();
}

void Man::sayHello()
{
    // People::sayHello();
    printf("Man say: Hello CPP\n");
}