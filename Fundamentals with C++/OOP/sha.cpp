#include <iostream>

class Shape
{
    public:
        virtual void area()
        {
            std::cout << "Area of Shape: " << std::endl;
        }
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
    

    return 0;
}