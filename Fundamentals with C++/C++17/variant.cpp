#include <iostream>
#include <variant>

int main()
{
    std::variant<std::string, int> data;
    data = "omar";
    std::cout << std::get<std::string>(data) << std::endl;
    data = 16;

    data.index();
    // std::cout << std::get<std::string>(data) << std::endl;
    std::cout << std::get<int>(data) << std::endl;

    return 0;
}