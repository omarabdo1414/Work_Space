#include <iostream>
#include <map>

int main()
{
    std::map<int, int> m;

    std::cout << "Enter the size : ";
    int size;
    std::cin >> size;

    for(int i = 0; i < size; i++)
    {
        int n;
        std::cin >> n;
        m[n]++;
    }

    for(auto it : m)
    {
        std::cout << it.first << " -> " << it.second << std::endl;
    }
}