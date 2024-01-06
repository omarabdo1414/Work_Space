#include <iostream>

void swap(int &x, int &y);

int main()
{
    int num1 = 5, num2 = 6;

    swap(num1, num2);

    std::cout << num1 << " " << num2 << std::endl;

    return 0;
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}