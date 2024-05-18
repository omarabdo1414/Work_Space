#include <iostream>
#include <set>

int main()
{
    std::set<int, std::greater<int>> s{1, 2, 3, 4, 6};
    std::multiset<std::string, std::greater<std::string>> set_str = {"Omar", "Ahmed", "Ahmed"};

    s.insert(5);
    s.emplace(7);

    s[0] = 12; // [] random access , at

    auto it = s.begin();

    s.insert(it, 8); // log n -> 1

    s.emplace_hint(it, 10); // O(1)
    it = s.emplace_hint(it, 9);

    // std::cout << s.count(3) << std::endl;

    auto iter = s.emplace(11);

    s.erase(11);
    auto iterator = s.begin();
    ++++++iterator;
    s.erase(iterator);

    for(auto ss : s)
    {
        std::cout << ss << std::endl;
    }

    std::cout << set_str.count("Ahmed") << std::endl;

    for(auto set : set_str)
    {
        std::cout << set << std::endl;
    }

    return 0;
}