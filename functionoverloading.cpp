/*
    create class with function overloading to
    overload area function which calculates area of square, rectangle, circle, hexagon
 */
#include <iostream>
#include <math.h>
using namespace std;
class shapes
{
    int s, r, w, b, x;

public:
    void area(int side)
    {
        s = side;
        cout << endl
             << "Area of square =" << s * s;
    }

    void area(int width, int breadth)
    {
        b = breadth;
        w = width;
        cout << endl
             << "Area of rectangle = " << b * w;
    }

    void area(int radius, char *p)
    {

        r = radius;
        cout << endl
             << "Area of: " << p << "=" << r * r * 3.1414;
    }

    void area(int side, int count, char *p)
    {

        s = side;
        x = count;
        cout << endl
             << "Area of " << p << " = " << 3 * sqrt(3) * s * s / 2;
    }
};

int main()
{
    shapes s1;
    s1.area(10);
    s1.area(5, 7);
    s1.area(10, "circle");
    s1.area(5, 6, "hexagone");
    return 0;
}