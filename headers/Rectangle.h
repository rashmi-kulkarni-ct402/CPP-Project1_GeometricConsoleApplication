namespace Shapes
{
    class Rectangle
    {
    private:
        double length;
        double breadth;

    public:
        Rectangle(double l, double b);

        double area();
        double perimeter();

        ~Rectangle();
    };
}