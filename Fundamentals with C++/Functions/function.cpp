#include <iostream>

/*
Function : 
    Example:
        1- void func()
        {
            statements;
        }

        2- void func(int x)
        {
            statements;
        }

        3- int func()
        {
            statements;
        }

        4- int func(int x, int y){
            statements;
        }

*/

//Function Prototype
int sum(int x, int y)
{
    return x + y;
}

std::string sum(std::string x, std::string y)
{
    return x + y;
}

float sum(float x, float y)
{
    return x + y;
}

void calc(int x, int y)
{
    std::cout << x + y << std::endl;
    std::cout << x - y << std::endl;
}

void print()
{
    std::cout << "Hello from print" << std::endl;
}

int main()
{
    int num1, num2;
    std::string f_name, s_name;
    float x, y;

    std::cin >> num1 >> num2;
    std::cin >> f_name >> s_name;
    std::cin >> x >> y;

    //function Calling
    std::cout << sum(x, y) << std::endl;

    // calc(num1, num2);
    // print();
    return 0;
}