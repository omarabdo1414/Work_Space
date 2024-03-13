#include <iostream>

struct Car
{
    std::string name;
    std::string color;
    int model;
    int maxSpeed;

    void printModel()
    {
        std::cout << model << std::endl;
    }
};

Car input()
{
    Car c;
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
    Car x, y;

    Car *h;

    x = input();
    printCar(x);

    h = &x;

    x.printModel();

    std::cout << h->name << " " << h->color << std::endl;

    return 0;
}