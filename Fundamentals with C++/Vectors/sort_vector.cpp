#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1, 3, 6, 8, 9, 1, 2, 7, 4, 5};

    sort(v.begin(),v.end());

    for(auto it : v)
    {
        cout << it << " ";
    }
    

    return 0;
}