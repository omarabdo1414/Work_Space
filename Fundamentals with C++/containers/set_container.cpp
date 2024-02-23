#include <iostream>
#include <set>

/*

*/

int main()
{
    std::set<int> s = {1, 1, 1, 2, 3, 4, 5, 6, 7};

    // auto itlow = s.lower_bound(3);
    // auto itup  = s.upper_bound(5);

    auto it = s.emplace(10);
    auto it2 = s.emplace(10);

    // std::cout << *it2.first << " " << it2.second << std::endl;

    // std::cout << it << std::endl;

    // std::cout << *itup;

    // s.erase(itlow, itup);

    for (auto ss : s)
    {
        std::cout << ss << std::endl;
    }

    s.clear();
    return 0;
}