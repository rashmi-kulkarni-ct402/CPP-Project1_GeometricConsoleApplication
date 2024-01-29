namespace Shapes
{
    class Ellipse
    {
        private:
        double majorRadius;
        double minorRadius;
        
        public:
        Ellipse(double r1, double r2);
        
        double area();
        double circumference();

        ~Ellipse();        
    };
}