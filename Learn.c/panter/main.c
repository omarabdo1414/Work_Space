#include <stdio.h>
#include <string.h>

struct Employee
{
    char Name[50];
    char ID[5];
    double Salary;
};


int main()
{
    struct Employee emp1;
    emp1.Name = "Omar";
    emp1.ID = "12345";
    emp1.Salary = 5000;

    printf("%s\n",emp1.Name);
    printf("%s\n",emp1.ID);
    printf("%f\n",emp1.Salary);
    return 0;
}
