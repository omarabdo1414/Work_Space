#include <iostream>
#include <vector>

void printVector(std::vector<int> v)
{
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        std::cout << *it << " ";
    }
}

int main()
{
    std::vector<int> v1;
    std::vector<int> v2;

    for(auto i = 0; i < 5; i++)
    {
        v1.push_back(i);
    }
    for(auto i = 10; i < 15; i++)
    {
        v2.push_back(i);
    }

    printVector(v1);
    std::cout << "\n";
    printVector(v2);

    v2 = std::move(v1);

    std::cout << "\n";
    printVector(v1);
    std::cout << "\n";
    printVector(v2);

    return 0;
}