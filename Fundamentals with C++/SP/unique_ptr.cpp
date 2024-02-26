#include <iostream>
#include <memory>

class MyClass{
    public:
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
    std::weak_ptr<int> wptr;
    {
        std::shared_ptr<int> shptr = std::make_shared<int>(25);
        wptr = shptr;
        std::cout << shptr.use_count() << std::endl;
    }

    return 0;
}