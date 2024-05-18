#include <iostream>

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x, y;

    std::cin >> x >> y;
    
    swap(x, y);

    std::cout << x << " " << y << std::endl;

    return 0;
}