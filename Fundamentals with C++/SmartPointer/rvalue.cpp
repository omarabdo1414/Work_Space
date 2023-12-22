#include <iostream>
#include <memory>

int getValue()
{
    int x = 50;
    std::cout << "lvalue" << std::endl;
    return x;
}
int &getValueRef()
{
    static int value = 10;

    std::cout << "rvalue" << std::endl;
    return value;
}

void printName(std::string &name)
{
    std::cout << "left value refrance : " << name << std::endl;
}

void printName(std::string &&name)
{
    std::cout << "right value referance : " << name << std::endl;
}

int main()
{
    int i = 10;

    i = getValue();

    getValueRef() = 5; // &&

    std::cout << i << std::endl;
    std::cout << getValueRef() << std::endl;


    std::string firstName = "Robotics";
    std::string lastName = "Conrner";
    // std::string fullNAme = firstName + lastName;

    // printName(fullNAme);
    printName(firstName + lastName);

    return 0;
}