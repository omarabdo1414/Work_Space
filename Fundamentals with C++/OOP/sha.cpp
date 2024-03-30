#include <iostream>

class Shape
{
public:
    virtual void area() = 0;
};

class Rectangle : public Shape
{
private:
    float len = 2;
    float wid = 3;

public:
    void area()
    {
        std::cout << "Area of Rectangle: " << len * wid << std::endl;
    }
};

class Circle : public Shape
{
private:
    float radius = 5;
    double PI = 3.14;

public:
    void area()
    {
        std::cout << "Area of Circle: " << PI * radius * radius << std::endl;
    }
};

class Triangle : public Shape
{
private:
    float hei = 5;
    float base = 6;

public:
    void area()
    {
        std::cout << "Area of Triangle: " << 0.5 * hei * base << std::endl;
    }
};

int main()
{
    Shape *Shape_ptr;
    Rectangle rec;
    Circle cr;
    Triangle tr;

    Shape_ptr = &rec;
    Shape_ptr->area();
    Shape_ptr = &cr;
    Shape_ptr->area();
    Shape_ptr = &tr;
    Shape_ptr->area();

    return 0;
}