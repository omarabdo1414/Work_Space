#include <iostream>
#include <string>

class Room {
private:
    int size_;
    
public:
    Room(int size) : size_(size) {}
    // Additional constructor if needed
    // Destructor if needed
};

class House {
private:
    Room* livingRoom;
    Room* kitchen;
    
public:
    House() : livingRoom(new Room()), kitchen(new Room()) {}
    ~House() {
        delete livingRoom;
        delete kitchen;
    }
};


