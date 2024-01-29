#include "../headers/Rectangle.h"
using namespace Shapes;

Rectangle::Rectangle(double l, double b)
{
    length = l;
    breadth = b;
}

double Rectangle::area()
{
    return length * breadth;
}

double Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

Rectangle::~Rectangle()
{
}