#include <iostream>

class Vehicle
{
    private:
    std::string type;
    std::string color;
    int model;

    public:
        // Default Constructor
        Vehicle() : type("BMW"), color("Blue"), model(2017)
        {
            std::cout << "Base Constructor of Vehicle Called" << std::endl;
        }

        // Parameterized Constructor
        Vehicle(std::string t, std::string c, int m) : type(t), color(c), model(m)
        {}

        void show()
        {
            std::cout << "Type of the Vechel: " << type << std::endl
            << "Color: " << color << std::endl << "Model: " << model << std::endl;
        }
};

/* is-a Relationship */

/*
Types of Inheritance
    - Single
    - Multilevel
    - Multible Inheritance
*/

class Car : public Vehicle
{
    private:
    int no_of_tires;

    public:
        // Default
        Car() : no_of_tires(4)
        {
            std::cout << "Derived Constructor Called" << std::endl;
        }

        // Parameterized Constructor
        Car(std::string t, std::string c, int m, int n) : Vehicle(t, c, m), no_of_tires(n)
        {}

        void show()
        {
            Vehicle::show();
            std::cout << "Number of Tires: " << no_of_tires << std::endl;
        }
};

int main()
{
    Vehicle truc;

    Car car;
    car.show();

    return 0;
}