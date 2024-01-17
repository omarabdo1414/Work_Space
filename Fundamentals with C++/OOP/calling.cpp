#include <iostream>

class Base
{
    private:
        int x;
    public:
        Base()
        {
            x = 0;
            std::cout << "Base default constructor" << std::endl;
        }
};

class Derived : public Base
{
    private:
        int y;
    public:
        Derived(){
            std::cout << "Derived default constructor" << std::endl;
        }
        Derived(int i)
        {
            y = i;
            std::cout << "Derived Parameterized constructor " << y << std::endl;
        }
};

int main()
{
    Base b1;
    Derived b2;
    Derived b3(5);
    
    return 0;
}