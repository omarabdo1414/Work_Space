#include <iostream>
#include <algorithm>
#include <map>
int x[1000];
int y[1000];
int main()
{
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> x[i];
        y[x[i]]++;
    }
    std::sort(x, x+n);
    for(int i = 0; i < n; i++)
    {
        if(x[i] != x[i+1])
            std::cout << x[i] << " : " << y[x[i]] << std::endl;
    }

    // with map
    int n, number;
    std::map<int, int> m;

    for(int i = 0; i < n; i++)
    {
        std::cin >> number;
        m[number]++;
    }

    for(auto elemnet : m)
    {
        std::cout << elemnet.first << " : " << elemnet.second << std::endl;
    }
    return 0;
}