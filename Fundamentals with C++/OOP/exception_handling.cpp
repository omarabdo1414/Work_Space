#include <iostream>

int main()
{
    int x, y;

    std::cin >> x >> y;
    // try
    // {
    //     if (y==0)
    //     {
    //         throw std::exception();
    //     }
    //     else
    //         std::cout << x/y << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    try
    {
        if(y == 0)
        {
            throw "Division by zero exception";
        }
        else
            std::cout << x / y << std::endl;
    }
    catch(const char * msg)
    {
        std::cout << msg << '\n';
        std::cout << "Y must be grater than 0 " << std::endl;
    }
    
    
    std::cout << "Program Continued" << std::endl;

    return 0;
}