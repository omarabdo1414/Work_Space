#include <iostream>

void calculate(int i, int j, int *add, int *mul)
{
    *add = i + j;
    *mul = i * j;
}

int main()
{
    int i = 5, j = 6;
    int *ptr1, *ptr2;

    int add, mul;

    ptr1 = &add;
    ptr2 = &mul;

    calculate(i, j, &add, &mul);

    std::cout << add << " " << mul << std::endl;


    return 0;
}