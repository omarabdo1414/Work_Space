#include <iostream>
#include <string>
#include <vector>

class Department;

class Employee {
private:
    std::string m_name;
    Department* department;
    
public:
    // Defaut

    // Paramterized Constructor
    Employee(std::string name) : m_name(name), department(nullptr) {}
    
    // Setter for department
    void setDepartment(Department* newDepartment) {
        department = newDepartment;
    }
};

class Department {
private:
    std::string name;
    std::vector<Employee*> employees;
    
public:
    Department(std::string name) {
        this.name = name;
    }
    
    // Add employee to department
    void addEmployee(Employee* employee) {
        employees.push_back(employee); // add employee
        employee->setDepartment(this); // Add the department to the 
    }
};

int main()
{
    Employee emp("Omar");

    Department Sales("Sales");

    Sales.addEmployee(&emp);
}
