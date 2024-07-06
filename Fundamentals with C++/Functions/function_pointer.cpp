#include <iostream>
#include <array>
#include <functional>

void FOREACH(std::array<int, 5> arr, std::function<int(int)> funPtr)
{
    for(auto i : arr)
    {
        funPtr(i);
    }
}

int main()
{
    std::array<int, 5> arr = {1, 5, 4, 9, 3};

    int a = 5;

    auto lambda = [a](int num) mutable -> int {
        a = 3;
        std::cout << num * a << std::endl;
        return 5;
    };

    FOREACH(arr, lambda);

    std::cout << "Value of a: " << a << std::endl;

    return 0;
}