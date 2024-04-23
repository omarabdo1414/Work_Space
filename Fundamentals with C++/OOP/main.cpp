#include <iostream>

class Rectangle
{
    private:
        float length;
        float width;
        static int count;
    public:
    //default Constructor
    Rectangle() : length(0), width(0)
    {
        count++;
        std::cout << "default Constructor" << std::endl;
    }
    //Parameterized Constructor
    Rectangle(float len, float wid) : length(len), width(wid)
    {
        std::cout << "Parameterized Constructor created" << std::endl;
    }
    void set_length(float l)
    {
        if(l >= 0)
        {
            length = l;
        }
        else
        {
            std::cout << "Positive numbers only" << std::endl;
        }
    }
    float get_length()
    {
        return length;
    }
    void set_width(float w)
    {
        if(w >= 0)
        {
            width = w;
        }
        else
        {
            std::cout << "Positive numbers only" << std::endl;
        }
    }
    float get_width()
    {
        return width;
    }

    float get_area()
    {
        return length * width;
    }

    Rectangle merge(Rectangle r1, Rectangle r2)
    {
        Rectangle temp;
        temp.length = r1.length + r2.length;
        temp.width = r1.width + r2.width;

        return temp;
    }

    // Destructor
    ~Rectangle()
    {
        std::cout << "Destructor called" << std::endl;
    }
};

Rectangle::count = 0;

int main()
{
    // Rectangle rect1(5, 6);
    // Rectangle rect2(10, 5);

    // Rectangle r3;
    // r3 = r3.merge(rect1, rect2);

    // std::cout << r3.get_length() << " " << r3.get_width() << std::endl;
    
    add();
    add();

    return 0;
}