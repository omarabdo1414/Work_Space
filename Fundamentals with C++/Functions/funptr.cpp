#include <iostream>
#include <array>
#include <functional>
#include <algorithm>

int main()
{
    std::array<int, 6> arr = {1,2,3,4,5,6};

    auto lambda = [](int i)
    {
        return i > 3;
    };
    auto result = std::find_if(arr.begin(), arr.end(), lambda);

    std::cout << *result << std::endl;

    return 0;
}