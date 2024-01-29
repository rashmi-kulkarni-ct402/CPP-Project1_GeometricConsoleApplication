#include "../headers/Line.h"
#include <cmath>
using namespace Shapes;

Line::Line(double x1, double y1, double x2, double y2)
{
    xCoord1 = x1;
    yCoord1 = y1;
    xCoord2 = x2;
    yCoord2 = y2;
}

double Line::length()
{
    return sqrt(pow(xCoord2 - xCoord1, 2) + pow(yCoord2 - yCoord1, 2));
}

Line::~Line()
{
}