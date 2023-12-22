#include <iostream>

class MyClass {
public:
    // Default Constructor
    MyClass(int size) : size(size), data(new int[size]) {
        std::cout << "Default Constructor called!" << std::endl;
    }

    // Move constructor
    MyClass(MyClass&& other)
        : size(other.size), data(other.data) {
        std::cout << "Move constructor called!" << std::endl;
        other.size = 0;
        other.data = nullptr;
    }

    // Move assignment operator
    MyClass& operator=(MyClass&& other) {
        if (this != &other) {
            delete[] data;  // Release current resources

            size = other.size;
            data = other.data;

            // Reset the source object
            other.size = 0;
            other.data = nullptr;
        }
        std::cout << "Move assignment operator called!" << std::endl;
        
        return *this;
    }

    // Destructor
    ~MyClass() {
        delete[] data;
        std::cout << "Destructor called!" << std::endl;
    }

private:
    int size;
    int* data;
};

/*
move constructor
class A{
    A(const A&){}
    A(const A&&){}
};

move assignment operator

class A{
    A& operator = (const A&){
        ------
    }
    A& operator= (const A&&)
    {
        --------
    }
}

*/


int main() {
    MyClass source(5);

    // Use std::move to transfer ownership from source to destination
    MyClass destination(10);
    destination = std::move(source);

    return 0;
}
