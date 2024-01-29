#include "../headers/Circle.h"
#include <cmath>
using namespace Shapes;

Circle::Circle(double r)
{
    radius = r;
}

double Circle::area()
{
    return M_PI * pow(radius, 2);
}

double Circle::circumference()
{
    return 2 * M_PI * radius;
}

Circle::~Circle()
{
}