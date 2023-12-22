#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
using namespace std;

int x = 0, y = 0;
std::mutex m1, m2;

void doSomeWorkForSeconds(int seconds)
{
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void incrementXY()

int main()
{


    return 0;
}