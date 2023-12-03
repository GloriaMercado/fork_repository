/*
Use of inheritance in POO
Done by:
• Gloria Astrid Mercado Pérez
• Israel Verdin Rangel
Date: 30/09/2023
*/
#include <iostream>
#include <string>

using namespace std;

// Base class Figure
class Figure {
protected:
    double perimeter;

public:
    // Figure constructor
    Figure(double perimeter) : perimeter(perimeter) {}

    // Pure virtual method to print information about the figure
    virtual void printInformation() const = 0;
};

// Derived class Circle inheriting from Figure
class Circle : public Figure {
private:
    double radius;
    string color;

public:
    // Circle constructor
    Circle(double perimeter, double radius, const string& color)
        : Figure(perimeter), radius(radius), color(color) {}

    // Implementation of the method to print information about the circle
    void printInformation() const override {
        cout << "Circle - Perimeter: " << perimeter << ", Radius: " << radius << ", Color: " << color << endl;
    }
};

int main() {
    // Create an instance of Circle
    Circle myCircle(31.4, 5.0, "Red");

    // Call methods of the Circle class
    myCircle.printInformation();

    return 0;
}

