#include <iostream>

// Function to end the recursion of variadic template function
void log() {
    // This can be empty or used to print something that marks the end of output.
}

template<typename T, typename... Args>
void log(T first, Args... args)
{
    std::cout << first;
    if(sizeof...(args) > 0)
    {
        std::cout << " , ";
        log(args...);
    }
    else
    {
        std::cout << "\n";
    }
}

int main()
{
    log(10, "omar", 5.6, "Mo Salah");

    return 0;
}