#include <iostream>
#include <vector>
#include "base_entity.cpp"
#include "Teacher.cpp"

class Student : public Base
{
private:
    double GPA;
    std::vector<Teacher> teachers;
public:
    // Setter and getter for GPA
    void setGPA(double gpa)
    {
        GPA = gpa;
    }

    double getGPA() const
    {
        return GPA;
    }
};

int main()
{
    return 0; 
}
