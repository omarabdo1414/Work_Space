#include <iostream>
#include <thread>
#include <chrono>

void do_something(int i)
{
    std::cout << "Value is: " << i << std::endl;
}

struct fun
{
    int &i;
    fun(int _i) : i(_i)
    {

    }
    void operator()()
    {
        for(int j = 0; j < 1000; j++)
        {
            do_something(i);
        }
    }
};

void func()
{
    int local_state = 0;
    fun my_func(local_state++);
    std::thread t1(my_func);
    t1.join();
    t1.detach();
}

int main()
{
    func();

    return 0;
}