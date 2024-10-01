#include<iostream>

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
    virtual ~Shape() = default; // Virtual destructor
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a Circle" << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a Rectangle" << std::endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a Triangle" << std::endl;
    }
};

Shape* createShape(const std::string& shapeType) {
    if (shapeType == "Circle") {
        return new Circle();
    } else if (shapeType == "Rectangle") {
        return new Rectangle();
    } else if (shapeType == "Triangle") {
        return new Triangle();
    }
    return nullptr; // Handle unknown shape types
}
int main() {
    Shape* shape1 = createShape("Circle");
    Shape* shape2 = createShape("Rectangle");
    Shape* shape3 = createShape("Triangle");

    if (shape1) shape1->draw();
    if (shape2) shape2->draw();
    if (shape3) shape3->draw();

    // Clean up
    delete shape1;
    delete shape2;
    delete shape3;

    return 0;
}
