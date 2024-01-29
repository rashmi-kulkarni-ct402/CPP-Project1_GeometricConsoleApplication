#include "../headers/Triangle.h"
#include <cmath>
using namespace Shapes;

Triangle::Triangle(double a, double b, double c)
{
    sideA = a;
    sideB = b;
    sideC = c;
}

double Triangle::area()
{
    double semiPerimeter = (sideA + sideB + sideC) / 2;
    return sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC));
}

double Triangle::perimeter()
{
    return sideA + sideB + sideC;
}

Triangle::~Triangle()
{
}