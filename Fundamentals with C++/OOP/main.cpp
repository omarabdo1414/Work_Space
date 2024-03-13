#include <iostream>

class Rectangle
{
    private:
        float length;
        float width;
    
    public:
        Rectangle() : length(0), width(0)
        {
            std::cout << "Constructor Created" << std::endl;
        }
        Rectangle(float len, float wid) : length(len), width(wid)
        {
            std::cout << "parameterized Constructor Created" << std::endl;
        }
        void set_length(float len)
        {
            if(len >= 0)
            {
                length = len;
            }
            else
                std::cout << "Error, please Enter a positive number" << std::endl;
        }
        void set_width(float wid)
        {
            if(wid >= 0)
            {
                width = wid;
            }
            else
                std::cout << "Error, please Enter a positive number" << std::endl;
        }

        float get_length() const
        {
            return length;
        }
        float get_width() const
        {
            return width;
        }

        float get_area() const
        {
            return length * width;
        }

        ~Rectangle()
        {
            std::cout << "Object life time ended" << std::endl;
        }
};

int main()
{
    Rectangle rec; //object -- Instance
    
    std::cin.get();

    Rectangle rec2;

    return 0;
}