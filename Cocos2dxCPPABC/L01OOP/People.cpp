#include <iostream>
#include "People.h"

// class People
// {
//   public:
//     void sayHello()
//     {

//         printf("Hello CPP\n");
//     }
// };
void People::sayHello()
{
    printf("Hello CPP\n");
}

int main(int argc, const char *argv[])
{
    People *p = new People();
    p->sayHello();
    delete p;
    return 0;
}