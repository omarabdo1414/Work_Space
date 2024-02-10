#include <stdio.h>

int main()
{
    int base, exponent,expo,power = 1;
    double power1 = 1.0;
    printf("Enter the base : ");
    scanf("%d", &base);
    printf("Enter the exponent : ");
    scanf("%d", &exponent);

    expo = exponent;
    if (exponent>0)
    {
        while(exponent != 0)
        {
            power = power * base;
            exponent--;
        }
        printf("%d of the power %d is : %d",base, expo, power);
    }
    else if(exponent < 0)
    {
        while(exponent != 0)
        {
            power1 = power1 *(1.0/base);
            exponent++;
        }
         printf("%d of the power %d is : %.10f",base, expo, power1);
    }
    else if(exponent == 0)
    {
        power1 = 1;
        power = 1;
        printf("%d of the power %d is : 1",base, expo);
    }
    

    else 
    printf("Math ERROR!\n\n[AC] : Cancel\n[<][>]Goto");
}