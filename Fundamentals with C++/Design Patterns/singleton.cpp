#include <iostream>
#include <memory>

class SingletonClass {
private:
    SingletonClass() {
        
        std::cout << "instance created" << std::endl;
    }
    static std::shared_ptr<SingletonClass*> instance;
    static int count;

public:
    static SingletonClass* getInstance() {
        if (!instance) {
            instance = new SingletonClass(); // creation
        }
        return instance;
    }

    void showMessage() {
        std::cout << "Hello, I am a Singleton!" << std::endl;
    }
};

SingletonClass* SingletonClass::instance = nullptr;

int SingletonClass::count = 0;

int main() {
    SingletonClass* obj1 = SingletonClass::getInstance();
    obj1->showMessage();

    SingletonClass* obj2 = SingletonClass::getInstance();
    obj2->showMessage();

    if (obj1 == obj2) {
        std::cout << "Both instances are the same." << std::endl;
    }

    return 0;
}
