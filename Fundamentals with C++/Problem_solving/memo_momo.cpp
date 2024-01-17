#include <iostream>

int main()
{
    long long unsigned int a ,b ,c;

    std::cin >> a >> b >> c;

    if(a % c == 0 && b % c == 0)
    {
        std::cout << "Both" << std::endl;
    }
    else if(a % c != 0 && b % c != 0)
    {
        std::cout << "No One" << std::endl;
    }
    else if(a % c == 0 && b % c != 0)
    {
        std::cout << "Memo" << std::endl;
    }
    else if(a % c != 0 && b % c == 0)
    {
        std::cout << "Momo" << std::endl;
    }


    return 0;
}