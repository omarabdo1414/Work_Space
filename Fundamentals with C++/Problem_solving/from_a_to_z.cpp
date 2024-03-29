#include <iostream>

int main()
{
    char a, b, c;
    std::cin >> a >> b >> c;

    for(int i = int(a); i <= int(c); i++)
    {
        std::cout << char(i);
    }

    return 0;
}