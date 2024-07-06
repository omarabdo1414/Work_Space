#ifndef _STACK_H
#define _STACK_H

#include <iostream>

const int MAX_SIZE = 100;

enum Status
{
    UNSUCCESSFULL,
    SUCCESSFULL
};

class Stack
{
private:
    int top;
    int item[MAX_SIZE];

public:
    //Constructor
    Stack();

    //pushing the element
    Status push(int element);

    Status is_empty();
    
    Status pop();
    
    Status pop(int &Element);

    Status getTop(int &stackTop);
};

#endif