#include <iostream>

int factorial(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int num;

    std::cin >> num;

    int result = factorial(num);

    std::cout << result << std::endl;

    return 0;
}