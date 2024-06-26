#include <iostream>
#include <string>
#include <cmath> // For M_PI
using namespace std;

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Base Class - Shape
class Shape {
protected:
    string color;
public:
    Shape(string color) : color(color) {}

    virtual double area() const = 0; // Pure virtual function
    virtual void display() const {
        cout << "Color: " << color << endl;
    }
};

// Derived Class - Rectangle
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(string color, double width, double height) 
        : Shape(color), width(width), height(height) {}

    double area() const override {
        return width * height;
    }

    void display() const override {
        Shape::display();
        cout << "Width: " << width << ", Height: " << height << ", Area: " << area() << endl;
    }
};

// Derived Class - Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(string color, double radius) 
        : Shape(color), radius(radius) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    void display() const override {
        Shape::display();
        cout << "Radius: " << radius << ", Area: " << area() << endl;
    }
};

int main() {
    Rectangle rect("Red", 5.0, 3.0);
    Circle circ("Blue", 4.0);

    Shape* shapes[2];
    shapes[0] = &rect;
    shapes[1] = &circ;

    for (int i = 0; i < 2; ++i) {
        shapes[i]->display();
    }

    return 0;
}
