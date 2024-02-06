#include <iostream>
using namespace std;

template <class T>
class SmartPtr {
private:
    T* ptr; // Actual pointer
public:
    // Constructor: 
    explicit SmartPtr(T* p = NULL) { ptr = p; }
 
    // Destructor
    ~SmartPtr() { delete (ptr); }

    // Overloading dereferencing operator
    T& operator*() { return *ptr; }
};
 
int main()
{
    SmartPtr<int> ptr(new int(10));
    // *ptr = 20;
    cout << *ptr;
 
    return 0;
}