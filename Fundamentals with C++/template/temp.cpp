#include <iostream>
#include <vector>

// Template
// Generic Programming

// template<typename T>
// void swap(T *a, T *b)
// {
//     T temp = *a;
//     *a = *b;
//     *b = temp;
// }


int main()
{
    std::vector<std::pair<int, std::pair<std::string, double>>> vp;
    vp.push_back(std::make_pair(1, std::make_pair("Ahmed", 1235)));
    vp.push_back()

    for(int i = 0; i < vp.size(); i++)
    {
        std::cout << vp[i].first << " " << vp[i].second.first << " " << vp[i].second.second << std::endl;
    }

    return 0;
}