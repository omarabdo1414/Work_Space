#include <iostream>
#include <variant>
#include <vector>

int main()
{
    std::variant<std::string, int> data;
    data = "omar";
    std::cout << std::get<std::string>(data) << std::endl;
    data = 16;

    std::vector<std::variant<std::string, int>> vv = {1, "omar", 130};

    std::vector<std::variant<std::string, int>>::iterator it = vv.begin();

    data.index();
    // std::cout << std::get<std::string>(data) << std::endl;
    std::cout << std::get<int>(data) << std::endl;

    return 0;
}