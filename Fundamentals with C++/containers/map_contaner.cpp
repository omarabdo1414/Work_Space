#include <iostream>
// #include <utility>
#include <map>

int main()
{
    std::map<char, int> m;
    std::map<char, int> m2;

    m.insert({'a', 1});

    auto it = m.begin();
    it = m.insert(it , {'b', 2});
    it = m.insert(it , {'c', 3});
    it = m.insert(it , {'d', 4});
    it = m.insert(it , {'e', 5});
    it = m.insert(it , {'f', 6});
    m['g'] = 7;

    m['g'] = 10;

    m2.insert(m.begin(), m.find('e'));

    auto i = m.find('c');
    m.erase(i, m.find('f'));

    for(auto mm: m)
    {
        std::cout << mm.first << " : " << mm.second << std::endl;
    }

    return 0;
}