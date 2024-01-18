#include <iostream>

int main()
{
    int num1, num2;

    std::cin >> num1 >> num2;

    if((num1 == 0) && (num2 == 0) || num1 - num2 >= 2 || num2 - num1 >= 2){
        std::cout << "NO" << std::endl;
    }
    else
    {
        std::cout << "YES" << std::endl;
    }

    return 0;
}