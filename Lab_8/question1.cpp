#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual double area() const = 0;
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override {
        return length * width;
    }
};

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle circle(radius);
    double length, width;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    Rectangle rectangle(length, width);
    cout << "The area of the circle is: " << circle.area() << endl;
    cout << "The area of the rectangle is: " << rectangle.area() << endl;

    return 0;
}
