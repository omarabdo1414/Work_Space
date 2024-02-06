#include <iostream>

/*
shared_ptr
By using shared_ptr more than one pointer can point to this one object at a time 
it’ll maintain a Reference Counter using the use_count() method. 

*/
using namespace std;
// Dynamic Memory management library
#include <memory>
 
class Rectangle {
    int length;
    int width;
 
public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
 
    int area() { return length * breadth; }
};
 
int main()
{
    //---\/ Smart Pointer
    shared_ptr<Rectangle> P1(new Rectangle(10, 5));
    // This'll print 50
    cout << P1->area() << endl;
 
    shared_ptr<Rectangle> P2(P1);
    // P2 = P1;
 
    // This'll print 50
    cout << P2->area() << endl;
 
    // This'll now not give an error,
    // cout << P1->area() << endl;
 
    // This'll also print 50 now
    // This'll print 2 as Reference Counter is 2
    cout << P1.use_count() << endl;
    return 0;
}