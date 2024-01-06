#include <iostream>

using namespace std;

//default arguments
inline int sum(int x, int y = 2)
{
    return x + y;
}

//inline function
inline void print(std::string s)
{
    std::cout << s << std::endl;
}

//Static keyword
void fun()
{
    static int x = 0;
    x++;
    std::cout << "Value of x is : " << x << std::endl;
}

int main()
{
    std::cout << sum(10, 6) << std::endl;

    print("Hello world");

    fun();
    fun();
    fun();

    return 0;
}