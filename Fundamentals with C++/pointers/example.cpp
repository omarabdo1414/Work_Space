#include <iostream>
#include <algorithm>
#include <array>

// bool func(int i)
// {
//     return i > 3;
// }

int main()
{
    std::array<int, 5> arr = {1,2,3,4,5};

    // auto result = std::find_if(arr.begin(), arr.end(), func);
    auto result = std::find_if(arr.begin(), arr.end(), [](int i)
    {
        return i > 3;
    });

    std::cout << *result << std::endl;

    return 0;
}