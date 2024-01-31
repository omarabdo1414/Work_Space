#include <iostream>
#include <utility>

int main()
{
    std::pair<int, std::string> p(1,"omar");

    std::cout << p.first << " " << p.second;

    return 0;
}