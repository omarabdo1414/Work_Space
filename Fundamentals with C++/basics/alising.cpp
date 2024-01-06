#include <iostream>

constexpr float PI = 3.14;

int main()
{
    int x = 10;
    int &y = x;

    y = 3;

    std::cout << x << std::endl;
    std::cout << &x << std::endl;
    std::cout << y << std::endl;
    std::cout << &y << std::endl;

    std::cout << "PI : " << PI << std::endl;
    std::cout << PI + 2 << std::endl;

    return 0;
}