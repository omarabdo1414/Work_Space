#include <iostream>
#include <string>

class Room;

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

class Room {
private:
    int size;
    
public:
    Room() : size(0) {}
    // Additional constructor if needed
    // Destructor if needed
};
