#include <iostream>
#include "base_entity.cpp"

class Teacher : public Base
{
private:
    double member_salary;
public:
    // Setter and getter for Salary
    void setSalary(double gpa)
    {
        member_salary = gpa;
    }

    double getSalary() const
    {
        return member_salary;
    }
};