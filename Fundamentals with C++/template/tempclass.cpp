#include <iostream>
#include <array>
#include <vector>

template<typename T1, typename T2>
struct pair
{
    T1 first;
    T2 second;
};

template<typename T1,typename T2>
pair<T1, T2> make_pair(T1 first, T2 second)
{
    pair<T1, T2> p;
    p.first = first;
    p.second = second;

    return p;
}


int main()
{
    // Pair<int, Pair<std::string, int>> P(1, {"omar", 123});
    std::vector<pair<int, std::string>> P(make_pair<int, std::string>(1, ))

    make_pair<int, std::string>(3, "Omar")
    P.push_back({4, "mohammed"});

    for(int i = 0; i < P.size(); i++)
    {
        std::cout << P[i].first << " " << P[i].second << std::endl;
    }

    return 0;
}