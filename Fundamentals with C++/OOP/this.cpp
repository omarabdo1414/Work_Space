#include <iostream>

class Student
{
    private:
        int id;
    public:
        Student(){}

    void set_id(int id)
    {
        this->id = id;
    }

    void print()
    {
        std::cout << "Id is : " << id << std::endl;
    }
    
    void address()
    {
        std::cout << this << std::endl;
    }
};

int main()
{
    Student a, b, c;
    std::cout << "Adress of a is : ";
    a.address();
    std::cout << std::endl;
    std::cout << "Adress of b is : ";
    b.address();
    std::cout << std::endl;
    std::cout << "Adress of c is : ";
    c.address();
    std::cout << std::endl;

    Student s;
    s.set_id(5);
    s.print();


    return 0;
}