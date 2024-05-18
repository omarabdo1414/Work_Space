#include <iostream>
#include <unordered_map>
using namespace std;

// Standered Template Library

int main()
{
    unordered_map<string, int> um { {"Kia", 2019}, {"Honda", 2020}, {"BMW", 2016} };

    cout << um["Kia"] << endl;

    um["Kia"] = 2020;

    um["Marcedes"] = 2020;

    // um.insert("Kia", 2022); // not effective

    um.insert_or_assign("Kia", 2022); // added in C++17
    um.try_emplace(); // C++17

    // cout << um["Kia"] << endl;

    for (auto map : um)
    {
        std::cout << map.first << ": " << map.second << std::endl;
    }

    /*
    empty
    size
    max
    */

    return 0;
}