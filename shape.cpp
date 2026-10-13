#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area()
    {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Rectangle r(10, 5);
    Circle c(7);

    Shape *s;

    s = &r;
    s->area();

    s = &c;
    s->area();

    return 0;
}