#include <iostream>

class A
{
    private:
    std::string name;
public:
    void show(std::string name)
    {
        this->name = name;
        std::cout << this << std::endl;
    }
};

class B
{
public:
    void show()
    {
        std::cout << this << std::endl;
    }
};

int main()
{
    A a;
    a.show();
    std::cout << &a << std::endl;
    B b;
    b.show();
    std::cout << &b << std::endl;

    return 0;
}