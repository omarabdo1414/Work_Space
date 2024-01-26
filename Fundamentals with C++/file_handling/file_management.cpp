#include <iostream>
#include <fstream>
#include <cstring>

class Person
{
    private:
        char name[100];
        int age;
    public:
    Person()
    {
        strcpy(this->name,"no name");
        this->age = 0;
    }
    Person(const char *name, int age)
    {
        strcpy(this->name,name);
        this->age = age;
    }

    void set_info()
    {
        std::cout << "Hello I'm " << name << ", and my age is " << age << std::endl;
    }

    void change()
    {
        strcpy(name, "Nothing");
        age = 80;
    }
};

int main()
{
    Person omar("Omar", 23);
    std::fstream file("person.bin",std::ios::binary | std::ios::in | std::ios::out | std::ios::trunc);

    if(!file.is_open())
        std::cout << "Error, Please try again!" << std::endl;
    else
    {
        file.write((char *)&omar, sizeof(Person));

        file.seekp(0);

        Person angela;
        file.read((char *)&angela, sizeof(Person));

        omar.set_info();
        angela.set_info();

        omar.change();
        omar.set_info();
        angela.set_info();

        file.close();
    }

    return 0;
}