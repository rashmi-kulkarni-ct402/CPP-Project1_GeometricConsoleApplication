namespace Shapes
{
    class Circle
    {
        private:
        double radius;
        
        public:
        Circle(double r);
        
        double area();
        double circumference();

        ~Circle();        
    };
}