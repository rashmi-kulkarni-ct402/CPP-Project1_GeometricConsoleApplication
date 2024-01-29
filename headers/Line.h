namespace Shapes
{
    class Line
    {
    private:
        double xCoord1, yCoord1, xCoord2, yCoord2;

    public:
        Line(double x1, double y1, double x2, double y2);

        double length();

        ~Line();
    };
}
