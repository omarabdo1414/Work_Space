#include <iostream>
#include <list>
#include <algorithm>

int main()
{
    std::list<std::string> employee_list = {"Mohammed", "Omar", "Ahmed", "Menna", "Roqaya", "Dina", "Marwa", "Nourhan", "Yasmen"};

    employee_list.sort(std::less<std::string>());

    employee_list.remove("Omar");

    std::cout << "Employee Name \n";
    for(auto employee : employee_list)
    {
        std::cout << employee << std::endl;
    }

    return 0;
}