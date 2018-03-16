#include <iostream>

class Object
{
  public:
    void (Object::*sayHi)();
};

class Hello : public Object
{
  public:
    Hello()
    {
        sayHi = (void (Object::*)())(&Hello::HelloSayHi);
        //和C的函数指针类似，
        //void 表示没有返回值
        //Object::表示这个函数存在在Object的范围
        //前面的括号是强制转换
        //后面的括号是获取到 Hello::HelloSayHi的地址
        (this->*sayHi)();
        //sayHi是个函数指针，需要获得其值才能使用。
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