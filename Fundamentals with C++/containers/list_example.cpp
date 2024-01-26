#include <iostream>
#include <list>

int main()
{
    std::list<std::string> employee_list = {"Mohammed", "Omar", "Ahmed", "Menna", "Roqaya", "Dina", "Marwa", "Nourhan", "Yasmen"};

    employee_list.sort(std::less<std::string>());

    std::cout << "Employee Name \n";
    for(auto it : employee_list)
    {
        std::cout << it << std::endl;
    }

    return 0;
}