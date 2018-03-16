#include <iostream>

void hello()
{
    printf("hello\n");
}

class Hello
{
  public:
    void operator()()
    {
        printf("Hello CPP\n");
    }
};

int main(int argc, const char *argv[])
{
    Hello h;
    h();
    return 0;
}