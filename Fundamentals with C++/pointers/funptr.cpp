#include <iostream>
#include <array>
#include <functional>

void ForEach(std::array<int, 5> values, std::function<void(int)> func)
{
    for (auto i : values)
    {
        func(i);
    }
}

int main()
{
    std::array<int, 5> arr = {1,2,3,4,5};

    int i = 5;

    auto lambda = [i](int value) mutable {
        i = 3;
        std::cout << value * i << std::endl;
        };

    ForEach(arr, lambda);

    std::cout << i << std::endl;

    return 0;
}