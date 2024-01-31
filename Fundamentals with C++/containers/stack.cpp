#include <iostream>
#include <stack>
#include <list>

int main()
{
    std::stack<std::string, std::list<std::string>> s;
    std::stack<std::string, std::list<std::string>> s2;

    s.push("Omar");
    s.emplace("Abdo");
    s.push("Heba");
    s.push("sayed");

    s2.emplace("Mohammed");
    s2.emplace("Saeed");

    s.swap(s2);

    // std::cout << s.top() << std::endl;


    for (size_t i = 0; !s.empty(); i++)
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }

    std::cout << "----------------" << std::endl;

    for (size_t i = 0; !s2.empty(); i++)
    {
        std::cout << s2.top() << std::endl;
        s2.pop();
    }
    
    std::cout << s.size() << " " << s2.size() << std::endl;

    return 0;
}