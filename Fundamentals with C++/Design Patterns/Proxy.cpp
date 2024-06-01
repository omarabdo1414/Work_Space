#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>

class Subject {
public:
    virtual void Request() = 0;
};

class RealSubject : public Subject {
public:
    void Request() override {
        std::cout << "RealSubject: Handling Request." << std::endl;
    }
};

// Proxy Class
class Proxy : public Subject {
private:
    RealSubject* realSubject;
public:
    Proxy() {
        realSubject = new RealSubject();
    }
    
    ~Proxy() {
        delete realSubject;
    }

    void Request() override {
        using namespace std::literals::chrono_literals;
        std::cout << "Proxy: Checking access before forwarding request." << std::endl;
        std::cout << "Proxy: Logging the request." << std::endl;
        std::cout << "Processing the request..." << std::endl;
        std::this_thread::sleep_for(5s);
        realSubject->Request();
    }
};

// Client Code
int main() {
    Proxy proxy;
    proxy.Request(); // Client calls the proxy
    return 0;
}