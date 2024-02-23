#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    std::unordered_multiset<std::string> us({"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"});

    us.insert({"5 o'clock", "karem", "omar"});

    us.erase(us.find("omar"), us.find("Wed"));
    

    for(auto s : us)
    {
        std::cout << s << " : ";
        cout << us.bucket(s) << std::endl;
    }

    // std::cout << us.bucket_count() << endl;

    // int c = us.bucket_count();

    // for(size_t i = 0; i < c; i++)
    // {
    //     cout << "Bucket #" << i << " Contains : [";
    //     for(auto it = us.begin(i); it != us.end(i); it++)
    //         cout << *it << ", ";
    //     cout << "]" << endl;
    // }

    // for (size_t i = 0; i < c; i++)
    // {
    //     cout << "Bucket #" << i << " has : " << us.bucket_size(i) << std::endl;
    // }
    
    us.clear();

    return 0;
}