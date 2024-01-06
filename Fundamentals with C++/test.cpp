#include <iostream>

int * guess()
{
    int x = 7;
    return &x;
}

int main()
{
    int *x = guess();

    return 0;
}