#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5, 6};

    int a = 5;

    auto it = std::find_if(v.begin(), v.end(), [](int x){
        return x > 3;
    });

    std::cout << *it << std::endl;
    

    return 0;
}