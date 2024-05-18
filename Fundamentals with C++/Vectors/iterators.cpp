#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = {1, 6, 5, 5, 6, 2, 3, 9, 4};
    std::vector<int> v2;

    v.swap(v2);
    v.pop_back();

    v.insert(v.begin() + 3, 55);
    // v.insert(itend--, 5);

    v.emplace(v.begin() + 3, 10);
    v.emplace_back(50);

    // // std::cout << v.at(25) << std::endl; // O(1)
    // std::cout << v[25] << std::endl; // O(1)

    std::sort(v2.begin(), v2.end());

    // v.erase(v.begin() + 2, v.end());

    // auto iterator = v.crbegin(); // const iterator reverse begin
    
    // for(auto it = v2.rbegin(); it != v2.end(); it++)
    // {
    //     std::cout << "Element : " << *it << std::endl;
    // }

    std::cout << v2[0] << std::endl;
    std::cout << v2.at(0) << std::endl;


    // v.insert(v.begin() + 2, 3);


    // for(it = v.cbegin();it != v.cend(); it++)
    // {
    //     std::cout << "Element : " << *it << std::endl;
    // }

    v.clear();


    return 0;
}