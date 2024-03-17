#include <iostream>

int add(int x, int y = 5, int z = 6)
{
    return x + y + z;
}

inline void print(std::string str)
{
    std::cout << str << std::endl;
}

void fun()
{
    static int x = 0;
    x++;
    std::cout << x << std::endl;
}

int main()
{
    std::cout << add(10, 10, 5) << std::endl;

    print("Ahmed");
    print("Mohammed");

    fun();
    fun();
    fun();
    return 0;
}