#include <iostream>
#include <deque>
#include <algorithm>

int main()
{
    std::deque<char> d = {'r', 'o', 'g', 'r', 'a', 'm', 'm'};

    d.push_back('r');
    d.push_front('P');

    std::sort(d.begin(), d.end());
    std::reverse(d.begin(), d.end());

    for(auto it : d)
    {
        std::cout << it;
    }

    std::cout << "\n";

    std::cout << d.max_size() << std::endl;
    std::cout << d.empty() << std::endl;

    d.clear();

    std::cout << d.empty() << std::endl;

    return 0;
}

// Properties of deque
/*
    1 - fast insert / remove from front and back --> O(1)
    2 - slow insert / remove int the middle --> O(n)
    3 - slow search --> o(n)
*/