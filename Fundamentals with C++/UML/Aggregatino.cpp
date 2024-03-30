#include <iostream>
#include <string>
#include <vector>

class Department;

class Employee {
private:
    std::string name;
    Department* department;
    
public:
    Employee(std::string name) : name(name), department(nullptr) {}
    
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
    Department(std::string name) : name(name) {}
    
    // Add employee to department
    void addEmployee(Employee* employee) {
        employees.push_back(employee);
        employee->setDepartment(this);
    }
};
