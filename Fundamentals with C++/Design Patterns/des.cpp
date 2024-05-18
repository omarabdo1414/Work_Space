#include <iostream>

class Base
{
    public:
    Base()
    {
        std::cout << "Base Constructor" << std::endl;
    }

    virtual ~Base()
    {
        std::cout << "Base Destructor" << std::endl;
    }
};

class Dirived : public Base
{
    public:
    Dirived()
    {
        std::cout << "Dirived Constructor" << std::endl;
    }

    ~Dirived()
    {
        std::cout << "Dirived Destructor" << std::endl;
    }
};

int main()
{
    Base *base = new Base();
    delete base;

    Base *dirived = new Dirived();
    delete dirived;

    std::cin.get();
    return 0;
}