#include <iostream>
#include "stack.h"


//Constructor
Stack::Stack() : top(-1)
{

}

//pushing the element
Status Stack::push(int element)
{
    if (top >= MAX_SIZE)
    {
        std::cout << "stack is full";
        return UNSUCCESSFULL;
    }
    else
    {
        top++;
        item[top] = element;
        return SUCCESSFULL;
    }

    return UNSUCCESSFULL;
}

Status Stack::is_empty()
{
    return top < 0 ? SUCCESSFULL : UNSUCCESSFULL;
}

Status Stack::pop()
{
    if (!is_empty())
    {
        top--;
        return SUCCESSFULL;
    }
    else{
        std::cout << "Stack is Empty in pop";
        return UNSUCCESSFULL;
    }
}

Status Stack::pop(int &Element)
{
    (void) Element;
    return UNSUCCESSFULL;
}

Status Stack::getTop(int &stackTop)
{
    (void) stackTop;
    return UNSUCCESSFULL;
}