#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1, 6, 5, 5, 6, 2};
    
    std::cout << v.front() << std::endl;

    std::vector<int>::iterator it = v.begin();
    // std::cout << *it << std::endl;
    // it++;
    // std::cout << *it << std::endl;

    for(it = v.begin();it != v.end(); it++)
    {
        std::cout << "Element : " << *it << std::endl;
    }

    //auto it = v.begin();

    v.insert(v.begin() + 2, 3);

    for(it = v.begin();it != v.end(); it++)
    {
        std::cout << "Element : " << *it << std::endl;
    }

    return 0;
}