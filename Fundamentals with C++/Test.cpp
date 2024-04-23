#include <iostream>
#include <vector>

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 5, y = 6;

    swap(x, y);

    std::cout << x << " " << y << std::endl;
}