#include <iostream>
#include <set>
#include <utility>

/*

*/

int main()
{
    std::set<std::string> s;
    std::multiset<int> set = {1, 2, 2, 1};

    // auto itlow = s.lower_bound(3);
    // auto itup  = s.upper_bound(5);

    // auto it2 = s.emplace(10);
    // // auto it2 = s.emplace(10);

    // std::cout << *it2.first << " " << it2.second << std::endl;

    // std::cout << *it2 << std::endl;

    // std::cout << *itup;

    // s.erase(itlow, itup);

    

    auto it = s.begin();

    s.emplace_hint(it, "Ahmed");

    it = s.emplace_hint(it, "Mostafa");

    for (auto ss : s)
    {
        std::cout << ss << std::endl;
    }


    s.clear();
    return 0;
}