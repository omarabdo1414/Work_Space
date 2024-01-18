#include <iostream>

int main()
{
    long long a, b, c, d;

    std::cin >> a >> b >> c >> d;
    int flag = 0;

    if((a + b - c) == d)
        flag = 1;
    if((a + b * c) == d)
        flag = 1;
    if((a - b + c) == d)
        flag = 1;
    if((a - b * c) == d)
        flag = 1;
    if((a * b + c) == d)
        flag = 1;
    if((a * b - c) == d)
        flag = 1;
    if(flag == 1)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}