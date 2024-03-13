#include <iostream>
#include <vector>
#include <array>

int main()
{
    int arr[10] = {0};
    int N;
    std::cin >> N;

    int rem;
    while (N > 0)
    {
        rem = N % 10;
        if(arr[rem] == 1)
            break;
        arr[rem] = 1;
        N = N / 10;
    }

    if (N > 0)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
    
    return 0;
}