#include <iostream>
#include <queue>

using namespace std;

int main()
{
    std::queue<int> q;

    q.push(10);
    q.emplace(20);
    q.emplace(30);
    q.emplace(40);
    q.emplace(50);

    while(!q.empty())
    {
        std::cout << q.front() << std::endl;
        q.pop();
    }

    return 0;
}