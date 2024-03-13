#include <iostream>
#include <array>
#include <functional>

void ForEach(const std::array<int, 6>& values, std::function<void(int)> func)
{
    for(auto value : values)
        func(value);
}

int main()
{
    std::array<int, 6> values = {1, 2, 5, 4, 9, 3};

    int i = 5;

    auto lambda = [i](int value) mutable{
        i = 3;
        std::cout << "Value is : " << value * i << std::endl;
        };

    ForEach(values, lambda);

    std::cout << i << std::endl;

    return 0;
}