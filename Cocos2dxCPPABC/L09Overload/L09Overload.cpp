#include <iostream>

class Hello
{
  public:
    void sayHello()
    {
        printf("Hello jikexueyuan\n");
    }
    // void sayHello(char *name)
    // {
    //     printf("Hello %s\n", name);
    // }
    void sayHello(std::string name)
    {
        std::string str = "Hello ";
        str += name;
        std::cout << str << std::endl;
    }
};

int main(int argc, const char *argv[])
{
    Hello *h = new Hello();
    h->sayHello();
    h->sayHello("Zhangsan");
    // std::string name = "ZhangSan";
    // h->sayHello((char *)name.c_str());
    return 0;
}