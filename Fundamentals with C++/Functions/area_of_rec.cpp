#include <iostream>
#include "file.cpp"

int main()
{
    float length, width;

    std::cin >> length >> width;

    std::cout << area(length, width) << " meter" << std::endl;

    return 0;
}