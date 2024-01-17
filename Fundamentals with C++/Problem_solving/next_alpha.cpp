#include <iostream>

int main()
{
    char a;

    std::cin >> a;

    if(a >= char('z'))
    {
        std::cout << 'a' << std::endl;
    }
    else
    {
        std::cout << char(a + 1) << std::endl;
    }

    return 0;
}