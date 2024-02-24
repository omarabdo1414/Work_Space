#include <iostream>

using namespace std;
 
class Rectangle {
private:
    int length;
    int breadth;
};
 
void fun()
{
    Rectangle* p = new Rectangle();
}
 
int main()
{
    // Infinite Loop
    while (1) {
        fun(); // Memory limit exceeded
    }
}