#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> list = {1, 2, 3, 4};
    std::forward_list<int> list2 = {5, 6, 7};

    // list.assign({5});
    // list.assign({6, 7, 8});

    auto it = list.begin()++;


    list.merge(list2);

    // list.remove(4);

    // *it = 10;

    // list.front();

    for(auto l : list)
    {
        std::cout << l << std::endl;
        list.remove_if([](int n) {
            return n > 3;
        });
    }

    // std::cout << list.max_size() << std::endl;

    list.clear();

    return 0;
}
