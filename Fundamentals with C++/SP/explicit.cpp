#include <iostream>

class Entity
{
    private:
        std::string m_Name;
        int m_Age;
    public:
        explicit Entity(const std::string& name) : m_Name(name) , m_Age(-1)
        {}
        Entity(int age) : m_Name("Unknown"), m_Age(age)
        {}
};

void printEntity(const Entity& entity)
{
    //print anything
}

int main()
{
    printEntity(22);
    printEntity(Entity("omar"));
    Entity a = "omar";
    Entity b = 23;

    return 0;
}