#include <iostream>
#include <future>
#include <thread>
#include <chrono>

void computeValue(std::promise<int>& promis)
{
    int result = 42; // Some computaion
    promis.set_value(result); // Set Value in the promise
}

int main()
{
    using namespace std::literals::chrono_literals;

    std::promise<int> promise;
    std::future<int> futureObj = promise.get_future();

    std::thread producer(computeValue, std::ref(promise)); // launch the thread

    // int reslut = futureObj.get();
    auto status = futureObj.wait_for(1s);
    if(status == std::future_status::ready)
    {
        auto reslut = futureObj.get();
        std::cout << "Result: " << reslut << "\n";
    }
    else if(status == std::future_status::timeout)
    {
        std::cout << "Error" << "\n";
    }

    

    producer.join();

    return 0;
}