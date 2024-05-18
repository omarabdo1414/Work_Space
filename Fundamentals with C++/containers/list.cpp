#include <iostream>
#include <list>

int main()
{
    std::list <int> myList;

    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    // for(auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     std::cout << *it << " " << std::endl;
    // }

    // std::cout << std::endl;

    // myList.push_front(0);

    // auto it1 = myList.begin();
    // ++it1;
    // std::cout << *it1 << std::endl;
    // ++it1;
    // ++it1;
    // std::cout << *it1 << std::endl;
    // myList.insert(it1, 4);


    // for(auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     std::cout << *it << " " << std::endl;
    // }

    std::list<int> l = {1, 2, 3};
    std::list<int> li = {4, 5, 6};

    // std::list<int> list;
    // list.assign(20, 5);

    // for(auto i : list)
    // {
    //     std::cout << i << std::endl;
    // }

    l.merge(li);

    for(auto it = l.begin(); it != l.end(); it++)
    {
        std::cout << *it << " " << std::endl;
    }

    l.clear();


    return 0;
}