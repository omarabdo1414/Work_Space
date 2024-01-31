#include <iostream>
#include <algorithm>

const int MAX_SIZE = 100;
int arr[100];
int freq[100];

int main()
{
    int n;
    std::cin >> n;

    for(int i = 1; i <= n; i++)
    {
        std::cin >> arr[i];
        freq[arr[i]]++;
    }

    std::sort(arr, arr + n);
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] != arr[i+1])
        {
            std::cout << arr[i] << " -> " << freq[arr[i]] << std::endl;
        }
    }

    return 0;
}