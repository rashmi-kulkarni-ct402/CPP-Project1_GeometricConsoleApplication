namespace Shapes
{
    class Triangle
    {
        private:
        double sideA;
        double sideB;
        double sideC;
        
        public:
        Triangle(double a, double b, double c);
        
        double area();
        double perimeter();

        ~Triangle();        
    };
}