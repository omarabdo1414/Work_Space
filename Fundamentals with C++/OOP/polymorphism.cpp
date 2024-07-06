#include <iostream>

// abstract class
class Shape
{
private:
    std::string color;

public:
    Shape() : color("Red")
    {

    }

    Shape(std::string col) : color(col)
    {}

    virtual float area() = 0;
};

class Rectangle : public Shape
{
private:
    int width, height;

public:
    Rectangle(int a = 0, int b = 0)
    {
        width = a;
        height = b;
    }

    float area() override
    {
        std::cout << "Rectangle class area : " << (width * height) << std::endl;

        return (width * height);
    }
};

class Triangle : public Shape
{
private:
    int base, height;

public:
    Triangle(int a = 0, int b = 0)
    {
        base = a;
        height = b;
    }

    float area() override
    {
        std::cout << "Triangle class area : " << ((base * 0.5) * height) << std::endl;

        return ((base * 0.5) * height);
    }
};

class Circle : public Shape
{
private:
    float m_radius;
    double PI = 3.14;

public:
    Circle(float radius) : m_radius(radius) {}

    float area() override
    {
        std::cout << "Circle class area : " << (PI * m_radius * m_radius) << std::endl;

        return (PI * m_radius * m_radius);
    }
};

int main()
{
    Shape *shape;

    Rectangle rec(10, 5);
    Triangle tri(6, 5);
    Circle cir(8);

    shape = &rec;
    shape->area();

    shape = &tri;
    shape->area();

    shape = &cir;
    shape->area();

    return 0;
}