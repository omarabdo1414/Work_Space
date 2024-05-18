#include <iostream>
#include <memory>

class MyClass{
    public:
        // default
        MyClass()
        {
            std::cout << "Constructor invoked" << std::endl;
        }

        ~MyClass()
        {
            std::cout << "Destructor invoked" << std::endl;
        }
};

int main()
{
    std::unique_ptr<int> ptr(new int(5));

    std::cout << *ptr << std::endl;

    std::unique_ptr<int> ptr2(std::move(ptr));

    // std::cout << *ptr << std::endl;
    std::cout << *ptr2 << std::endl;
    
    return 0;
}