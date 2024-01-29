#include <iostream>
#include "./headers/Line.h"
#include "./headers/Triangle.h"
#include "./headers/Square.h"
#include "./headers/Rectangle.h"
#include "./headers/Circle.h"
#include "./headers/Ellipse.h"
using namespace std;
using namespace Shapes;

int main()
{
    int choice;

    do
    {
        cout << "Select a shape: " << endl;
        cout << "1. Line\n2. Triangle\n3. Square\n4. Rectangle\n5. Circle\n6. Ellipse\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        // Line
        case 1:
        {
            double xCoord1, yCoord1, xCoord2, yCoord2;

            cout << "Enter x-coordinate (start point): ";
            cin >> xCoord1;
            cout << "Enter y-coordinate (start point): ";
            cin >> yCoord1;
            cout << "Enter x-coordinate (end point): ";
            cin >> xCoord2;
            cout << "Enter y-coordinate (end point): ";
            cin >> yCoord2;

            Line line(xCoord1, yCoord1, xCoord2, yCoord2);
            cout << "Line Length: " << line.length() << endl;
        }
        break;

        // Triangle
        case 2:
        {
            double sideA, sideB, sideC;

            cout << "Enter all 3 sides of the triangle: " << endl;
            cout << "sideA: ";
            cin >> sideA;
            cout << "sideB: ";
            cin >> sideB;
            cout << "sideC: ";
            cin >> sideC;

            Triangle tri(sideA, sideB, sideC);
            cout << "Area: " << tri.area() << endl;
            cout << "Perimeter: " << tri.perimeter() << endl;
        }
        break;

        // Square
        case 3:
        {
            double side;

            cout << "Enter side of the square: ";
            cin >> side;

            Square sqr(side);
            cout << "Area: " << sqr.area() << endl;
            cout << "Perimeter: " << sqr.perimeter() << endl;
        }
        break;

        // Rectangle
        case 4:
        {
            double length, breadth;

            cout << "Enter length of the rectangle: ";
            cin >> length;
            cout << "Enter breadth of the rectangle: ";
            cin >> breadth;

            Rectangle rect(length, breadth);
            cout << "Area: " << rect.area() << endl;
            cout << "Perimeter: " << rect.perimeter() << endl;
        }
        break;

        // Circle
        case 5:
        {
            double radius;
            cout << "Enter radius of the circle: ";
            cin >> radius;

            Circle cir(radius);
            cout << "Area: " << cir.area() << endl;
            cout << "Circumference: " << cir.circumference() << endl;
        }
        break;

        // Ellipse
        case 6:
        {
            double radius1, radius2;
            cout << "Enter major radius of the ellipse: ";
            cin >> radius1;
            cout << "Enter minor radius of the ellipse: ";
            cin >> radius2;

            Ellipse elp(radius1, radius2);
            cout << "Area: " << elp.area() << endl;
            cout << "Circumference: " << elp.circumference() << endl;
        }
        break;

        case 0:
        {
            cout << "Thank you for your time!" << endl;
        }
        break;

        default:
        {
            cout << "Invalid choice. Please try again!" << endl;
        }
        break;
        }
    } while (choice != 0);

    return 0;
}