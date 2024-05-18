#include <iostream>

const int MAX_SIZE = 100;

template<class T>
class Stack
{
private:
    int top;
    T item[MAX_SIZE];

public:
    //Constructor
    Stack() : top(-1)
    {
    }

    //pushing the element
    void push(T element)
    {
        if (top >= MAX_SIZE)
        {
            std::cout << "stack is full";
        }
        else
        {
            top++;
            item[top] = element;
        }
    }

    bool is_empty()
    {
        return top < 0; // 1
    }
    
    void pop()
    {
        if (!is_empty())
        {
            top--;
        }
        else
            std::cout << "Stack is Empty in pop";
    }
    
    void pop(T &Element)
    {
        if (!is_empty())
        {
            Element = item[top];
            top--;
        }
        else
            std::cout << "Stack is Empty at pop save";
    }

    void getTop(T &stackTop)
    {
        if (!is_empty())
        {
            stackTop = item[top];
            std::cout << stackTop;
        }
        else
            std::cout << "Stack is Empty at getTop";
    }

    void print()
    {
        std::cout << "[ ";
        for (int i = top; i >= 0; i--)
        {
            std::cout << item[i] << ", ";
        }
        std::cout << "]";
        std::cout << std::endl;
    }
};

int main()
{
    Stack<int> arr;
    arr.push(20);
    arr.push(50);
    arr.push(12);
    arr.push(1);
    arr.push(3);
    arr.push(16);
    arr.pop();

    int y = 0;
    arr.pop(y);

    arr.print();

    std::cout << y << std::endl;
    
    int x = 0;
    arr.getTop(x);
    std::cout << std::endl;

    // std::cout << std::endl;

    Stack<std::string> string;
    string.push("Omar");
    string.push("Tarek");
    string.push("Ammar");
    string.push("Alaa");

    string.print();

    return 0;
}