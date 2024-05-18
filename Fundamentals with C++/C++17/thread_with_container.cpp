#include <iostream>
#include <vector>
#include <thread>
#include <functional>

int main()
{
    auto lambda = [](int id){
        std::cout << "Id: " << id << std::endl;
    };
    
    std::vector<std::thread> threads;

    for(int i = 0; i < 10; i++)
    {
        threads.push_back(std::thread(lambda, i));v 
    }

    std::for_each(threads.begin(), threads.end(), std::mem_fn(&std::thread::join));

    return 0;
}