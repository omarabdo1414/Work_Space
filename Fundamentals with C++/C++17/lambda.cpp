#include <iostream>

/*
[capture](parameters) mutable exception -> return_type {
    // function body
}
*/

int main()
{
    int y = 10;
    auto lambda = [&y](int x) 
    {
        y = x * y; // This is valid because y is captured by reference and the lambda is 'mutable'
        std::cout << y << std::endl;
    };

    lambda(5);

    return 0;
}

/*
#include <iostream>
#include <string>

Capture by value

int main() {
    std::string msg = "Hello";
    int counter = 10;

    auto func = [msg, counter]() mutable {
        std::cout << "Inside Lambda :: msg = " << msg << std::endl;
        std::cout << "Inside Lambda :: counter = " << counter << std::endl;
        msg = "Temp";
        counter = 20;
        std::cout << "Inside Lambda :: After changing :: msg = " << msg << std::endl;
        std::cout << "Inside Lambda :: After changing :: counter = " << counter << std::endl;
    };

    func();

    std::cout << "msg = " << msg << std::endl;
    std::cout << "counter = " << counter << std::endl;

    return 0;
}
*/

/*
#include <iostream>
#include <string>

Capture by reference

int main() {
    std::string msg = "Hello";
    int counter = 10;

    auto func = [&msg, &counter]() {
        std::cout << "Inside Lambda :: msg = " << msg << std::endl;
        std::cout << "Inside Lambda :: counter = " << counter << std::endl;
        msg = "Temp";
        counter = 20;
        std::cout << "Inside Lambda :: After changing :: msg = " << msg << std::endl;
        std::cout << "Inside Lambda :: After changing :: counter = " << counter << std::endl;
    };

    func();

    std::cout << "msg = " << msg << std::endl;
    std::cout << "counter = " << counter << std::endl;

    return 0;
}
*/