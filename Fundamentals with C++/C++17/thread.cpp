#include <iostream>
#include <thread>
#include <chrono>

void fun()
{
    using namespace std::literals::chrono_literals;
    while(1)
    {
        auto num_of_threads = std::thread::hardware_concurrency();
        std::cout << "number of threads supported by hardware is: " << num_of_threads << std::endl;
        std::this_thread::sleep_for(1s);
        std::cout << std::this_thread::get_id() << std::endl;
    }
}

void func_2()
{
    using namespace std::literals::chrono_literals;
    while(1)
    {
        std::cout << "Hello World from thread" << std::endl;
        std::this_thread::sleep_for(100ms);
        std::cout << std::this_thread::get_id() << std::endl;
        std::this_thread::sleep_for(1s);
    }
}

int main()
{
    std::thread t1(fun);
    std::thread t2(func_2);
    std::cout << std::this_thread::get_id() << std::endl;
    t1.join();
    t2.join();

    return 0;
}