#include <iostream>


int main()
{
    //Pointers
    /*
    Syntax :   
        dataType *pointerName;

    * operator 
    first with initialization : int * ptr;
    second is dereference : *ptr = value inside the variable
    */

    // int var = 10;
    // int * ptr;
    // ptr = &var;

    // std::cout << var << std::endl;
    // std::cout << &var << std::endl;
    // std::cout << ptr << std::endl;

    // char str[] = "Abdo";

    // str[0] = 'B';

    // std::cout << str << std::endl;


    int arr[] = {9, 4, 2, 3, 4, 5};

    int *ptr2 = arr;

    std::cout << &arr[0] << std::endl;
    std::cout << ptr2 << std::endl;
    std::cout << *ptr2 << std::endl;

    ptr2 += 2;

    std::cout << ptr2 << std::endl;
    std::cout << *ptr2 << std::endl;

    std::cout << *(arr + 2);

    Dynamic memory allocation
    int * dynaicPointer = new int;
    *dynaicPointer = 10;
    
    int* dynamicArray = new int[5];

    std::cout << *dynaicPointer << std::endl;

    delete dynaicPointer;
    
    return 0;
}