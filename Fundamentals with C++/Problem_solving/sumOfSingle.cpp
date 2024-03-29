#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::vector<int> arr = {4, 5, 7, 5, 4, 8};
    int result = 0;

    for (auto i : arr)
    {
        if(count(arr.begin(), arr.end(), i) == 1)
        {
            result += i;
        }
    }

    std::cout << result;

    return 0;
}