#include <iostream>
#include <forward_list>
#include <list>

int main()
{
    std::list<int> list1 = {9,9,9,9,9,9,9};
    std::list<int> list2 = {9,9,9,9};

    std::list<int> result;
    auto it1 = list1.begin();
    auto it2 = list2.begin();
    int carry = 0;
    int rem = 0;

    for (auto it = list1.begin(); it != list1.end(); ++it)
    {
        auto itcount = it;
        auto sum = *it1 + *it2;
        if((*it1 + *it2) < 10)
            result.push_back(*it1 + *it2);
        else{
            rem = sum % 10;
            carry = sum / 10;
            result.push_back(rem);
            itcount++;
            *itcount += carry;
            if(*it == 10)
            {
                rem = 0;
            }
        }
        it1++;
        it2++;
    }
    
    for (auto i : result)
    {
        std::cout << i << std::endl;
    }

    return 0;
}