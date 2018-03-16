#include <iostream>

class Object
{
  public:
    Object()
    {
        printf("Create Object\n");
    };
    ~Object()
    {
        printf("Delete Object\n");
    }
};

void runObject()
{
    {
        Object obj;
    }
    printf("runObject end\n");
}

int main(int argc, const char *argv[])
{
    // Object *obj = new Object();
    // delete obj;
    runObject();
    printf("end\n");
    return 0;
}