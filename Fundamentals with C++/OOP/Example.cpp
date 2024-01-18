#include <iostream>
using namespace std;

class Employee
{
    protected:
        string name;
        int emp_id;
        double salary;
    public:
        Employee(string n, int id, double sal) : name(n), emp_id(id), salary(sal)
        {}
    virtual float get_total_salary() = 0; // pure virtual function

    virtual void print_info()
    {
        cout << "Name  \t|" << "Id \t|" << " Salary\n";
        cout << name << " \t|" << emp_id << " \t|" << salary << std::endl;
    }
};

class Sales : public Employee
{
    private:
        float gross_sales;
        float commition_rete;
    public:
        Sales(string n, int id, double sal, float gross, float commition) : Employee(n, id, sal)
        {
            gross_sales = gross;
            commition_rete = commition;
        }

        float get_total_salary()
        {
            return salary + (gross_sales * commition_rete);
        }

        void set_gross_sale(int gross)
        {
            gross_sales = gross;
        }

        void set_commition_rate(float commition)
        {
            commition_rete = commition;
        }

        void print_info()
        {
            Employee::print_info();
            std::cout << std::endl;
            std::cout << "\n\t\t***SALARY INFORMATION***" << endl;
            cout << "Gross Salary  | " << gross_sales << "\n";
            cout << "Commition Rete| " << commition_rete << std::endl;
        }
};

class Engineer : public Employee
{
    private:
        string specialty;
        int experince;
        int over_time_hours;
        int over_time_hours_rate;
    public:
        Engineer(string n, int id, double sal, string sp, int exp, int ovh, int ovr) : Employee(n, id, sal)
        {
            specialty = sp;
            experince = exp;
            over_time_hours = ovh;
            over_time_hours_rate = ovr;
        }

        float get_total_salary()
        {
            return salary + (over_time_hours * over_time_hours_rate);
        }

        void print_info()
        {
            Employee::print_info();
            std::cout << "\n\t\t***Engineer INFORMATION***" << endl;
            std::cout << "Specialty : " << specialty << std::endl;
            std::cout << "Experince : " << experince << std::endl;
            std::cout << std::endl;
            std::cout << "\n\t\t***SALARY INFORMATION***" << endl;
            cout << "Over time Hours : " << over_time_hours << "\n";
            cout << "Over time Hours Rete : " << over_time_hours_rate << std::endl;
        }
};

int main()
{
    Employee *emp_ptr;
    Sales S("Menna", 100, 5000, 50000, 0.10);
    Engineer E("Hassan", 500, 25000, "Sw Engineer", 5, 10, 50);
    
    emp_ptr = &S;
    emp_ptr->get_total_salary();
    emp_ptr->print_info();
    std::cout << std::endl;
    emp_ptr = &E;
    emp_ptr->get_total_salary();
    emp_ptr->print_info();

    return 0;
}