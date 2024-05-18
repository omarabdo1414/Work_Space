#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    std::unordered_multiset<std::string> us({"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"});
    
    for (auto set : us)
    {
        std::cout << set << ": ";
        std::cout << us.bucket(set) << std::endl;
    }

    std::cout << us.bucket_count() << std::endl;

    auto count = us.bucket_count();

    for(int i = 0; i < count; i++)
    {
        std::cout << "Bucket # " << i << " Contain: ";
        for(auto it = us.begin(i); it != us.end(i); it++)
        {
            std::cout << *it << " ";
        }
        std::cout << "\n";
    }
    
    us.clear();

    return 0;
}