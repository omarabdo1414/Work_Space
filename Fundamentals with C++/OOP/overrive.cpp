#include <iostream>

class A
{
public:
    virtual void display()
    {
        std::cout << "Hi" << std::endl;
    }
};

class B : public A
{
public:
    void display()
    {
        std::cout << "Bye Bye" << std::endl;
    }
};

int main()
{
    A a;
    B b;

    return 0;
}