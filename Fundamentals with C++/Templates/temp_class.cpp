#include <iostream>

template<typename T, typename H>
struct Pair
{
    T first;
    H second;
};

int main()
{
    Pair<int, Pair<std::string, double>> p = {1, "Omar", 1000};

    std::cout << p.first << " : " << p.second.first << " " << p.second.second << std::endl;

    return 0;
}