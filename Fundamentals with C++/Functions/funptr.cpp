#include <iostream>
#include <array>
#include <functional>

void ForEach(const std::array<int, 6>& values, std::function<void(int)>func)
{
    for(auto value : values)
        func(value);
}

int main()
{
    std::array<int, 6> arr = {1,2,3,4,5,6};
    int i = 5;
    ForEach(arr, [&](int val){
        std::cout << val * i << std::endl;
    });

    return 0;
}