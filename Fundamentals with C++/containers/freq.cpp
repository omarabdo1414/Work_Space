#include <iostream>
#include <algorithm>
#include <map>

int arr[10000];
int freq[10000];

int main()
{
    // int n, element;

    // std::cin >> n;

    // for(int i = 0; i < n; i++)
    // {
    //     std::cin >> arr[i];
    //     freq[arr[i]]++;
    // }
    
    // std::sort(arr, arr + n);
    // for(int i = 0; i < n; i++)
    // {
    //     if(arr[i] != arr[i + 1])
    //         std::cout << arr[i] << " : " << freq[arr[i]] << std::endl;
    // }

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