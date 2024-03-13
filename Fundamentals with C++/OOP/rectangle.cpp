#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle() : length(0), width(0)
{
    std::cout << "" << std::endl;
}

Rectangle::Rectangle(float len, float wid) : length(len), width(wid)
{
    std::cout << "parameterized Constructor Created" << std::endl;
}

void Rectangle::set_length(float len)
{
    if (len >= 0)
    {
        length = len;
    }
    else
        std::cout << "Error, please Enter a positive number" << std::endl;
}

void Rectangle::set_width(float wid)
{
    if (wid >= 0)
    {
        width = wid;
    }
    else
        std::cout << "Error, please Enter a positive number" << std::endl;
}

float Rectangle::get_length()
{
    return length;
}
float Rectangle::get_width()
{
    return width;
}

float Rectangle::get_area()
{
    return length * width;
}

Rectangle::~Rectangle()
{
    std::cout << "Object life time ended" << std::endl;
}
