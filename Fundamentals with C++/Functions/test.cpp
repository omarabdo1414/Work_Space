#include <iostream>

using namespace std;

//default arguments
int sum(int x, int y = 10, int z = 5)
{
    return x + y + z;
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
    std::cout << sum(10, 5) << std::endl;

    fun();
    fun();
    fun();

    return 0;
}