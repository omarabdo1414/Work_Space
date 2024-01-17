#include <iostream>
using namespace std;

class Employee
{
    private:
    string name;
    string job;
    float salary;

    public:
        Employee(){}
        Employee(string n, string j, float s)
        {
            name = n;
            job = j;
            salary = s;
        }
        void set_selary(float s)
        {
            salary = s;
        }
        float get_salary()
        {
            return salary;
        }
        virtual void display()
        {
            cout << "Name : " << name << std::endl;
            cout << "job : " << job << std::endl;
            cout << "Salary : " << salary << std::endl;
        }
};

class Student
{
    private:
        string department;
        string research_interest;
    public:
        Student(string dp, string ra) : department(dp), research_interest(ra)
        {}
        void set_department(string dp)
        {
            department = dp;
        }
        void set_research_interest(string rarea)
        {
            research_interest = rarea;
        }

        string get_department()
        {
            return department;
        }

        string get_research_interest()
        {
            return research_interest;
        }

        virtual void display()
        {
            cout << "Department : " << department << endl;
            cout << "Research Interest : " << research_interest << endl;
        }
};

class TeachingAssistant : public Employee , public Student
{
    public:
        TeachingAssistant(string n, string j, float s,string dp, string ra) : Employee(n, j, s), Student(dp, ra)
        {}

    void display()
    {
        Employee::display();
        Student::display();
    }
};

int main()
{
    TeachingAssistant assistant("Ahmed", "Assestant", 7000, "Mechatronics", "Robotics");
    
    assistant.display();
    
    return 0;
}