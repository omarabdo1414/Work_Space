#include <iostream>

/*
Pointers are used for accessing the resources which are external to the program – like heap memory. 
So, for accessing the heap memory (if anything is created inside heap memory), pointers are used. 
When accessing any external resource we just use a copy of the resource. 
If we make any changes to it, we just change it in the copied version. 
But, if we use a pointer to the resource, we’ll be able to change the original resource.

Problems with Normal Pointers

Memory Leaks: This occurs when memory is repeatedly allocated by a program but never freed. 
This leads to excessive memory consumption and eventually leads to a system crash. 

Dangling Pointers: A dangling pointer is a pointer that occurs at the time 
when the object is de-allocated from memory without modifying the value of the pointer.

Wild Pointers: Wild pointers are pointers that are declared and allocated memory 
but the pointer is never initialized to point to any valid object or address.

Types of smart pointers:
auto_ptr
unique_ptr
shared_ptr
weak_ptr
*/

using namespace std;
 
class Rectangle {
private:
    int length;
    int breadth;
};
 
void fun()
{
    /*  By taking a pointer p and
        dynamically creating object
        of class rectangle */
    Rectangle* p = new Rectangle();
}
 
int main()
{
    // Infinite Loop
    while (1) {
        fun(); // Memory limit exceeded
    }
}