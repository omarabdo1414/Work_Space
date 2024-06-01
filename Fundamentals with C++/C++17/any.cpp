#include <iostream>
#include <unordered_map>
#include <any>
#include <variant>

int main()
{
    std::variant<int, std::string> type;
    std::unordered_map<std::string, type> map = {{"omar", 1}, {"Mohammed", "CSS"}};

    for(auto it : map)
    {
        std::cout << it.first << " " << it.second << std::endl;
    }


    return 0;
}