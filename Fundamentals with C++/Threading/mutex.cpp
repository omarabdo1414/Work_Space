#include <iostream>
#include <thread>
#include <mutex>

unsigned int global = 0;

std::mutex mutex;
void increment()
{
    mutex.lock();
    for(int i = 0; i < 1000000; i++)
    {
        global++;
    }
    mutex.unlock();
}



int main()
{
    std::thread thread1(increment);
    std::thread thread2(increment);

    thread1.join();
    thread2.join();

    std::cout << global << std::endl;

    return 0;
}