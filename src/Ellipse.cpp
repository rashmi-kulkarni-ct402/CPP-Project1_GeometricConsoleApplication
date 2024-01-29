#include "../headers/Ellipse.h"
#include <cmath>
using namespace Shapes;

Ellipse::Ellipse(double r1, double r2)
{
    majorRadius = r1;
    minorRadius = r2;
}

double Ellipse::area()
{
    return M_PI * majorRadius * minorRadius;
}

double Ellipse::circumference()
{
    return 2 * M_PI * sqrt(((majorRadius * majorRadius) + (minorRadius * minorRadius)) / 2);
}

Ellipse::~Ellipse()
{
}