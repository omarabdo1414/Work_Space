#include <iostream>
#include <vector>

int main()
{
    std::vector<int> list = {3, -1, -1, -1, -1, -1, -1, 3, 6, 8, 9, 2, -1};

    int count = 0;
    int result = 0;

    for (int i = 0; i < list.size(); i++)
    {
        for (int j = 0; j < list.size(); j++)
        {
            if (list[i] == list[j])
            {
                count++;
            }
        }
        if (count >= result)
        {
            result = count;
        }
        count = 0;
    }

    std::cout << result << std::endl;

    return 0;
}