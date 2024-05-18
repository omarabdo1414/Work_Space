#include <iostream>
#include <thread>

void thread_fun1()
{
    while(1)
    {
        std::cout << "Thread 1 is Yeilded" << std::endl;
        std::this_thread::yield();
        std::cout << "Thread 1 is back" << std::endl;
    }
}
void thread_fun2()
{
    while(1)
    {
        std::cout << "Thread 2 is Yeilded" << std::endl;
        std::this_thread::yield();
        std::cout << "Thread 2 is back" << std::endl;
    }
}

int main()
{
    std::thread t1(thread_fun1);
    std::thread t2(thread_fun2);

    t1.join();
    t2.join();

    return 0;
}