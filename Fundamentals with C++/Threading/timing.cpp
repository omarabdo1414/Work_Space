#include <iostream>
#include <chrono>
#include <thread>

class Timer
{
    private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    std::chrono::duration<float> duration;

    public:
    Timer()
    {
        start = std::chrono::high_resolution_clock::now();
    }
    ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;

        float ms = duration.count() * 1000.0f;
        std::cout << ms << "ms \n";
    }
};

void Loop()
{
    Timer timer;
    for(int i = 0; i < 100; i++)
    {
        std::cout << "Hello \n";
    }
}

int main()
{
    Loop();

    return 0;
}