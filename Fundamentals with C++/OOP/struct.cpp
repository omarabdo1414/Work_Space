#include <iostream>

struct Car
{
    std::string name;
    std::string color;
    int model;
    int maxSpeed;

    std::string getCarName()
    {
        return name;
    }
}x, y;

Car input(Car &c)
{
    std::cin >> c.name >> c.color >> c.model >> c.maxSpeed;

    return c;
}

void printCar(Car s)
{
    std::cout << s.name << std::endl;
    std::cout << s.color << std::endl;
    std::cout << s.model << std::endl;
    std::cout << s.maxSpeed << std::endl;
}


int main()
{
    input(x);
    printCar(x);

    std::string carName = x.getCarName();

    std::cout << carName << std::endl;

    Car *h;
    h = &x;

    std::cout << h->name << " " << h->color << std::endl;

    return 0;
}