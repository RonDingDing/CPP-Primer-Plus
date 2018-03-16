#include <iostream>

class Point
{
  private:
    int x, y;

  public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    int getX()
    {
        return this->x;
    }

    int getY()
    {
        return this->y;
    }

    void add(Point p)
    {
        add(p.getX(), p.getY());
    }

    void add(int x, int y)
    {
        this->x += x;
        this->y += y;
    }

    void operator+=(Point p)
    {
        add(p);
    }
};

int main(int argc, const char *argv[])
{
    Point b(10, 10);
    Point *p = new Point(5, 5);
    (*p) += Point(2, 2);
    b.add(Point(12, 12));
    b += Point(13, 13);
    std::cout << b.getY() << "\n";
    std::cout << p->getY() << "\n";
    return 0;
}