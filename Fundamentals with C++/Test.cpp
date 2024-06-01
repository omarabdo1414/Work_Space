#include <iostream>
#include <thread>

int main()
{
    int x = 3;
    if(2 == x)
    {
        std::cout << "Hello World" << std::endl;
    }
    else
        std::cout << "Not Hello World" << std::endl;

    return 0;
}