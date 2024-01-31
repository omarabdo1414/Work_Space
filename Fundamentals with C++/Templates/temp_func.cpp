#include <iostream>

// Templates in C++
// Generic Programming

template<typename T>
void swap(T x, T y)
{
    T temp = x;
    x = y;
    y = temp;
}

int main()
{
    int num1 = 6, num2 = 5;
    double x = 2.3, y = 5.2;
    std::string a = "ahmed";
    std::string b = "belal";

    std::cout << a << " " << b << std::endl;
    swap(a, b);
    std::cout << a << " " << b << std::endl;

    return 0;
}