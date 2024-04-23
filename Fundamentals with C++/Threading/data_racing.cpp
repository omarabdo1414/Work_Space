#include <iostream>
#include <thread>
#include <mutex>

int global; // shared resource

std::mutex mutex;

void producer()
{
    // LOCK or disable interrubt for Context switching = disable Schedular
    mutex.lock();
    global++; // write
    // enable interrubt for Context switching = Enable Schedular --> this is a bad practics
    mutex.unlock();
}

void consumer()
{
    // LOCK
    mutex.lock();
    auto local = global; // read
    // UNLOCK
    mutex.unlock();
}

int main()
{
    std::thread t1(producer);
    std::thread t2(consumer);

    t1.join();
    t2.join();

    return 0;
}