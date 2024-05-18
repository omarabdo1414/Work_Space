#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v(20);
    v.push_back(5);
    std::cout << "Size is : " << v.size() << std::endl;
    std::cout << "Capacity is : " << v.capacity() << std::endl;
    std::cout << "Maximum size is : " << v.max_size() << std::endl;

    return 0;
}