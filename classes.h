#pragma once
#include <string>

class Figure {
protected:
    std::string name;
    double x, y;
    static int numberOfFigures;

public:
    Figure(const std::string& name, double x, double y);
    ~Figure();

    void display_name() const;

    static int getNumberOfFigures();
};

class Rectangle : public Figure {
private:
    double length, width;

public:
    Rectangle(double x, double y, double length, double width);

    double perimeter() const;
    double area() const;
};

class Square : public Figure {
private:
    double side;

public:
    Square(double x, double y, double side);

    double perimeter() const;
    double area() const;
};

class Circle : public Figure {
private:
    double radius;

public:
    Circle(double x, double y, double radius);

    double perimeter() const;
    double area() const;
};