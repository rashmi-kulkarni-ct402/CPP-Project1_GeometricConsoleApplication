namespace Shapes
{
    class Square
    {
        private:
        double side;
        
        public:
        Square(double s);
        
        double area();
        double perimeter();

        ~Square();        
    };
}