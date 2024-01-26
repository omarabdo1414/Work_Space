#include <iostream>
// Interfacing / abstracte class
// final classifier
class Shape
{
public:
    virtual int area() = 0; // Pure vitual function
    // virtual void display() final
    // {
    //     std::cout << "This is Shape class" << std::endl;
    // }
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

    int area() override
    {
        std::cout << "Rectangle class area : " << (width * height) << std::endl;

        return (width * height);
    }
    void display()
    {
        std::cout << "This is Rectangle class" << std::endl;
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

    int area() override
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

    int area() override
    {
        std::cout << "Triangle class area : " << (PI * m_radius * m_radius) << std::endl;

        return (PI * m_radius * m_radius);
    }
};

int main()
{
    Rectangle r(5, 6);
    Triangle t(2, 3);
    Circle C(5);

    Shape *shape_ptr;

    shape_ptr = &r;
    shape_ptr->area();

    shape_ptr = &t;
    shape_ptr->area();

    shape_ptr = &C;
    shape_ptr->area();

    return 0;
}