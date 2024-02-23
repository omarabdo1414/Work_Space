#include <iostream>
#include <set>
int main()
{
    std::set<int> mySet = {10, 20, 30, 40, 50, 60, 70, 80};
    mySet.insert(15);
    mySet.insert(25);

    auto itlow = mySet.lower_bound(25);
    auto itup = mySet.upper_bound(50);
    mySet.erase(itlow, itup);
    // std::cout << *itlow << " " << *itup << std::endl;

    for (auto itr = mySet.begin(); itr != mySet.end(); itr++)
    {
        std::cout << *itr << std::endl;
    }

    // for (auto &numr : mySet)
    // {
    //     std::cout << numr << std::endl;
    // }

    // std::multiset<int> mySet2 = {1, 3, 2,5,2,6,7, 4, 6, 7, 5};
    // for(const auto &num : mySet2)
    // {
    //     std::cout << num  << ", ";
    // }

    return 0;
}