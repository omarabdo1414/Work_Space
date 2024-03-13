#include <iostream>

void fun(int & i){
    std::cout << "lvalue ref" << std::endl;
}

void fun(int && i){
    std::cout << "rvalue ref" << std::endl;
}

int main()
{
    int i = 10;
    fun(i);
    fun(10);
    fun(std::move(i)); // move convert lvalue to rvalue

    return 0;
}