// Define an abstract class Shape with pure virtual functions calculateArea() and draw(). 
// Implement concrete/normal classes Circle and Rectangle that inherit from Shape. Demonstrate 
// polymorphism by creating an array of Shape pointers pointing to objects of both Circle and 
// Rectangle. Call the calculateArea() and draw() functions for each object. Marking criteria:

#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual functions
    virtual double calculateArea() const = 0;
    virtual void draw() const = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

// Concrete class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }

    void draw() const override {
        cout << "Drawing a Circle with radius " << radius << endl;
    }
};

// Concrete class: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() const override {
        return length * width;
    }

    void draw() const override {
        cout << "Drawing a Rectangle with length "
             << length << " and width " << width << endl;
    }
};

int main() {
    // Array of Shape pointers
    Shape* shapes[2];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    // Demonstrate polymorphism
    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->calculateArea() << endl;
        cout << "---------------------" << endl;
    }

    // Free allocated memory
    for (int i = 0; i < 2; i++) {
        delete shapes[i];
    }

    return 0;
}