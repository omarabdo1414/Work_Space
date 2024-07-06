#include <iostream>
#include <ostream>

class Rectangle
{
    // Attributes
private:
    float length;
    float width;
    static int count;

    // Methods
public:
    // Default Constructor
    Rectangle() : length(0), width(0) // Initializer list For Default Constructor
    {
        count++;
        std::cout << "Default Costrucor Created" << std::endl;
    }

    // Parametrized Constructor
    Rectangle(float len, float wid) : length(len), width(wid) // Initializer list For Parametrized Constructor
    {
        count++;
        std::cout << "Parametrized Costrucor Created" << std::endl;
    }

    // Copy Constructor
    Rectangle(const Rectangle &object) // const is a best practice
    {
        count++;
        length = object.length;
        width  = object.width;
        std::cout << "Copy Constructor Called" << std::endl;
    }

    friend std::ostream& operator<<(std::ostream &output,const Rectangle &rect);

    void setLength(float l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else
        {
            std::cout << "Error! The number should be Positive" << std::endl;
        }
    }

    float getLength()
    {
        return length;
    }

    void setWidth(float w)
    {
        if (w >= 0)
        {
            width = w;
        }
        else
        {
            std::cout << "Error! The number should be Positive" << std::endl;
        }
    }

    float getWidth()
    {
        return width;
    }

    float getArea()
    {
        return length * width;
    }

    Rectangle mergeRectangle(const Rectangle r2)
    {
        Rectangle r3;

        r3.length = length + r2.length;
        r3.width  = width  + r2.width;

        return r3;
    }

    // Operator Overloading
    Rectangle operator+(const Rectangle r1)
    {
        Rectangle r3;

        r3.length = length + r1.length;
        r3.width  = width  + r1.width;

        return r3;
    }

    int getCount()
    {
        return count;
    }

    // Destructor
    ~Rectangle()
    {
        std::cout << "Destructor Called" << std::endl;
    }
};

// Friend
std::ostream& operator<<(std::ostream &output,const Rectangle &rect)
{
    output << rect.length << " " << rect.width;

    return output;
}

int Rectangle::count = 0;

int main()
{
    Rectangle rec1(2, 3);

    std::cout << rec1.getCount() << std::endl;

    Rectangle rec2(rec1);

    std::cout << rec2.getCount() << std::endl;

    return 0;
}