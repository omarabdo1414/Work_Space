#include <iostream>
using namespace std;

template <class T>
class Smart_ptr
{
private:
    T *ptr;

public:
    explicit Smart_ptr(T *p = NULL)
    {
        ptr = p;
    }

    // Copy Constructor
    Smart_ptr(Smart_ptr s) = delete;

    ~Smart_ptr()
    {
        delete ptr;
    }

    T &operator*()
    {
        return *ptr;
    }
};

int main()
{
    Smart_ptr<int> ptr(new int(10));

    // *ptr = 20;

    std::cout << *ptr << std::endl;

    Smart_ptr<int> ptr2 = ptr;

    return 0;
}