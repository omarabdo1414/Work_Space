#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> result;

    map<int, int> map;

    for(int i = 0; i < nums.size(); i++)
    {
        if(map.find(target-nums[i]) != map.end())
        {
            result.push_back(map[target-nums[i]]);
            result.push_back(i);
            return result;
        }
        map[nums[i]];
    }
    return result;
}

int main()
{
    std::vector<int> nums = {1, 3, 4, 11, 5};
    int target = 6;

    std::vector<int> result;

    result = twoSum(nums, target);

    for (auto i : result)
    {
        std::cout << i << std::endl;
    }

    return 0;
}