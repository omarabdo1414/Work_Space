#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::vector<int> elevator = {7,1,7,1};
    int current = 0;
    int sum = 0;

    for(int i = 0; i < elevator.size() - 1; i++)
    {
        current = abs(elevator[i] - elevator[i + 1]);
        sum += current;
        current = 0;
    }

    std::cout << sum << std::endl;


    return 0;
}