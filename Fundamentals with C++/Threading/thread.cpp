#include <iostream>
#include <thread>

static bool s_finished = false;

void DOWORK()
{
    using namespace std::literals::chrono_literals;

    std::cout << std::this_thread::get_id();

    while(!s_finished)
    {
        std::cout << "Working..." << std::endl;
        std::this_thread::sleep_for(1s);
    }
}

int main()
{
    std::thread worker(DOWORK);

    std::cin.get();
    s_finished = true;

    worker.join();
    std::cout << std::this_thread::get_id();

    std::cin.get();

    return 0;
}