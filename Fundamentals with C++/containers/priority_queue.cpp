#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    std::priority_queue<int, vector<int>> pq;

    pq.push(50);
    pq.push(60);
    pq.push(70);
    pq.push(40);

    while(pq.size() != 0)
    {
        std::cout << pq.top() << std::endl;
        pq.pop();
    }

    return 0;
}