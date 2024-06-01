#include <iostream>
#include "calc.h"
#include "lib/wifi.h"

int main()
{
    std::cout << "Hello from CMake world" << std::endl;
    wifi();
    sum(10, 5);

    return 0;
}