#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = {10, 3, 5, 6, 1, 8, 9};
    // std::cout << v[0] << std::endl;
    // v.push_back(2);

    auto it = v.begin();
    auto it2 = v.end() - 1;

    v.insert(it + 3, 4);
    std::sort(it, v.end());

    // auto it_find = std::find(v.begin(), v.end(), 6);

    // std::cout << *(std::find(v.begin(), v.end(), 6)) << std::endl;



    for(auto i : v)
    {
        std::cout << i << std::endl;
    }

    // std::cout << "Size is : " << v.size() << std::endl;
    // std::cout << "Capacity is : " << v.capacity() << std::endl;
    // std::cout << "Maximum size is : " << v.max_size() << std::endl;

    // v.shrink_to_fit();
    // std::cout << "Capacity is : " << v.capacity() << std::endl;

    



    return 0;
}