#include <iostream>
#include <string>
#include <vector>

class Owner;

class Car {
private:
    std::string model;
    Owner* owner;
    
public:
    Car(std::string model) : model(model), owner(nullptr) {}
    
    // Setter for owner
    void setOwner(Owner* newOwner) {
        owner = newOwner;
    }
};

class Owner {
private:
    std::string name;
    std::vector<Car*> carsOwned; 
    
public:
    Owner(std::string name) : name(name) {}
    
    // Add car to owned cars
    void addCar(Car* car) {
        carsOwned.push_back(car);
        car->setOwner(this); // Set the owner of the car to this owner
    }
};
