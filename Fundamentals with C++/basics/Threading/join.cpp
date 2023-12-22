#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

std::timed_mutex mtx;
int myAmount = 0;

void run(int num)
{
    if(mtx.try_lock_for(std::chrono::seconds(3)))
    {
        ++myAmount;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Thread " << num << " Entered" << endl;
        mtx.unlock();
    }
    else
    {
        std::cout << "Thread " << num << " Could not Entered" << endl;
    }
    
}

int main()
{
    std::thread T1(run, 1);
    std::thread T2(run, 2);
    
    T1.join();
    T2.join();
    
    cout << myAmount << endl;
    return 0;
}