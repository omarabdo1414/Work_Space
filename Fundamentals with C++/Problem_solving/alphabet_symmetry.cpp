#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> vs = {"ascr", "abcd", "bbcds"};
    std::vector<int> result;
    int count;
    
    for(std::string str : vs)
    {
        count = 0;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == i + 65 || str[i] == i +97)
            {
                count++;
            }
        }
        result.push_back(count);
    }

    for(auto i : result)
    {
        std::cout << i << std::endl;
    }

    return 0;
}