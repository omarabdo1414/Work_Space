#include <iostream>

class SingletonClass {
private:
    SingletonClass() {
        std::cout << "instance created" << std::endl;
    }
    static SingletonClass* instance;

public:
    static SingletonClass* getInstance() {
        if (!instance) {
            instance = new SingletonClass();
        }
        return instance;
    }

    void showMessage() {
        std::cout << "Hello, I am a Singleton!" << std::endl;
    }
};

SingletonClass* SingletonClass::instance = nullptr;

int main() {
    SingletonClass* singletonInstance1 = SingletonClass::getInstance();
    singletonInstance1->showMessage();

    // std::cin.get();

    SingletonClass* singletonInstance2 = SingletonClass::getInstance();
    singletonInstance2->showMessage();

    // std::cin.get();

    if (singletonInstance1 == singletonInstance2) {
        std::cout << "Both instances are the same." << std::endl;
    }

    return 0;
}
