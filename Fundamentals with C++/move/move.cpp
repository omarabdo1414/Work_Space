#include <iostream>

class MyClass {
public:
    MyClass(): size(0), data(nullptr)
    {
        std::cout << "Defult Constructor called!" << std::endl;
    } 
    // Parameterized Constructor
    MyClass(int size) : size(size), data(new int[size]) {
        std::cout << "Parameterized Constructor called!" << std::endl;
    }

    MyClass(MyClass &obj) : size(obj.size), data(new int[obj.size])
    {
        std::cout << "Copy Constructor is Called" << std::endl;
    }

    // Move constructor
    MyClass(MyClass&& other) // rvalue referance
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


int main() {
    MyClass source(5);

    // Use std::move to transfer ownership from source to destination
    MyClass destination(15);

    destination = std::move(source);

    int i = 5;

    return 0;
}
