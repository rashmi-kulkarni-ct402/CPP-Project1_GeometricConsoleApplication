#include "../headers/Square.h"
using namespace Shapes;

Square::Square(double s)
{
    side = s;
}

double Square::area()
{
    return side * side;
}

double Square::perimeter()
{
    return 4 * side;
}

Square::~Square()
{
}