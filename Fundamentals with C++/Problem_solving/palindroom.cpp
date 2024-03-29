#include <iostream>
#include <string>
#include <vector>

bool palindrome(int x)
{
    int temp = x;
    int rem = 0;
    int result = 0;

    while(temp != 0)
    {
        rem = temp % 10;
        result = result * 10 + rem;
        temp = temp / 10;
    }

    if (result == x)
    {
        return true;
    }

    return false;
}

int main()
{

    int number = 121;

    bool result = palindrome(number);

    std::cout << result << std::endl;

    return 0;
}
