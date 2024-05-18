#include <iostream>
#include <thread>

void fun(int i, std::string & str)
{
    std::cout << str << " Concurrunt World!" << std::endl;
}

int main()
{
    int i = 5;
    std::string s("Hello");

    std::thread t1(fun, i, std::ref(s)); // referance wrapper

    t1.join();

    return 0;
}