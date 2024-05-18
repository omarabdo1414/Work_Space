#include <iostream>
// #include <utility>
#include <map>

int main()
{
    std::map<std::string, std::string> m = {{"Ahmed", "CS"}, {"Khaled", "CIS"}};
    std::map<int, std::string> map = {{1, "Omar"}, {2, "Ahmed"}};

    map.count("Ahmed");

    std::map<int, int> ma = {{2, 1}, {3, 6}, {4, 10}, {5, 15}, {15, 7}};

    map[0] = "Hossam";

    std::cout << "Lower Bound: ";
    std::cout << ma.lower_bound(1)->first << " " << ma.lower_bound(1)->second << std::endl;
    std::cout << "Upper Bound: ";
    std::cout << ma.upper_bound(5)->first << " " << ma.upper_bound(5)->second << std::endl;

    // for(auto m : map)
    // {
    //     std::cout << m.first << " " << m.second << std::endl;
    // }

    return 0;
}