#include <iostream>

int main()
{
    int x, y;

    std::cin >> x >> y;
    try
    {
        if (x < 30)
            throw "X exception";
        if (y == 0)
            throw std::exception();
        else
            std::cout << x/y << std::endl;
    }
    // catch(const std::exception& e)
    // {
    //     std::cout << e.what() << '\n';
    //     std::cout << "Y must be grater than 0" << std::endl;
    // }
    // catch(const char* msg)
    // {
    //     std::cout << msg << '\n';
    //     std::cout << "X must be grater than 30" << std::endl;
    // }
    catch(...)
    {
        std::cout << "Unhandeled Exception" << std::endl;
        std::cout << "Please contat system admin" << std::endl;
    }

    // try
    // {
    //     if(y == 0)
    //     {
    //         throw "Division by zero exception";
    //     }
    //     else
    //         std::cout << x / y << std::endl;
    // }
    // catch(const char * msg)
    // {
    //     std::cout << msg << '\n';
    //     std::cout << "Y must be grater than 0 " << std::endl;
    // }
    
    
    std::cout << "Program Continued" << std::endl;

    return 0;
}