#include <iostream>

// Base class representing a geometric shape
class Shape {
public:
    virtual float area() const = 0; // Pure virtual function for calculating area
};

// Class representing a rectangle, derived from the Shape class
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    // Implementation of the virtual function to calculate the area of a rectangle
    float area() const override {
        return length * width;
    }
};

// Class representing a circle, derived from the Shape class
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    // Implementation of the virtual function to calculate the area of a circle
    float area() const override {
        return 3.14f * radius * radius;
    }
};

int main() {
    // Creating instances of Rectangle and Circle
    Rectangle rectangle(5.0f, 3.0f);
    Circle circle(2.5f);

    // Calculating and displaying the area of each shape
    std::cout << "Area of Rectangle: " << rectangle.area() << std::endl;
    std::cout << "Area of Circle: " << circle.area() << std::endl;

    return 0;
}
